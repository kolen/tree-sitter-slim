// Based on tree-sitter-python:
// https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.cc

// TODO: change to <...> after configuring clangd
#include "tree_sitter/parser.h"
#include <ostream>
#include <vector>
#include <iostream>

enum TokenType {
  INDENT,
  DEDENT,
  NEWLINE,
  RUBY
};

class Scanner {
  std::vector<uint16_t> indents;

public:
  unsigned serialize(char *buffer) {
    std::vector<uint16_t>::iterator iter = indents.begin() + 1, end = indents.end();

    size_t i = 0;
    for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
      buffer[i++] = *iter;
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
      indents.push_back(buffer[i]);
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    bool found_end_of_line = false;
    int indent_length = 0;

    if(valid_symbols[RUBY]) {
      return scan_ruby(lexer, valid_symbols);
    }

    for(;;) {
      if (lexer->lookahead == ' ') {
        indent_length++;
        lexer->advance(lexer, true);
      } else if (lexer->lookahead == '\t') {
        // TODO: is tab size always 4?
        // https://github.com/slim-template/slim/blob/39cc3fb82b34092ec9e92b8057c5b60c426ffca5/lib/slim/parser.rb#L7
        indent_length += 4;
        lexer->advance(lexer, true);
      } else if (lexer->lookahead == '\n') {
        found_end_of_line = true;
        indent_length = 0;
        lexer->advance(lexer, true);
      } else if (lexer->lookahead == 0) {
        found_end_of_line = true;
        indent_length = 0;
        break;
      } else {
        break;
      }
    }

    if (found_end_of_line) {
      if (!indents.empty()) {
        uint16_t current_indent_length = indents.back();

        std::cout << "current indent: " << current_indent_length << " indent: " << indent_length <<
          " valid_symbols: " << valid_symbols[INDENT] << valid_symbols[DEDENT] << valid_symbols[NEWLINE]
                  << std::endl;

        if (valid_symbols[INDENT] && indent_length > current_indent_length) {
          indents.push_back(indent_length);
          lexer->result_symbol = INDENT;
          return true;
        }

        if (valid_symbols[DEDENT] && indent_length < current_indent_length) {
          indents.pop_back();
          lexer->result_symbol = DEDENT;
          return true;
        }
      }

      if (valid_symbols[NEWLINE]) {
        lexer->result_symbol = NEWLINE;
        return true;
      }
    }

    return false;
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
