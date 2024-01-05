// Based on tree-sitter-python:
// https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.cc

// TODO: change to <...> after configuring clangd
#include "tree_sitter/parser.h"
#include <ostream>
#include <vector>
#include <iostream>
#include <cassert>

enum TokenType {
  INDENT,
  DEDENT,
  LINE_START,
  LINE_END,
  ATTR_VALUE_QUOTED,
  RUBY
};

class Scanner {
  std::vector<uint16_t> indents;
  int dedents_to_output = 0;
  bool line_start_to_output = false;

public:
  unsigned serialize(char *buffer) {
    std::vector<uint16_t>::iterator iter = indents.begin() + 1, end = indents.end();

    size_t i = 0;
    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = (char)*iter; // FIXME: write 16-bit values
    }
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    indents.clear();
    indents.push_back(0);

    if (length == 0) {
      return;
    }

    size_t i = 0;
    for (; i < length; i++) {
      indents.push_back((uint16_t)buffer[i]); // FIXME: read 16-bit values
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    //std::cerr << "scan " << valid_symbols[0] << valid_symbols[1] << valid_symbols[2] << valid_symbols[3] << valid_symbols[4] << std::endl;

    if (dedents_to_output > 0) {
      if (valid_symbols[DEDENT]) {
        debug("dedent (deferred)");
        lexer->result_symbol = DEDENT;
        dedents_to_output--;
        return true;
      } else {
        return false;
      }
    }

    if (line_start_to_output) {
      if (valid_symbols[LINE_START]) {
        debug("line_start (deferred)");
        lexer->result_symbol = LINE_START;
        line_start_to_output = false;
        return true;
      } else {
        return false;
      }
    }

    // if(valid_symbols[RUBY]) {
    //   return scan_ruby(lexer, valid_symbols);
    // }

    if (valid_symbols[LINE_END]) {
      if (lexer->lookahead == '\n') {
        debug("line_end (initial)");
        lexer->advance(lexer, true);
        lexer->result_symbol = LINE_END;
        return true;
      } else if (lexer->eof(lexer)) {
        debug("line_end (initial, eof)");
        lexer->result_symbol = LINE_END;
        return true;
      }
    }

    if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
      bool scan_start_at_eof = lexer->eof(lexer);

      // This condition should only occur during error recovery
      if (lexer->get_column(lexer) != 0) {
        return false;
      }

      uint16_t last_indent_length = indents.back();

      // Skip and count spaces
      int indent_length = 0;
      for(;;) {
        if (lexer->lookahead == ' ') {
          indent_length++;
          lexer->advance(lexer, false);
        } else if (lexer->lookahead == '\t') {
          // Tab size is configurable in slim, we support only tab size of 4
          indent_length += 4;
          lexer->advance(lexer, false);
        } else if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
          indent_length = last_indent_length;
          break;
        } else {
          break;
        }
      }

      assert(!indents.empty());

      if (indent_length == last_indent_length) {
        if (scan_start_at_eof) {
          return false;
        }

        debug("line_start (indent matched)");
        lexer->result_symbol = LINE_START;
        return true;
      }

      if (valid_symbols[INDENT] && indent_length > last_indent_length) {
        debug("indent");
        indents.push_back(indent_length);
        lexer->result_symbol = INDENT;
        line_start_to_output = true;
        return true;
      }

      if (valid_symbols[DEDENT] && indent_length < last_indent_length) {
        auto indent = indents.end();
        for (;;) {
          if (indent == indents.begin()) {
            break;
          }
          indent--;

          if (indent_length == *indent) {
            break;
          } else if (indent_length > *indent) {
            debug("no matching indents");
            // We didn't found matching indent
            dedents_to_output = 0;
            return false;
          }

          dedents_to_output++;
        }
        assert(indents.size() > dedents_to_output); // First element is 0 and non-removable
        indents.resize(indents.size() - dedents_to_output);

        if (dedents_to_output > 0) {
          debug("dedent (immediate)");
          lexer->result_symbol = DEDENT;
          dedents_to_output--;
          line_start_to_output = true;
          return true;
        } else {
          // Shouldn't happen probably
          assert(false && "No dedents to output");
          return false;
        }
      }
    }

    if (valid_symbols[ATTR_VALUE_QUOTED]) {
      char quote_type = lexer->lookahead;
      if (quote_type == '\'' || quote_type == '"') {
        lexer->advance(lexer, false);
        return scan_attr_quoted(lexer, quote_type);
      }
    }

    if (valid_symbols[LINE_START]) {
      if (lexer->lookahead != ' ' && lexer->lookahead != '\t' && !lexer->eof(lexer)) {
        debug("line_start (initial)");
        lexer->result_symbol = LINE_START;
        return true;
      }
    }

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

  bool scan_ruby(TSLexer *lexer, const bool *valid_symbols) {
    bool ruby_continue_line = false;
    for(;;) {
      if (lexer->lookahead == '\n') {
        if (!ruby_continue_line) {
          lexer->result_symbol = RUBY;
          return true;
        } else {
          ruby_continue_line = false;
          lexer->advance(lexer, false); // TODO: maybe don't treat as space
        }
      } else if (lexer->lookahead == ',' || lexer->lookahead == '\\') {
        lexer->advance(lexer, false);
        ruby_continue_line = true;
      } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        lexer->advance(lexer, false);  // TODO: maybe don't treat as space
      } else if (lexer->lookahead == 0) {
        lexer->result_symbol = RUBY;
        return true;
      } else {
        ruby_continue_line = false;
        lexer->advance(lexer, false);
      }
    }
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
