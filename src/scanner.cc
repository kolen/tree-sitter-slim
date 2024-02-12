// Based on tree-sitter-python:
// https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.cc

// TODO: change to <...> after configuring clangd
#include "tree_sitter/parser.h"
#include <ostream>
#include <vector>
#include <iostream>
#include <cassert>

enum TokenType {
  BLOCK_START,
  BLOCK_END,
  LINE_SEPARATOR,

  ATTR_VALUE_QUOTED,
  ATTR_VALUE_RUBY,
  ATTR_VALUE_RUBY_P,
  ATTR_VALUE_RUBY_S,
  ATTR_VALUE_RUBY_B,
  RUBY
};

class Scanner {
  std::vector<uint16_t> indents;
  // 1 more than number of dedents to output. Value of 1 means need to
  // output line_separator.
  int dedents_to_output = 0;

public:
  unsigned serialize(char *buffer) {
    std::vector<uint16_t>::iterator iter = indents.begin(), end = indents.end();
    uint16_t *writer = (uint16_t*)buffer;
    size_t left_to_write = TREE_SITTER_SERIALIZATION_BUFFER_SIZE / sizeof(uint16_t);
    size_t length = 0;

    if (left_to_write < 1) {
      return 0;
    }

    *writer = (uint16_t)dedents_to_output;
    left_to_write--;
    length += sizeof(uint16_t);
    writer++;

    while(left_to_write > 0 && iter != end) {
      *writer = *iter;
      left_to_write--;
      length += sizeof(uint16_t);
      iter++;
      writer++;
    }

    return length;
  }

  void deserialize(const char *buffer, unsigned length) {
    indents.clear();
    uint16_t *reader = (uint16_t*)buffer;
    size_t left_to_read = length / sizeof(uint16_t);

    if (left_to_read < 1) {
      dedents_to_output = 0;
      return;
    }
    dedents_to_output = (int)(*reader);
    left_to_read--;
    reader++;

    while(left_to_read > 0) {
      indents.push_back(*reader);
      left_to_read--;
      reader++;
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (dedents_to_output > 0) {
      if (dedents_to_output == 1 && valid_symbols[LINE_SEPARATOR]) {
        debug("line_separator (deferred)");
        lexer->result_symbol = LINE_SEPARATOR;
        dedents_to_output--;
        return true;
      } else if (valid_symbols[BLOCK_END]) {
        debug("dedent (deferred)");
        lexer->result_symbol = BLOCK_END;
        dedents_to_output--;
        return true;
      } else {
        return false;
      }
    }

    if (valid_symbols[BLOCK_START] || valid_symbols[BLOCK_END] || valid_symbols[LINE_SEPARATOR]) {
      bool found_end_of_line = false;
      int indent_length = 0;

      // Find the first non-space character and determine indent length
      for(;;) {
        if (lexer->lookahead == '\n') {
          found_end_of_line = true;
          indent_length = 0;
          lexer->advance(lexer, true);
        } else if (lexer->lookahead == ' ') {
          lexer->advance(lexer, true);
          indent_length++;
        } else if (lexer->lookahead == '\t') {
          // Tab size is configurable in slim, we support only tab size of 4
          indent_length += 4;
          lexer->advance(lexer, true);
        } else if (lexer->eof(lexer)) {
          if (indents.empty()) {
            indent_length = 0;
          } else {
            indent_length = (int)*indents.begin();
          }
          found_end_of_line = true;
          break;
        } else {
          break;
        }
      }

      if (indents.empty()) {
        // Found initial indentation level
        indents.push_back(indent_length);
        lexer->result_symbol = BLOCK_START;
        return true;
      }

      int last_indent_length = (int)indents.back();

      if (valid_symbols[LINE_SEPARATOR] && found_end_of_line &&
          indent_length == last_indent_length && !lexer->eof(lexer)) {
        debug("line_separator");
        lexer->result_symbol = LINE_SEPARATOR;
        return true;
      }

      if (valid_symbols[BLOCK_END] && indent_length == last_indent_length && lexer->eof(lexer)) {
        lexer->result_symbol = BLOCK_END;
        return true;
      }

      if (valid_symbols[BLOCK_START] && found_end_of_line && indent_length > last_indent_length) {
        debug("block_start");
        indents.push_back(indent_length);
        lexer->result_symbol = BLOCK_START;
        return true;
      }

      if (valid_symbols[BLOCK_END] && found_end_of_line && indent_length < last_indent_length) {
        auto indent = indents.end();
        for(;;) {
          if (indent == indents.begin()) {
            break;
          }
          indent--;

          if (indent_length == *indent) {
            break;
          } else if (indent_length > *indent) {
            // No matching indent
            debug("no matching indent");
            dedents_to_output = 0;
            return false;
          }

          dedents_to_output++;
        }
        // Should not dedent to less than first indentation level
        assert(indents.size() > dedents_to_output);
        indents.resize(indents.size() - dedents_to_output);

        if (dedents_to_output > 0) {
          debug("dedent (immediate)");
          lexer->result_symbol = BLOCK_END;
          // Here we don't decrement dedents_to_output, because it
          // should be 1 more to indicate line_separator after all
          // dedents
          return true;
        } else {
          assert(false && "No dedents to output");
          return false;
        }
      }
    }

    if (valid_symbols[RUBY]) {
      return scan_ruby(lexer);
    }

    if (valid_symbols[ATTR_VALUE_QUOTED]) {
      char quote_type = lexer->lookahead;
      if (quote_type == '\'' || quote_type == '"') {
        lexer->advance(lexer, false);
        return scan_attr_quoted(lexer, quote_type);
      }
    }

    if (valid_symbols[ATTR_VALUE_RUBY] ||
        valid_symbols[ATTR_VALUE_RUBY_P] ||
        valid_symbols[ATTR_VALUE_RUBY_S] ||
        valid_symbols[ATTR_VALUE_RUBY_B]) {
      if (lexer->lookahead != ' ' &&
          lexer->lookahead != '\t' &&
          lexer->lookahead != '\n') {
        char closing_delimiter;
        TSSymbol result_symbol;

        if (valid_symbols[ATTR_VALUE_RUBY_P]) {
          closing_delimiter = ')';
          result_symbol = ATTR_VALUE_RUBY_P;
        } else if (valid_symbols[ATTR_VALUE_RUBY_S]) {
          closing_delimiter = ']';
          result_symbol = ATTR_VALUE_RUBY_S;
        } else if (valid_symbols[ATTR_VALUE_RUBY_B]) {
          closing_delimiter = '}';
          result_symbol = ATTR_VALUE_RUBY_B;
        } else {
          closing_delimiter = 0;
          result_symbol = ATTR_VALUE_RUBY;
        }

        return scan_attr_ruby(lexer, closing_delimiter, result_symbol);
      }
    }

    debug("No symbols valid");
    return false;
  }

  bool scan_attr_quoted(TSLexer *lexer, char quote_type) {
    int braces_level = 0;

    for(;;) {
      if (lexer->eof(lexer)) {
        return false;
      }

      if (braces_level == 0 && lexer->lookahead == quote_type) {
        lexer->advance(lexer, false);
        lexer->result_symbol = ATTR_VALUE_QUOTED;
        return true;
      }

      if (lexer->lookahead == '{') {
        braces_level += 1;
      } else if (lexer->lookahead == '}') {
        if (braces_level > 0) {
          braces_level -= 1;
        }
      }

      lexer->advance(lexer, false);
    }

    if (!lexer->eof(lexer)) {
      lexer->advance(lexer, false);
      lexer->result_symbol = ATTR_VALUE_QUOTED;
      return true;
    } else {
      return false;
    }
  }

  bool scan_attr_ruby(TSLexer *lexer, char closing_delimiter, TSSymbol result_symbol) {
    char internal_delimiter_open = 0;
    char internal_delimiter_close = 0;
    int internal_delimiter_nesting = 0;
    bool line_continuation = false;

    for(;;) {
      if (lexer->lookahead == '\n') {
        if (line_continuation) {
          lexer->advance(lexer, true);
          continue;
        } else {
          break;
        }
      } else if (lexer->eof(lexer)) {
        break;
      } else if (closing_delimiter && lexer->lookahead == closing_delimiter) {
        if (!internal_delimiter_nesting) {
          break;
        }
      } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        if (line_continuation) {
          lexer->advance(lexer, true);
          continue;
        } else if (!internal_delimiter_nesting) {
          break;
        }
      } else if (lexer->lookahead == '\\' || lexer->lookahead == ',') {
        line_continuation = true;
        lexer->advance(lexer, true);
        continue;
      } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        if (!line_continuation && !internal_delimiter_nesting) {
          break;
        }
      }

      if (internal_delimiter_nesting) {
        if (lexer->lookahead == internal_delimiter_open) {
          internal_delimiter_nesting++;
        } else if (lexer->lookahead == internal_delimiter_close) {
          internal_delimiter_nesting--;
        }
      } else {
        switch (lexer->lookahead) {
        case '(':
          internal_delimiter_open = '(';
          internal_delimiter_close = ')';
          internal_delimiter_nesting = 1;
          break;
        case '[':
          internal_delimiter_open = '[';
          internal_delimiter_close = ']';
          internal_delimiter_nesting = 1;
          break;
        case '{':
          internal_delimiter_open = '{';
          internal_delimiter_close = '}';
          internal_delimiter_nesting = 1;
          break;
        }
      }

      line_continuation = false;
      lexer->advance(lexer, true);
    }

    if (internal_delimiter_nesting) {
      return false;
    } else {
      lexer->result_symbol = result_symbol;
      return true;
    }
  }

  // parse_broken_line in original
  bool scan_ruby(TSLexer *lexer) {
    bool line_continuation = false;

    for(;;) {
      if (lexer->lookahead == '\n') {
        if (!line_continuation) {
          break;
        }
      } else if (lexer->eof(lexer)) {
        break;
      } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      } else if (lexer->lookahead == '\\' || lexer->lookahead == ',') {
        line_continuation = true;
      } else {
        line_continuation = false;
      }

      lexer->advance(lexer, false);
    }

    lexer->result_symbol = RUBY;
    return true;
  }

  void debug(const char* message) {
    //std::cerr << message << std::endl;
  }
};

extern "C" {
  void * tree_sitter_slim_external_scanner_create() {
    return new Scanner();
  }

  void tree_sitter_slim_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

  unsigned tree_sitter_slim_external_scanner_serialize(
                                                       void *payload,
                                                       char *buffer
                                                       ) {
      Scanner *scanner = static_cast<Scanner *>(payload);
      return scanner->serialize(buffer);
  }

  void tree_sitter_slim_external_scanner_deserialize(
                                                     void *payload,
                                                     const char *buffer,
                                                     unsigned length
                                                     ) {
      Scanner *scanner = static_cast<Scanner *>(payload);
      scanner->deserialize(buffer, length);
  }

  bool tree_sitter_slim_external_scanner_scan(
                                              void *payload,
                                              TSLexer *lexer,
                                              const bool *valid_symbols
                                              ) {
      Scanner *scanner = static_cast<Scanner *>(payload);
      return scanner->scan(lexer, valid_symbols);
  }
}
