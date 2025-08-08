#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

enum TokenType {
  BLOCK_START,
  BLOCK_END,
  LINE_SEPARATOR,

  ATTR_VALUE_OPENING_QUOTE_SINGLE,
  ATTR_VALUE_OPENING_QUOTE_DOUBLE,
  ATTR_VALUE_STATIC,
  ATTR_VALUE_INTERPOLATION_START,
  ATTR_VALUE_INTERPOLATION_CONTENTS,
  ATTR_VALUE_INTERPOLATION_END,

  ATTR_VALUE_RUBY,
  ATTR_VALUE_RUBY_P,
  ATTR_VALUE_RUBY_S,
  ATTR_VALUE_RUBY_B,
  RUBY,

  ERROR_SENTINEL
};

typedef struct {
  Array(uint16_t) indents;
  // 1 more than number of dedents to output. Value of 1 means need to
  // output line_separator.
  int dedents_to_output;
  char string_quote;
  int string_braces_level;
} Scanner;

void *tree_sitter_slim_external_scanner_create(void) {
  Scanner *scanner = ts_malloc(sizeof(Scanner));
  array_init(&scanner->indents);
  scanner->dedents_to_output = 0;
  scanner->string_quote = 0;
  scanner->string_braces_level = 0;
  return scanner;
}

void tree_sitter_slim_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner*)payload;
  array_delete(&scanner->indents);
}

#define serialize_write(type, value)                                    \
  length += sizeof(type);                                               \
  if (length > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {                 \
    return 0;                                                           \
  }                                                                     \
  *(type*)writer = (type)(value);                                       \
  writer += sizeof(type);

unsigned tree_sitter_slim_external_scanner_serialize(
                                                     void *payload,
                                                     char *buffer
                                                     ) {
  Scanner *scanner = (Scanner*)payload;

  char *writer = buffer;
  size_t length = 0;

  serialize_write(uint16_t, scanner->dedents_to_output);
  serialize_write(uint8_t, scanner->string_quote);
  serialize_write(uint8_t, scanner->string_braces_level);

  serialize_write(uint8_t, scanner->indents.size);
  uint16_t *current_indent = array_front(&scanner->indents);
  uint32_t indents_items_left = scanner->indents.size;
  while(indents_items_left > 0) {
    serialize_write(uint16_t, *current_indent);
    current_indent++;
    indents_items_left--;
  }

  return length;
}

#define deserialize_read(type, lhs)             \
  if (left_to_read < sizeof(type)) {            \
    return;                                     \
  }                                             \
  lhs = *(type*)(reader);                       \
  reader += sizeof(type);                       \
  left_to_read -= sizeof(type);

void tree_sitter_slim_external_scanner_deserialize(
                                                   void *payload,
                                                   const char *buffer,
                                                   unsigned length
                                                   ) {
  Scanner *scanner = (Scanner*)payload;
  array_clear(&scanner->indents);
  scanner->dedents_to_output = 0;
  scanner->string_quote = 0;
  scanner->string_braces_level = 0;

  char *reader = (char*)buffer;
  unsigned left_to_read = length;

  deserialize_read(uint16_t, scanner->dedents_to_output);
  deserialize_read(uint8_t, scanner->string_quote);
  deserialize_read(uint8_t, scanner->string_braces_level);

  int indents_size;
  deserialize_read(uint8_t, indents_size);
  while(indents_size > 0) {
    uint16_t indent;
    deserialize_read(uint16_t, indent);
    array_push(&scanner->indents, indent);
    indents_size--;
  }
}

static bool scan_attr_ruby(TSLexer *lexer, char closing_delimiter, TSSymbol result_symbol) {
  char internal_delimiter_open = 0;
  char internal_delimiter_close = 0;
  int internal_delimiter_nesting = 0;
  bool line_continuation = false;

  for(;;) {
    if (lexer->lookahead == '\n') {
      if (line_continuation) {
        lexer->advance(lexer, false);
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
        lexer->advance(lexer, false);
        continue;
      } else if (!internal_delimiter_nesting) {
        break;
      }
    } else if (lexer->lookahead == '\\' || lexer->lookahead == ',') {
      line_continuation = true;
      lexer->advance(lexer, false);
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
    lexer->advance(lexer, false);
  }

  if (internal_delimiter_nesting) {
    return false;
  } else {
    lexer->result_symbol = result_symbol;
    return true;
  }
}

static bool scan_ruby(TSLexer *lexer) {
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

static bool scan_attr_value_static(Scanner *scanner, TSLexer *lexer) {
  for (;;) {
    if (lexer->eof(lexer)) {
      return false;
    } else if (lexer->lookahead == '{') {
      scanner->string_braces_level++;
    } else if (lexer->lookahead == '}') {
      if (scanner->string_braces_level <= 0) {
        // Unmatched braces inside string literal cause error in slim
        scanner->string_braces_level = 0;
        scanner->string_quote = 0;
        return false;
      }
      scanner->string_braces_level--;
    } else if (lexer->lookahead == '#') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '{') {
        lexer->result_symbol = ATTR_VALUE_STATIC;
        return true;
      }
    } else if (lexer->lookahead == scanner->string_quote &&
               scanner->string_braces_level == 0) {
      lexer->result_symbol = ATTR_VALUE_STATIC;
      return true;
    }

    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  }
}

bool tree_sitter_slim_external_scanner_scan(
                                            void *payload,
                                            TSLexer *lexer,
                                            const bool *valid_symbols
                                            ) {
  Scanner *scanner = (Scanner*)payload;

  if (scanner->dedents_to_output > 0) {
    if (scanner->dedents_to_output == 1 && valid_symbols[LINE_SEPARATOR]) {
      lexer->result_symbol = LINE_SEPARATOR;
      scanner->dedents_to_output--;
      return true;
    } else if (valid_symbols[BLOCK_END]) {
      lexer->result_symbol = BLOCK_END;
      scanner->dedents_to_output--;
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
        if (scanner->indents.size == 0) {
          indent_length = 0;
        } else {
          indent_length = (int)*array_front(&scanner->indents);
        }
        found_end_of_line = true;
        break;
      } else {
        break;
      }
    }

    if (scanner->indents.size == 0) {
      // Found initial indentation level
      array_push(&scanner->indents, indent_length);

      if (valid_symbols[BLOCK_START] && !lexer->eof(lexer)) {
        lexer->result_symbol = BLOCK_START;
        return true;
      } else {
        return false;
      }
    }

    int last_indent_length = (int)*array_back(&scanner->indents);

    if (valid_symbols[LINE_SEPARATOR] && found_end_of_line &&
        indent_length == last_indent_length && !lexer->eof(lexer)) {
      lexer->result_symbol = LINE_SEPARATOR;
      return true;
    }

    if (valid_symbols[BLOCK_END] && indent_length == last_indent_length && lexer->eof(lexer)) {
      lexer->result_symbol = BLOCK_END;
      return true;
    }

    if (valid_symbols[BLOCK_START] && found_end_of_line && indent_length > last_indent_length) {
      array_push(&scanner->indents, indent_length);
      lexer->result_symbol = BLOCK_START;
      return true;
    }

    if (valid_symbols[BLOCK_END] && found_end_of_line && indent_length < last_indent_length) {
      uint16_t *indent = array_back(&scanner->indents);
      uint16_t *first_indent = array_front(&scanner->indents);

      for(;;) {

        if (indent_length == *indent) {
          break;
        } else if (indent_length > *indent) {
          // No matching indent
          scanner->dedents_to_output = 0;
          return false;
        }

        scanner->dedents_to_output++;

        if (indent == first_indent) {
          break;
        }
        indent--;
      }
      // Should not dedent to less than first indentation level
      assert((int)scanner->indents.size > scanner->dedents_to_output);
      scanner->indents.size -= scanner->dedents_to_output;

      if (scanner->dedents_to_output > 0) {
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

  if (valid_symbols[RUBY] && !valid_symbols[ERROR_SENTINEL]) {
    return scan_ruby(lexer);
  }

  if (valid_symbols[ATTR_VALUE_OPENING_QUOTE_SINGLE] ||
      valid_symbols[ATTR_VALUE_OPENING_QUOTE_DOUBLE]) {
    if (lexer->lookahead == '\'') {
      lexer->advance(lexer, false);
      lexer->result_symbol = ATTR_VALUE_OPENING_QUOTE_SINGLE;
      scanner->string_quote = '\'';
      scanner->string_braces_level = 0;
      return true;
    } else if (lexer->lookahead == '"') {
      lexer->advance(lexer, false);
      lexer->result_symbol = ATTR_VALUE_OPENING_QUOTE_DOUBLE;
      scanner->string_quote = '"';
      scanner->string_braces_level = 0;
      return true;
    }
  }

  if (valid_symbols[ATTR_VALUE_INTERPOLATION_START] && valid_symbols[ATTR_VALUE_STATIC]) {
    if (lexer->lookahead == '#') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '{') {
        lexer->advance(lexer, false);
        lexer->result_symbol = ATTR_VALUE_INTERPOLATION_START;
        return true;
      } else {
        return scan_attr_value_static(scanner, lexer);
      }
    } else {
      return scan_attr_value_static(scanner, lexer);
    }
  } else if (valid_symbols[ATTR_VALUE_INTERPOLATION_CONTENTS]) {
    int interpolation_braces_level = 0;
    for (;;) {
      if (lexer->eof(lexer)) {
        return false;
      } else if (lexer->lookahead == '{') {
        scanner->string_braces_level++;
        interpolation_braces_level++;
      } else if (lexer->lookahead == '}') {
        if (interpolation_braces_level == 0) {
          lexer->result_symbol = ATTR_VALUE_INTERPOLATION_CONTENTS;
          return true;
        }
        scanner->string_braces_level--;
        interpolation_braces_level--;
      }
      lexer->advance(lexer, false);
    }
  } else if (valid_symbols[ATTR_VALUE_INTERPOLATION_END]) {
    if (lexer->lookahead == '}') {
      if (scanner->string_braces_level <= 0) {
        return false;
      }
      scanner->string_braces_level--;
      lexer->advance(lexer, false);
      lexer->result_symbol = ATTR_VALUE_INTERPOLATION_END;
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

  return false;
}
