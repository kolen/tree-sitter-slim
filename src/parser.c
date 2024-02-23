#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum ts_symbol_identifiers {
  aux_sym__nested_inline_expansion_token1 = 1,
  sym__closed_tag = 2,
  sym_tag_name = 3,
  anon_sym_DOT = 4,
  anon_sym_POUND = 5,
  sym_attr_shortcut_custom = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_STAR = 13,
  sym__attr_name = 14,
  sym_attr_assignment = 15,
  sym_attr_assignment_noescape = 16,
  sym__element_rest_text = 17,
  sym_css_identifier = 18,
  anon_sym_doctype = 19,
  anon_sym_html = 20,
  anon_sym_5 = 21,
  anon_sym_1_DOT1 = 22,
  anon_sym_strict = 23,
  anon_sym_frameset = 24,
  anon_sym_mobile = 25,
  anon_sym_basic = 26,
  anon_sym_transitional = 27,
  anon_sym_xml = 28,
  sym_doctype_xml_encoding = 29,
  anon_sym_DASH = 30,
  anon_sym_EQ = 31,
  anon_sym_EQ_EQ = 32,
  sym_output_modifier_leading_whitespace = 33,
  sym_output_modifier_trailing_whitespace = 34,
  sym_output_modifier_legacy_trailing_whitespace = 35,
  anon_sym_COLON = 36,
  anon_sym_markdown = 37,
  anon_sym_textile = 38,
  anon_sym_rdoc = 39,
  anon_sym_coffee = 40,
  anon_sym_less = 41,
  anon_sym_sass = 42,
  anon_sym_scss = 43,
  anon_sym_javascript = 44,
  anon_sym_css = 45,
  anon_sym_ruby = 46,
  anon_sym_PIPE = 47,
  sym_verbatim_text_modifier_trailing_whitespace = 48,
  sym__text_line = 49,
  sym__html_comment_conditional_marker = 50,
  sym__html_comment_condition = 51,
  aux_sym_html_comment_token1 = 52,
  aux_sym_code_comment_token1 = 53,
  sym__space_or_newline = 54,
  sym__space = 55,
  sym__block_start = 56,
  sym__block_end = 57,
  sym__line_separator = 58,
  sym__attr_value_quoted = 59,
  sym__attr_value_ruby = 60,
  sym__attr_value_ruby_p = 61,
  sym__attr_value_ruby_s = 62,
  sym__attr_value_ruby_b = 63,
  sym_ruby = 64,
  sym__error_sentinel = 65,
  sym_source_file = 66,
  sym__block = 67,
  sym__line = 68,
  sym_element = 69,
  sym__inline = 70,
  sym_nested_inline = 71,
  sym__nested_inline_expansion = 72,
  sym_attr_shortcuts = 73,
  sym__attr_shortcut = 74,
  sym_attr_shortcut_class = 75,
  sym_attr_shortcut_id = 76,
  sym_nested = 77,
  sym_attrs = 78,
  sym__attrs_plain = 79,
  sym__attrs_delimited = 80,
  sym__attrs_delimited_p = 81,
  sym__attrs_delimited_s = 82,
  sym__attrs_delimited_b = 83,
  sym__attr_delimited_p = 84,
  sym__attr_delimited_s = 85,
  sym__attr_delimited_b = 86,
  sym__attr_delimited_value_p = 87,
  sym__attr_delimited_value_s = 88,
  sym__attr_delimited_value_b = 89,
  sym__attr_delimited_splat_p = 90,
  sym__attr_delimited_splat_s = 91,
  sym__attr_delimited_splat_b = 92,
  sym_attr = 93,
  sym_attr_name = 94,
  sym_attr_value = 95,
  sym_attr_boolean = 96,
  sym_element_text = 97,
  sym_doctype = 98,
  sym__doctype_html = 99,
  sym_doctype_html5 = 100,
  sym_doctype_xhtml = 101,
  sym__doctype_xml = 102,
  sym__ruby_block = 103,
  sym_ruby_block_control = 104,
  sym_ruby_block_output = 105,
  sym_ruby_block_output_noescape = 106,
  aux_sym__output_modifiers = 107,
  sym__output_modifier = 108,
  sym_embedded_engine = 109,
  sym_embedded_engine_name = 110,
  sym_verbatim_text = 111,
  sym__text = 112,
  sym__text_nested = 113,
  sym_html_comment_conditional = 114,
  sym_html_comment_condition = 115,
  sym__html_comment_conditional_incomplete = 116,
  sym_html_comment = 117,
  sym_code_comment = 118,
  aux_sym__block_repeat1 = 119,
  aux_sym_attr_shortcuts_repeat1 = 120,
  aux_sym__attrs_plain_repeat1 = 121,
  aux_sym__attrs_delimited_p_repeat1 = 122,
  aux_sym__attrs_delimited_s_repeat1 = 123,
  aux_sym__attrs_delimited_b_repeat1 = 124,
  aux_sym_element_text_repeat1 = 125,
  aux_sym__text_nested_repeat1 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__nested_inline_expansion_token1] = "_nested_inline_expansion_token1",
  [sym__closed_tag] = "_closed_tag",
  [sym_tag_name] = "tag_name",
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [sym_attr_shortcut_custom] = "attr_shortcut_custom",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [sym__attr_name] = "_attr_name",
  [sym_attr_assignment] = "attr_assignment",
  [sym_attr_assignment_noescape] = "attr_assignment_noescape",
  [sym__element_rest_text] = "_element_rest_text",
  [sym_css_identifier] = "css_identifier",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "html",
  [anon_sym_5] = "5",
  [anon_sym_1_DOT1] = "1.1",
  [anon_sym_strict] = "strict",
  [anon_sym_frameset] = "frameset",
  [anon_sym_mobile] = "mobile",
  [anon_sym_basic] = "basic",
  [anon_sym_transitional] = "transitional",
  [anon_sym_xml] = "xml",
  [sym_doctype_xml_encoding] = "doctype_xml_encoding",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [sym_output_modifier_leading_whitespace] = "output_modifier_leading_whitespace",
  [sym_output_modifier_trailing_whitespace] = "output_modifier_trailing_whitespace",
  [sym_output_modifier_legacy_trailing_whitespace] = "output_modifier_legacy_trailing_whitespace",
  [anon_sym_COLON] = ":",
  [anon_sym_markdown] = "markdown",
  [anon_sym_textile] = "textile",
  [anon_sym_rdoc] = "rdoc",
  [anon_sym_coffee] = "coffee",
  [anon_sym_less] = "less",
  [anon_sym_sass] = "sass",
  [anon_sym_scss] = "scss",
  [anon_sym_javascript] = "javascript",
  [anon_sym_css] = "css",
  [anon_sym_ruby] = "ruby",
  [anon_sym_PIPE] = "|",
  [sym_verbatim_text_modifier_trailing_whitespace] = "verbatim_text_modifier_trailing_whitespace",
  [sym__text_line] = "_text_line",
  [sym__html_comment_conditional_marker] = "_html_comment_conditional_marker",
  [sym__html_comment_condition] = "_html_comment_condition",
  [aux_sym_html_comment_token1] = "html_comment_token1",
  [aux_sym_code_comment_token1] = "code_comment_token1",
  [sym__space_or_newline] = "_space_or_newline",
  [sym__space] = "_space",
  [sym__block_start] = "_block_start",
  [sym__block_end] = "_block_end",
  [sym__line_separator] = "_line_separator",
  [sym__attr_value_quoted] = "_attr_value_quoted",
  [sym__attr_value_ruby] = "attr_splat",
  [sym__attr_value_ruby_p] = "ruby_expr",
  [sym__attr_value_ruby_s] = "ruby_expr",
  [sym__attr_value_ruby_b] = "ruby_expr",
  [sym_ruby] = "ruby",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym__line] = "_line",
  [sym_element] = "element",
  [sym__inline] = "_inline",
  [sym_nested_inline] = "nested_inline",
  [sym__nested_inline_expansion] = "_nested_inline_expansion",
  [sym_attr_shortcuts] = "attr_shortcuts",
  [sym__attr_shortcut] = "_attr_shortcut",
  [sym_attr_shortcut_class] = "attr_shortcut_class",
  [sym_attr_shortcut_id] = "attr_shortcut_id",
  [sym_nested] = "nested",
  [sym_attrs] = "attrs",
  [sym__attrs_plain] = "_attrs_plain",
  [sym__attrs_delimited] = "_attrs_delimited",
  [sym__attrs_delimited_p] = "_attrs_delimited_p",
  [sym__attrs_delimited_s] = "_attrs_delimited_s",
  [sym__attrs_delimited_b] = "_attrs_delimited_b",
  [sym__attr_delimited_p] = "attr",
  [sym__attr_delimited_s] = "attr",
  [sym__attr_delimited_b] = "attr",
  [sym__attr_delimited_value_p] = "attr_value",
  [sym__attr_delimited_value_s] = "attr_value",
  [sym__attr_delimited_value_b] = "attr_value",
  [sym__attr_delimited_splat_p] = "attr_splat",
  [sym__attr_delimited_splat_s] = "attr_splat",
  [sym__attr_delimited_splat_b] = "attr_splat",
  [sym_attr] = "attr",
  [sym_attr_name] = "attr_name",
  [sym_attr_value] = "attr_value",
  [sym_attr_boolean] = "attr_boolean",
  [sym_element_text] = "element_text",
  [sym_doctype] = "doctype",
  [sym__doctype_html] = "_doctype_html",
  [sym_doctype_html5] = "doctype_html5",
  [sym_doctype_xhtml] = "doctype_xhtml",
  [sym__doctype_xml] = "_doctype_xml",
  [sym__ruby_block] = "_ruby_block",
  [sym_ruby_block_control] = "ruby_block_control",
  [sym_ruby_block_output] = "ruby_block_output",
  [sym_ruby_block_output_noescape] = "ruby_block_output_noescape",
  [aux_sym__output_modifiers] = "_output_modifiers",
  [sym__output_modifier] = "_output_modifier",
  [sym_embedded_engine] = "embedded_engine",
  [sym_embedded_engine_name] = "embedded_engine_name",
  [sym_verbatim_text] = "verbatim_text",
  [sym__text] = "_text",
  [sym__text_nested] = "_text_nested",
  [sym_html_comment_conditional] = "html_comment_conditional",
  [sym_html_comment_condition] = "html_comment_condition",
  [sym__html_comment_conditional_incomplete] = "_html_comment_conditional_incomplete",
  [sym_html_comment] = "html_comment",
  [sym_code_comment] = "code_comment",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_attr_shortcuts_repeat1] = "attr_shortcuts_repeat1",
  [aux_sym__attrs_plain_repeat1] = "_attrs_plain_repeat1",
  [aux_sym__attrs_delimited_p_repeat1] = "_attrs_delimited_p_repeat1",
  [aux_sym__attrs_delimited_s_repeat1] = "_attrs_delimited_s_repeat1",
  [aux_sym__attrs_delimited_b_repeat1] = "_attrs_delimited_b_repeat1",
  [aux_sym_element_text_repeat1] = "element_text_repeat1",
  [aux_sym__text_nested_repeat1] = "_text_nested_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__nested_inline_expansion_token1] = aux_sym__nested_inline_expansion_token1,
  [sym__closed_tag] = sym__closed_tag,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_attr_shortcut_custom] = sym_attr_shortcut_custom,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym__attr_name] = sym__attr_name,
  [sym_attr_assignment] = sym_attr_assignment,
  [sym_attr_assignment_noescape] = sym_attr_assignment_noescape,
  [sym__element_rest_text] = sym__element_rest_text,
  [sym_css_identifier] = sym_css_identifier,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_1_DOT1] = anon_sym_1_DOT1,
  [anon_sym_strict] = anon_sym_strict,
  [anon_sym_frameset] = anon_sym_frameset,
  [anon_sym_mobile] = anon_sym_mobile,
  [anon_sym_basic] = anon_sym_basic,
  [anon_sym_transitional] = anon_sym_transitional,
  [anon_sym_xml] = anon_sym_xml,
  [sym_doctype_xml_encoding] = sym_doctype_xml_encoding,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_output_modifier_leading_whitespace] = sym_output_modifier_leading_whitespace,
  [sym_output_modifier_trailing_whitespace] = sym_output_modifier_trailing_whitespace,
  [sym_output_modifier_legacy_trailing_whitespace] = sym_output_modifier_legacy_trailing_whitespace,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_markdown] = anon_sym_markdown,
  [anon_sym_textile] = anon_sym_textile,
  [anon_sym_rdoc] = anon_sym_rdoc,
  [anon_sym_coffee] = anon_sym_coffee,
  [anon_sym_less] = anon_sym_less,
  [anon_sym_sass] = anon_sym_sass,
  [anon_sym_scss] = anon_sym_scss,
  [anon_sym_javascript] = anon_sym_javascript,
  [anon_sym_css] = anon_sym_css,
  [anon_sym_ruby] = anon_sym_ruby,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_verbatim_text_modifier_trailing_whitespace] = sym_verbatim_text_modifier_trailing_whitespace,
  [sym__text_line] = sym__text_line,
  [sym__html_comment_conditional_marker] = sym__html_comment_conditional_marker,
  [sym__html_comment_condition] = sym__html_comment_condition,
  [aux_sym_html_comment_token1] = aux_sym_html_comment_token1,
  [aux_sym_code_comment_token1] = aux_sym_code_comment_token1,
  [sym__space_or_newline] = sym__space_or_newline,
  [sym__space] = sym__space,
  [sym__block_start] = sym__block_start,
  [sym__block_end] = sym__block_end,
  [sym__line_separator] = sym__line_separator,
  [sym__attr_value_quoted] = sym__attr_value_quoted,
  [sym__attr_value_ruby] = sym__attr_value_ruby,
  [sym__attr_value_ruby_p] = sym__attr_value_ruby_p,
  [sym__attr_value_ruby_s] = sym__attr_value_ruby_p,
  [sym__attr_value_ruby_b] = sym__attr_value_ruby_p,
  [sym_ruby] = sym_ruby,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym__line] = sym__line,
  [sym_element] = sym_element,
  [sym__inline] = sym__inline,
  [sym_nested_inline] = sym_nested_inline,
  [sym__nested_inline_expansion] = sym__nested_inline_expansion,
  [sym_attr_shortcuts] = sym_attr_shortcuts,
  [sym__attr_shortcut] = sym__attr_shortcut,
  [sym_attr_shortcut_class] = sym_attr_shortcut_class,
  [sym_attr_shortcut_id] = sym_attr_shortcut_id,
  [sym_nested] = sym_nested,
  [sym_attrs] = sym_attrs,
  [sym__attrs_plain] = sym__attrs_plain,
  [sym__attrs_delimited] = sym__attrs_delimited,
  [sym__attrs_delimited_p] = sym__attrs_delimited_p,
  [sym__attrs_delimited_s] = sym__attrs_delimited_s,
  [sym__attrs_delimited_b] = sym__attrs_delimited_b,
  [sym__attr_delimited_p] = sym_attr,
  [sym__attr_delimited_s] = sym_attr,
  [sym__attr_delimited_b] = sym_attr,
  [sym__attr_delimited_value_p] = sym_attr_value,
  [sym__attr_delimited_value_s] = sym_attr_value,
  [sym__attr_delimited_value_b] = sym_attr_value,
  [sym__attr_delimited_splat_p] = sym__attr_value_ruby,
  [sym__attr_delimited_splat_s] = sym__attr_value_ruby,
  [sym__attr_delimited_splat_b] = sym__attr_value_ruby,
  [sym_attr] = sym_attr,
  [sym_attr_name] = sym_attr_name,
  [sym_attr_value] = sym_attr_value,
  [sym_attr_boolean] = sym_attr_boolean,
  [sym_element_text] = sym_element_text,
  [sym_doctype] = sym_doctype,
  [sym__doctype_html] = sym__doctype_html,
  [sym_doctype_html5] = sym_doctype_html5,
  [sym_doctype_xhtml] = sym_doctype_xhtml,
  [sym__doctype_xml] = sym__doctype_xml,
  [sym__ruby_block] = sym__ruby_block,
  [sym_ruby_block_control] = sym_ruby_block_control,
  [sym_ruby_block_output] = sym_ruby_block_output,
  [sym_ruby_block_output_noescape] = sym_ruby_block_output_noescape,
  [aux_sym__output_modifiers] = aux_sym__output_modifiers,
  [sym__output_modifier] = sym__output_modifier,
  [sym_embedded_engine] = sym_embedded_engine,
  [sym_embedded_engine_name] = sym_embedded_engine_name,
  [sym_verbatim_text] = sym_verbatim_text,
  [sym__text] = sym__text,
  [sym__text_nested] = sym__text_nested,
  [sym_html_comment_conditional] = sym_html_comment_conditional,
  [sym_html_comment_condition] = sym_html_comment_condition,
  [sym__html_comment_conditional_incomplete] = sym__html_comment_conditional_incomplete,
  [sym_html_comment] = sym_html_comment,
  [sym_code_comment] = sym_code_comment,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_attr_shortcuts_repeat1] = aux_sym_attr_shortcuts_repeat1,
  [aux_sym__attrs_plain_repeat1] = aux_sym__attrs_plain_repeat1,
  [aux_sym__attrs_delimited_p_repeat1] = aux_sym__attrs_delimited_p_repeat1,
  [aux_sym__attrs_delimited_s_repeat1] = aux_sym__attrs_delimited_s_repeat1,
  [aux_sym__attrs_delimited_b_repeat1] = aux_sym__attrs_delimited_b_repeat1,
  [aux_sym_element_text_repeat1] = aux_sym_element_text_repeat1,
  [aux_sym__text_nested_repeat1] = aux_sym__text_nested_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__nested_inline_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__closed_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_attr_shortcut_custom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__attr_name] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_assignment_noescape] = {
    .visible = true,
    .named = true,
  },
  [sym__element_rest_text] = {
    .visible = false,
    .named = true,
  },
  [sym_css_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frameset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mobile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transitional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [sym_doctype_xml_encoding] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_output_modifier_leading_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_output_modifier_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_output_modifier_legacy_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_markdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rdoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coffee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_less] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_javascript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_css] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_verbatim_text_modifier_trailing_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__text_line] = {
    .visible = false,
    .named = true,
  },
  [sym__html_comment_conditional_marker] = {
    .visible = false,
    .named = true,
  },
  [sym__html_comment_condition] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_html_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__space_or_newline] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value_quoted] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value_ruby] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_value_ruby_b] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym__inline] = {
    .visible = false,
    .named = true,
  },
  [sym_nested_inline] = {
    .visible = true,
    .named = true,
  },
  [sym__nested_inline_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_shortcuts] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_shortcut] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_shortcut_class] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_shortcut_id] = {
    .visible = true,
    .named = true,
  },
  [sym_nested] = {
    .visible = true,
    .named = true,
  },
  [sym_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_plain] = {
    .visible = false,
    .named = true,
  },
  [sym__attrs_delimited] = {
    .visible = false,
    .named = true,
  },
  [sym__attrs_delimited_p] = {
    .visible = false,
    .named = true,
  },
  [sym__attrs_delimited_s] = {
    .visible = false,
    .named = true,
  },
  [sym__attrs_delimited_b] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_value_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_value_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_value_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_b] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_element_text] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__doctype_html] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype_html5] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype_xhtml] = {
    .visible = true,
    .named = true,
  },
  [sym__doctype_xml] = {
    .visible = false,
    .named = true,
  },
  [sym__ruby_block] = {
    .visible = false,
    .named = true,
  },
  [sym_ruby_block_control] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_output] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block_output_noescape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__output_modifiers] = {
    .visible = false,
    .named = false,
  },
  [sym__output_modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_embedded_engine] = {
    .visible = true,
    .named = true,
  },
  [sym_embedded_engine_name] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__text_nested] = {
    .visible = false,
    .named = true,
  },
  [sym_html_comment_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_html_comment_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__html_comment_conditional_incomplete] = {
    .visible = false,
    .named = true,
  },
  [sym_html_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_code_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_shortcuts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_plain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_p_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_s_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attrs_delimited_b_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_nested_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_assignment = 1,
  field_attr_shortcuts = 2,
  field_attrs = 3,
  field_name = 4,
  field_nested = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assignment] = "assignment",
  [field_attr_shortcuts] = "attr_shortcuts",
  [field_attrs] = "attrs",
  [field_name] = "name",
  [field_nested] = "nested",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 1},
  [14] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_attr_shortcuts, 0},
  [2] =
    {field_attr_shortcuts, 1},
    {field_name, 0},
  [4] =
    {field_attrs, 1},
    {field_name, 0},
  [6] =
    {field_attr_shortcuts, 0},
    {field_attrs, 1},
  [8] =
    {field_assignment, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [11] =
    {field_attr_shortcuts, 1},
    {field_attrs, 2},
    {field_name, 0},
  [14] =
    {field_attrs, 2},
    {field_name, 0},
  [16] =
    {field_nested, 2},
  [17] =
    {field_attr_shortcuts, 0},
    {field_attrs, 2},
  [19] =
    {field_assignment, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [22] =
    {field_attr_shortcuts, 1},
    {field_attrs, 3},
    {field_name, 0},
  [25] =
    {field_nested, 3},
  [26] =
    {field_assignment, 1},
    {field_name, 0},
    {field_value, 2},
  [29] =
    {field_nested, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
    [0] = sym__attr_value_ruby_p,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 61,
  [65] = 60,
  [66] = 66,
  [67] = 67,
  [68] = 59,
  [69] = 69,
  [70] = 58,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 33,
  [78] = 78,
  [79] = 34,
  [80] = 80,
  [81] = 81,
  [82] = 75,
  [83] = 83,
  [84] = 81,
  [85] = 80,
  [86] = 78,
  [87] = 76,
  [88] = 83,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 26,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 123,
  [131] = 131,
  [132] = 38,
  [133] = 39,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 41,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 40,
  [153] = 36,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 161,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 170,
  [175] = 171,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 169,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 179,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 176,
  [212] = 212,
  [213] = 194,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 187,
  [220] = 220,
  [221] = 221,
  [222] = 172,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 189,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 232,
  [247] = 50,
  [248] = 46,
  [249] = 43,
  [250] = 45,
  [251] = 47,
  [252] = 49,
  [253] = 253,
  [254] = 56,
  [255] = 44,
  [256] = 256,
  [257] = 52,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 259,
  [262] = 51,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 226,
  [272] = 272,
  [273] = 253,
  [274] = 240,
};

static inline bool sym__attr_name_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '"' || (c >= '\'' && c <= ')')))
    : (c <= '0' || (c < '{'
      ? (c < '['
        ? (c >= '<' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__attr_name_character_set_2(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= ')')))
    : (c <= '0' || (c < '{'
      ? (c < '['
        ? (c >= '<' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '5') ADVANCE(214);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '<') ADVANCE(228);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'j') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != '/' &&
          lookahead != '0' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(205);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '<') ADVANCE(228);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '0') ADVANCE(209);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(116);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'j') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'j') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '-') ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '<') ADVANCE(228);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '5') ADVANCE(214);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(36);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (!sym__attr_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(215);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__nested_inline_expansion_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(116);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(182);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(200);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(170);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(133);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(167);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(162);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(188);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 't') ADVANCE(180);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(203);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(155);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(234);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(219);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(196);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(193);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(181);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(173);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(132);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(126);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(235);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(218);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(211);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(233);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(142);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(187);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(194);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(191);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(146);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(150);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(177);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(175);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(135);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(163);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(197);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(137);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(164);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'k') ADVANCE(139);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(221);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(213);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(220);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(143);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(145);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(160);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(161);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(149);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(232);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(129);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(189);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 's') ADVANCE(183);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(136);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(201);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(134);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(169);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(144);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(195);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(159);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(128);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(157);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(152);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(154);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(240);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(236);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(237);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(238);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(184);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(138);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(156);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(185);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(148);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(186);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(216);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(217);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(239);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(204);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(153);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(166);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(158);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'v') ADVANCE(130);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'w') ADVANCE(168);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'x') ADVANCE(199);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(241);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(176);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__attr_name);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_attr_assignment_noescape);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__element_rest_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_css_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_frameset);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_mobile);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_basic);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_transitional);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_doctype_xml_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_output_modifier_leading_whitespace);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_output_modifier_trailing_whitespace);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_output_modifier_legacy_trailing_whitespace);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_markdown);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_textile);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_rdoc);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_coffee);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_sass);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_scss);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_javascript);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_css);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_ruby);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_verbatim_text_modifier_trailing_whitespace);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__html_comment_conditional_marker);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__html_comment_condition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '!') ADVANCE(247);
      if (lookahead == '[') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 3, .external_lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2, .external_lex_state = 4},
  [10] = {.lex_state = 5, .external_lex_state = 4},
  [11] = {.lex_state = 5, .external_lex_state = 4},
  [12] = {.lex_state = 5, .external_lex_state = 4},
  [13] = {.lex_state = 5, .external_lex_state = 4},
  [14] = {.lex_state = 5, .external_lex_state = 4},
  [15] = {.lex_state = 2, .external_lex_state = 4},
  [16] = {.lex_state = 2, .external_lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 12, .external_lex_state = 4},
  [19] = {.lex_state = 2, .external_lex_state = 4},
  [20] = {.lex_state = 2, .external_lex_state = 4},
  [21] = {.lex_state = 12, .external_lex_state = 4},
  [22] = {.lex_state = 12, .external_lex_state = 4},
  [23] = {.lex_state = 12, .external_lex_state = 4},
  [24] = {.lex_state = 12, .external_lex_state = 4},
  [25] = {.lex_state = 12, .external_lex_state = 4},
  [26] = {.lex_state = 5, .external_lex_state = 4},
  [27] = {.lex_state = 9, .external_lex_state = 4},
  [28] = {.lex_state = 9, .external_lex_state = 4},
  [29] = {.lex_state = 9, .external_lex_state = 4},
  [30] = {.lex_state = 9, .external_lex_state = 4},
  [31] = {.lex_state = 9, .external_lex_state = 4},
  [32] = {.lex_state = 9, .external_lex_state = 4},
  [33] = {.lex_state = 7, .external_lex_state = 4},
  [34] = {.lex_state = 7, .external_lex_state = 4},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 7, .external_lex_state = 4},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7, .external_lex_state = 4},
  [39] = {.lex_state = 7, .external_lex_state = 4},
  [40] = {.lex_state = 7, .external_lex_state = 4},
  [41] = {.lex_state = 7, .external_lex_state = 4},
  [42] = {.lex_state = 15, .external_lex_state = 4},
  [43] = {.lex_state = 12, .external_lex_state = 4},
  [44] = {.lex_state = 12, .external_lex_state = 4},
  [45] = {.lex_state = 12, .external_lex_state = 4},
  [46] = {.lex_state = 12, .external_lex_state = 4},
  [47] = {.lex_state = 12, .external_lex_state = 4},
  [48] = {.lex_state = 15, .external_lex_state = 4},
  [49] = {.lex_state = 12, .external_lex_state = 4},
  [50] = {.lex_state = 12, .external_lex_state = 4},
  [51] = {.lex_state = 12, .external_lex_state = 4},
  [52] = {.lex_state = 12, .external_lex_state = 4},
  [53] = {.lex_state = 15, .external_lex_state = 4},
  [54] = {.lex_state = 15, .external_lex_state = 4},
  [55] = {.lex_state = 15, .external_lex_state = 4},
  [56] = {.lex_state = 12, .external_lex_state = 4},
  [57] = {.lex_state = 15, .external_lex_state = 4},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 14, .external_lex_state = 4},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 54, .external_lex_state = 4},
  [92] = {.lex_state = 2, .external_lex_state = 5},
  [93] = {.lex_state = 2, .external_lex_state = 5},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 54, .external_lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 54, .external_lex_state = 4},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 2, .external_lex_state = 5},
  [101] = {.lex_state = 54, .external_lex_state = 4},
  [102] = {.lex_state = 2, .external_lex_state = 5},
  [103] = {.lex_state = 2, .external_lex_state = 5},
  [104] = {.lex_state = 2, .external_lex_state = 5},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 54, .external_lex_state = 4},
  [107] = {.lex_state = 54, .external_lex_state = 4},
  [108] = {.lex_state = 2, .external_lex_state = 5},
  [109] = {.lex_state = 2, .external_lex_state = 5},
  [110] = {.lex_state = 16, .external_lex_state = 4},
  [111] = {.lex_state = 2, .external_lex_state = 5},
  [112] = {.lex_state = 54, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 54, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 54, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 54, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 54, .external_lex_state = 4},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 6, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 58, .external_lex_state = 6},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 0, .external_lex_state = 7},
  [169] = {.lex_state = 0, .external_lex_state = 8},
  [170] = {.lex_state = 0, .external_lex_state = 6},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 57, .external_lex_state = 6},
  [174] = {.lex_state = 0, .external_lex_state = 6},
  [175] = {.lex_state = 0, .external_lex_state = 6},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 9},
  [178] = {.lex_state = 0, .external_lex_state = 4},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 0, .external_lex_state = 6},
  [181] = {.lex_state = 0, .external_lex_state = 10},
  [182] = {.lex_state = 0, .external_lex_state = 8},
  [183] = {.lex_state = 0, .external_lex_state = 6},
  [184] = {.lex_state = 0, .external_lex_state = 6},
  [185] = {.lex_state = 0, .external_lex_state = 6},
  [186] = {.lex_state = 0, .external_lex_state = 6},
  [187] = {.lex_state = 58, .external_lex_state = 3},
  [188] = {.lex_state = 0, .external_lex_state = 6},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 6},
  [191] = {.lex_state = 0, .external_lex_state = 6},
  [192] = {.lex_state = 0, .external_lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 6},
  [194] = {.lex_state = 58, .external_lex_state = 3},
  [195] = {.lex_state = 0, .external_lex_state = 6},
  [196] = {.lex_state = 0, .external_lex_state = 6},
  [197] = {.lex_state = 0, .external_lex_state = 6},
  [198] = {.lex_state = 0, .external_lex_state = 6},
  [199] = {.lex_state = 0, .external_lex_state = 6},
  [200] = {.lex_state = 0, .external_lex_state = 6},
  [201] = {.lex_state = 0, .external_lex_state = 6},
  [202] = {.lex_state = 0, .external_lex_state = 6},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 0, .external_lex_state = 6},
  [205] = {.lex_state = 0, .external_lex_state = 6},
  [206] = {.lex_state = 0, .external_lex_state = 6},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 6},
  [209] = {.lex_state = 0, .external_lex_state = 6},
  [210] = {.lex_state = 0, .external_lex_state = 6},
  [211] = {.lex_state = 0, .external_lex_state = 6},
  [212] = {.lex_state = 0, .external_lex_state = 6},
  [213] = {.lex_state = 58, .external_lex_state = 3},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 0, .external_lex_state = 6},
  [218] = {.lex_state = 0, .external_lex_state = 6},
  [219] = {.lex_state = 58, .external_lex_state = 3},
  [220] = {.lex_state = 0, .external_lex_state = 6},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 0, .external_lex_state = 6},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 6},
  [225] = {.lex_state = 0, .external_lex_state = 6},
  [226] = {.lex_state = 0, .external_lex_state = 6},
  [227] = {.lex_state = 0, .external_lex_state = 6},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 0, .external_lex_state = 6},
  [233] = {.lex_state = 0, .external_lex_state = 6},
  [234] = {.lex_state = 0, .external_lex_state = 6},
  [235] = {.lex_state = 0, .external_lex_state = 6},
  [236] = {.lex_state = 0, .external_lex_state = 6},
  [237] = {.lex_state = 0, .external_lex_state = 6},
  [238] = {.lex_state = 0, .external_lex_state = 6},
  [239] = {.lex_state = 0, .external_lex_state = 6},
  [240] = {.lex_state = 0, .external_lex_state = 6},
  [241] = {.lex_state = 0, .external_lex_state = 6},
  [242] = {.lex_state = 0, .external_lex_state = 6},
  [243] = {.lex_state = 0, .external_lex_state = 6},
  [244] = {.lex_state = 0, .external_lex_state = 6},
  [245] = {.lex_state = 0, .external_lex_state = 6},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 58},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 0, .external_lex_state = 5},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 0, .external_lex_state = 11},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 0, .external_lex_state = 11},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 0, .external_lex_state = 12},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 0, .external_lex_state = 13},
  [266] = {.lex_state = 0, .external_lex_state = 14},
  [267] = {.lex_state = 58},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 58},
  [274] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__closed_tag] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_attr_shortcut_custom] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym__attr_name] = ACTIONS(1),
    [sym_attr_assignment] = ACTIONS(1),
    [sym_attr_assignment_noescape] = ACTIONS(1),
    [sym__element_rest_text] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [anon_sym_frameset] = ACTIONS(1),
    [anon_sym_mobile] = ACTIONS(1),
    [anon_sym_basic] = ACTIONS(1),
    [anon_sym_transitional] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_output_modifier_leading_whitespace] = ACTIONS(1),
    [sym_output_modifier_trailing_whitespace] = ACTIONS(1),
    [sym_output_modifier_legacy_trailing_whitespace] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_markdown] = ACTIONS(1),
    [anon_sym_textile] = ACTIONS(1),
    [anon_sym_rdoc] = ACTIONS(1),
    [anon_sym_coffee] = ACTIONS(1),
    [anon_sym_less] = ACTIONS(1),
    [anon_sym_sass] = ACTIONS(1),
    [anon_sym_scss] = ACTIONS(1),
    [anon_sym_javascript] = ACTIONS(1),
    [anon_sym_css] = ACTIONS(1),
    [anon_sym_ruby] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_verbatim_text_modifier_trailing_whitespace] = ACTIONS(1),
    [sym__html_comment_conditional_marker] = ACTIONS(1),
    [sym__space_or_newline] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__block_start] = ACTIONS(1),
    [sym__block_end] = ACTIONS(1),
    [sym__line_separator] = ACTIONS(1),
    [sym__attr_value_quoted] = ACTIONS(1),
    [sym__attr_value_ruby] = ACTIONS(1),
    [sym__attr_value_ruby_p] = ACTIONS(1),
    [sym__attr_value_ruby_s] = ACTIONS(1),
    [sym__attr_value_ruby_b] = ACTIONS(1),
    [sym_ruby] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(270),
    [sym__block] = STATE(272),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__block_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(35), 1,
      sym__block_end,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(158), 1,
      sym__html_comment_conditional_incomplete,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
    STATE(239), 12,
      sym__line,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
  [85] = 20,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(158), 1,
      sym__html_comment_conditional_incomplete,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
    STATE(239), 12,
      sym__line,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
  [170] = 20,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(158), 1,
      sym__html_comment_conditional_incomplete,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
    STATE(239), 12,
      sym__line,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
  [255] = 20,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    ACTIONS(41), 1,
      sym__block_end,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(158), 1,
      sym__html_comment_conditional_incomplete,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
    STATE(239), 12,
      sym__line,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
  [340] = 19,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(158), 1,
      sym__html_comment_conditional_incomplete,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
    STATE(174), 12,
      sym__line,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
  [422] = 19,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(158), 1,
      sym__html_comment_conditional_incomplete,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
    STATE(170), 12,
      sym__line,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
  [504] = 19,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__space,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(158), 1,
      sym__html_comment_conditional_incomplete,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
    STATE(239), 12,
      sym__line,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
  [586] = 25,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      sym__closed_tag,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__space,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(14), 1,
      sym_attr_shortcuts,
    STATE(24), 1,
      sym_attrs,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(63), 2,
      sym__block_end,
      sym__line_separator,
    STATE(10), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    STATE(235), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(51), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [678] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(65), 1,
      sym__closed_tag,
    ACTIONS(69), 1,
      sym__space,
    STATE(18), 1,
      sym_attrs,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(71), 2,
      sym__block_end,
      sym__line_separator,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(67), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(227), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(51), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [752] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(73), 1,
      sym__closed_tag,
    ACTIONS(75), 1,
      sym__space,
    STATE(21), 1,
      sym_attrs,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(77), 2,
      sym__block_end,
      sym__line_separator,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(67), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(205), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(51), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [826] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(79), 1,
      sym__closed_tag,
    ACTIONS(81), 1,
      sym__space,
    STATE(23), 1,
      sym_attrs,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(83), 2,
      sym__block_end,
      sym__line_separator,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(67), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(238), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(51), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [900] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(85), 1,
      sym__closed_tag,
    ACTIONS(89), 1,
      sym__space,
    STATE(25), 1,
      sym_attrs,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(91), 2,
      sym__block_end,
      sym__line_separator,
    STATE(12), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(87), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(214), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(51), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [974] = 20,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(93), 1,
      sym__closed_tag,
    ACTIONS(97), 1,
      sym__space,
    STATE(22), 1,
      sym_attrs,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(99), 2,
      sym__block_end,
      sym__line_separator,
    STATE(11), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(95), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(229), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(51), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1048] = 6,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      sym_attr_shortcut_custom,
    ACTIONS(112), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    STATE(15), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(101), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1084] = 6,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      sym_attr_shortcut_custom,
    ACTIONS(118), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    STATE(15), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(114), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1120] = 9,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(13), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(223), 2,
      sym_element,
      sym_embedded_engine,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(23), 10,
      anon_sym_markdown,
      anon_sym_textile,
      anon_sym_rdoc,
      anon_sym_coffee,
      anon_sym_less,
      anon_sym_sass,
      anon_sym_scss,
      anon_sym_javascript,
      anon_sym_css,
      anon_sym_ruby,
  [1161] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(120), 1,
      sym__closed_tag,
    ACTIONS(122), 1,
      sym__space,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(124), 2,
      sym__block_end,
      sym__line_separator,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(199), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1207] = 2,
    ACTIONS(128), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(126), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1231] = 2,
    ACTIONS(132), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(130), 14,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_DOT,
      anon_sym_POUND,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1255] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(134), 1,
      sym__closed_tag,
    ACTIONS(136), 1,
      sym__space,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(138), 2,
      sym__block_end,
      sym__line_separator,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(209), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1301] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(140), 1,
      sym__closed_tag,
    ACTIONS(142), 1,
      sym__space,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(144), 2,
      sym__block_end,
      sym__line_separator,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(204), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1347] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(146), 1,
      sym__closed_tag,
    ACTIONS(148), 1,
      sym__space,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(150), 2,
      sym__block_end,
      sym__line_separator,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(185), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1393] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(152), 1,
      sym__closed_tag,
    ACTIONS(154), 1,
      sym__space,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(156), 2,
      sym__block_end,
      sym__line_separator,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1439] = 13,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(53), 1,
      sym__attr_name,
    ACTIONS(55), 1,
      sym__element_rest_text,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(158), 1,
      sym__closed_tag,
    ACTIONS(160), 1,
      sym__space,
    STATE(98), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    ACTIONS(162), 2,
      sym__block_end,
      sym__line_separator,
    STATE(190), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(237), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1485] = 4,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(168), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    ACTIONS(166), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(164), 9,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
  [1512] = 13,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym__attr_name,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(181), 1,
      sym__space,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(205), 1,
      sym_nested,
    STATE(228), 1,
      sym_attr_name,
    ACTIONS(77), 2,
      sym__block_end,
      sym__line_separator,
    STATE(33), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1554] = 13,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym__attr_name,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(181), 1,
      sym__space,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(228), 1,
      sym_attr_name,
    STATE(238), 1,
      sym_nested,
    ACTIONS(83), 2,
      sym__block_end,
      sym__line_separator,
    STATE(33), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1596] = 13,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym__attr_name,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(181), 1,
      sym__space,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(227), 1,
      sym_nested,
    STATE(228), 1,
      sym_attr_name,
    ACTIONS(71), 2,
      sym__block_end,
      sym__line_separator,
    STATE(33), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1638] = 13,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym__attr_name,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(181), 1,
      sym__space,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(200), 1,
      sym_nested,
    STATE(228), 1,
      sym_attr_name,
    ACTIONS(183), 2,
      sym__block_end,
      sym__line_separator,
    STATE(33), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1680] = 13,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym__attr_name,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(181), 1,
      sym__space,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(193), 1,
      sym_nested,
    STATE(228), 1,
      sym_attr_name,
    ACTIONS(185), 2,
      sym__block_end,
      sym__line_separator,
    STATE(33), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1722] = 13,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym__attr_name,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(181), 1,
      sym__space,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(207), 1,
      sym_nested,
    STATE(228), 1,
      sym_attr_name,
    ACTIONS(187), 2,
      sym__block_end,
      sym__line_separator,
    STATE(33), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1764] = 7,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym__attr_name,
    ACTIONS(196), 1,
      sym__space,
    STATE(228), 1,
      sym_attr_name,
    ACTIONS(194), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(34), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(189), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1793] = 7,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(204), 1,
      sym__attr_name,
    ACTIONS(209), 1,
      sym__space,
    STATE(228), 1,
      sym_attr_name,
    ACTIONS(207), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(34), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(199), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1822] = 4,
    ACTIONS(216), 1,
      anon_sym_xml,
    ACTIONS(212), 2,
      anon_sym_html,
      anon_sym_5,
    STATE(184), 4,
      sym__doctype_html,
      sym_doctype_html5,
      sym_doctype_xhtml,
      sym__doctype_xml,
    ACTIONS(214), 6,
      anon_sym_1_DOT1,
      anon_sym_strict,
      anon_sym_frameset,
      anon_sym_mobile,
      anon_sym_basic,
      anon_sym_transitional,
  [1844] = 2,
    ACTIONS(220), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(218), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [1860] = 7,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(230), 1,
      sym__space,
    STATE(268), 1,
      sym_attrs,
    STATE(262), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1886] = 2,
    ACTIONS(207), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(199), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [1902] = 2,
    ACTIONS(234), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(232), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [1918] = 2,
    ACTIONS(238), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(236), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [1934] = 2,
    ACTIONS(242), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(240), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [1950] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(244), 1,
      sym__attr_name,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(210), 1,
      sym_nested,
    ACTIONS(246), 2,
      sym__block_end,
      sym__line_separator,
  [1979] = 2,
    ACTIONS(250), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(248), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1994] = 2,
    ACTIONS(254), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(252), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2009] = 2,
    ACTIONS(258), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(256), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2024] = 2,
    ACTIONS(262), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(260), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2039] = 2,
    ACTIONS(266), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(264), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2054] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(244), 1,
      sym__attr_name,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(192), 1,
      sym_nested,
    ACTIONS(268), 2,
      sym__block_end,
      sym__line_separator,
  [2083] = 2,
    ACTIONS(272), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(270), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2098] = 2,
    ACTIONS(276), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(274), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2113] = 2,
    ACTIONS(280), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(278), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2128] = 2,
    ACTIONS(284), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(282), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2143] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(244), 1,
      sym__attr_name,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(221), 1,
      sym_nested,
    ACTIONS(286), 2,
      sym__block_end,
      sym__line_separator,
  [2172] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(244), 1,
      sym__attr_name,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(202), 1,
      sym_nested,
    ACTIONS(288), 2,
      sym__block_end,
      sym__line_separator,
  [2201] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(244), 1,
      sym__attr_name,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(206), 1,
      sym_nested,
    ACTIONS(290), 2,
      sym__block_end,
      sym__line_separator,
  [2230] = 2,
    ACTIONS(294), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(292), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2245] = 9,
    ACTIONS(61), 1,
      sym__block_start,
    ACTIONS(175), 1,
      sym__element_rest_text,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
    ACTIONS(244), 1,
      sym__attr_name,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(191), 1,
      sym__block,
    STATE(217), 1,
      sym_nested,
    ACTIONS(296), 2,
      sym__block_end,
      sym__line_separator,
  [2274] = 8,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(304), 1,
      sym__space_or_newline,
    STATE(69), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(96), 1,
      sym_attr_name,
    STATE(151), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2300] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(310), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(90), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2326] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(316), 1,
      sym__space_or_newline,
    STATE(67), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(89), 1,
      sym_attr_name,
    STATE(143), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2352] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      sym__space_or_newline,
    STATE(68), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(90), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2378] = 8,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      sym__space_or_newline,
    STATE(58), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(96), 1,
      sym_attr_name,
    STATE(151), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2404] = 8,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      sym__space_or_newline,
    STATE(70), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(96), 1,
      sym_attr_name,
    STATE(151), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2430] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      sym__space_or_newline,
    STATE(59), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(90), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2456] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    ACTIONS(336), 1,
      sym__space_or_newline,
    STATE(71), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(89), 1,
      sym_attr_name,
    STATE(143), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2482] = 8,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(343), 1,
      sym__attr_name,
    ACTIONS(346), 1,
      sym__space_or_newline,
    STATE(66), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(89), 1,
      sym_attr_name,
    STATE(143), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2508] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      sym__space_or_newline,
    STATE(66), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(89), 1,
      sym_attr_name,
    STATE(143), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2534] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(90), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2560] = 8,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      anon_sym_STAR,
    ACTIONS(362), 1,
      sym__attr_name,
    ACTIONS(365), 1,
      sym__space_or_newline,
    STATE(69), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(96), 1,
      sym_attr_name,
    STATE(151), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2586] = 8,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      sym__space_or_newline,
    STATE(69), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(96), 1,
      sym_attr_name,
    STATE(151), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2612] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      sym__space_or_newline,
    STATE(66), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(89), 1,
      sym_attr_name,
    STATE(143), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2638] = 8,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_STAR,
    ACTIONS(381), 1,
      sym__attr_name,
    ACTIONS(384), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(90), 1,
      sym_attr_name,
    STATE(166), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2664] = 7,
    ACTIONS(387), 1,
      sym_attr_assignment,
    ACTIONS(389), 1,
      sym_attr_assignment_noescape,
    ACTIONS(391), 1,
      sym__element_rest_text,
    ACTIONS(393), 1,
      sym__space,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(208), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [2687] = 2,
    ACTIONS(387), 3,
      sym__attr_name,
      sym_attr_assignment,
      sym__space_or_newline,
    ACTIONS(389), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_attr_assignment_noescape,
  [2700] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_attr_name,
    STATE(138), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2720] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_attr_name,
    STATE(150), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2740] = 6,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(399), 1,
      anon_sym_STAR,
    ACTIONS(401), 1,
      sym__space,
    STATE(189), 1,
      sym_attr_name,
    STATE(79), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2760] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_attr_name,
    STATE(138), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2780] = 6,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      sym__attr_name,
    ACTIONS(405), 1,
      anon_sym_STAR,
    ACTIONS(408), 1,
      sym__space,
    STATE(189), 1,
      sym_attr_name,
    STATE(79), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2800] = 6,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_attr_name,
    STATE(144), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2820] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_attr_name,
    STATE(150), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2840] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_attr_name,
    STATE(138), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2860] = 6,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_attr_name,
    STATE(144), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2880] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_attr_name,
    STATE(150), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2900] = 6,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_attr_name,
    STATE(144), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2920] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_attr_name,
    STATE(138), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2940] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      anon_sym_STAR,
    STATE(90), 1,
      sym_attr_name,
    STATE(150), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2960] = 6,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    STATE(96), 1,
      sym_attr_name,
    STATE(144), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2980] = 4,
    ACTIONS(425), 1,
      sym_attr_assignment,
    ACTIONS(427), 1,
      sym_attr_assignment_noescape,
    ACTIONS(421), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
    ACTIONS(423), 2,
      sym__attr_name,
      sym__space_or_newline,
  [2995] = 4,
    ACTIONS(429), 1,
      sym_attr_assignment,
    ACTIONS(431), 1,
      sym_attr_assignment_noescape,
    ACTIONS(421), 2,
      anon_sym_RBRACE,
      anon_sym_STAR,
    ACTIONS(423), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3010] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(433), 1,
      sym__element_rest_text,
    ACTIONS(435), 1,
      sym__space,
    STATE(186), 1,
      sym__text_nested,
    ACTIONS(437), 2,
      sym__block_end,
      sym__line_separator,
  [3027] = 3,
    ACTIONS(164), 1,
      sym_ruby,
    STATE(92), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(439), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3040] = 3,
    ACTIONS(444), 1,
      sym_ruby,
    STATE(102), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(442), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3053] = 5,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    STATE(89), 1,
      sym_attr_name,
    STATE(138), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3070] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(446), 1,
      sym__element_rest_text,
    ACTIONS(448), 1,
      sym__space,
    STATE(225), 1,
      sym__text_nested,
    ACTIONS(450), 2,
      sym__block_end,
      sym__line_separator,
  [3087] = 4,
    ACTIONS(452), 1,
      sym_attr_assignment,
    ACTIONS(454), 1,
      sym_attr_assignment_noescape,
    ACTIONS(421), 2,
      anon_sym_RBRACK,
      anon_sym_STAR,
    ACTIONS(423), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3102] = 5,
    ACTIONS(300), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    STATE(96), 1,
      sym_attr_name,
    STATE(144), 1,
      sym__attr_delimited_s,
    STATE(157), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3119] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(456), 1,
      sym__element_rest_text,
    STATE(112), 1,
      aux_sym_element_text_repeat1,
    STATE(225), 1,
      sym__text_nested,
    ACTIONS(450), 2,
      sym__block_end,
      sym__line_separator,
  [3136] = 5,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(308), 1,
      anon_sym_STAR,
    STATE(90), 1,
      sym_attr_name,
    STATE(150), 1,
      sym__attr_delimited_b,
    STATE(163), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3153] = 3,
    ACTIONS(444), 1,
      sym_ruby,
    STATE(92), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(458), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3166] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(460), 1,
      sym__element_rest_text,
    ACTIONS(462), 1,
      sym__space,
    STATE(208), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3183] = 3,
    ACTIONS(464), 1,
      sym_ruby,
    STATE(92), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(458), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3196] = 3,
    ACTIONS(468), 1,
      sym_ruby,
    STATE(104), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(466), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3209] = 3,
    ACTIONS(470), 1,
      sym_ruby,
    STATE(92), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(458), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3222] = 5,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(399), 1,
      anon_sym_STAR,
    ACTIONS(401), 1,
      sym__space,
    STATE(189), 1,
      sym_attr_name,
    STATE(77), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3239] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(472), 1,
      sym__element_rest_text,
    ACTIONS(474), 1,
      sym__space,
    STATE(236), 1,
      sym__text_nested,
    ACTIONS(476), 2,
      sym__block_end,
      sym__line_separator,
  [3256] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(456), 1,
      sym__element_rest_text,
    STATE(112), 1,
      aux_sym_element_text_repeat1,
    STATE(208), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3273] = 3,
    ACTIONS(480), 1,
      sym_ruby,
    STATE(111), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(478), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3286] = 3,
    ACTIONS(484), 1,
      sym_ruby,
    STATE(100), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(482), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3299] = 4,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    ACTIONS(488), 1,
      sym__html_comment_condition,
    STATE(269), 1,
      sym_html_comment_condition,
    ACTIONS(490), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3314] = 3,
    ACTIONS(468), 1,
      sym_ruby,
    STATE(92), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(458), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3327] = 3,
    ACTIONS(492), 1,
      sym__element_rest_text,
    STATE(112), 1,
      aux_sym_element_text_repeat1,
    ACTIONS(495), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3339] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(243), 1,
      sym_nested,
    ACTIONS(497), 2,
      sym__block_end,
      sym__line_separator,
  [3353] = 1,
    ACTIONS(499), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__space,
  [3361] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(501), 1,
      sym__element_rest_text,
    STATE(201), 1,
      sym__text_nested,
    ACTIONS(503), 2,
      sym__block_end,
      sym__line_separator,
  [3375] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(215), 1,
      sym_nested,
    ACTIONS(505), 2,
      sym__block_end,
      sym__line_separator,
  [3389] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(197), 1,
      sym_nested,
    ACTIONS(507), 2,
      sym__block_end,
      sym__line_separator,
  [3403] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(216), 1,
      sym_nested,
    ACTIONS(509), 2,
      sym__block_end,
      sym__line_separator,
  [3417] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(196), 1,
      sym_nested,
    ACTIONS(511), 2,
      sym__block_end,
      sym__line_separator,
  [3431] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(245), 1,
      sym_nested,
    ACTIONS(513), 2,
      sym__block_end,
      sym__line_separator,
  [3445] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(515), 1,
      sym__element_rest_text,
    STATE(218), 1,
      sym__text_nested,
    ACTIONS(517), 2,
      sym__block_end,
      sym__line_separator,
  [3459] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(183), 1,
      sym_nested,
    STATE(191), 1,
      sym__block,
    ACTIONS(519), 2,
      sym__block_end,
      sym__line_separator,
  [3473] = 4,
    ACTIONS(521), 1,
      sym__block_start,
    ACTIONS(523), 1,
      sym__block_end,
    ACTIONS(525), 1,
      sym__line_separator,
    STATE(129), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3487] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(242), 1,
      sym_nested,
    ACTIONS(527), 2,
      sym__block_end,
      sym__line_separator,
  [3501] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(191), 1,
      sym__block,
    STATE(241), 1,
      sym_nested,
    ACTIONS(529), 2,
      sym__block_end,
      sym__line_separator,
  [3515] = 4,
    ACTIONS(531), 1,
      sym__block_start,
    ACTIONS(534), 1,
      sym__block_end,
    ACTIONS(536), 1,
      sym__line_separator,
    STATE(126), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3529] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(460), 1,
      sym__element_rest_text,
    STATE(208), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3543] = 4,
    ACTIONS(521), 1,
      sym__block_start,
    ACTIONS(539), 1,
      sym__block_end,
    ACTIONS(541), 1,
      sym__line_separator,
    STATE(126), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3557] = 4,
    ACTIONS(521), 1,
      sym__block_start,
    ACTIONS(543), 1,
      sym__block_end,
    ACTIONS(545), 1,
      sym__line_separator,
    STATE(126), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3571] = 4,
    ACTIONS(521), 1,
      sym__block_start,
    ACTIONS(547), 1,
      sym__block_end,
    ACTIONS(549), 1,
      sym__line_separator,
    STATE(128), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3585] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(433), 1,
      sym__element_rest_text,
    STATE(186), 1,
      sym__text_nested,
    ACTIONS(437), 2,
      sym__block_end,
      sym__line_separator,
  [3599] = 2,
    ACTIONS(207), 1,
      sym__attr_name,
    ACTIONS(199), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3608] = 2,
    ACTIONS(234), 1,
      sym__attr_name,
    ACTIONS(232), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3617] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(186), 1,
      sym__text_nested,
    ACTIONS(437), 2,
      sym__block_end,
      sym__line_separator,
  [3628] = 2,
    ACTIONS(553), 1,
      sym__attr_name,
    ACTIONS(551), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3637] = 2,
    ACTIONS(557), 1,
      sym__attr_name,
    ACTIONS(555), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3646] = 2,
    ACTIONS(242), 1,
      sym__attr_name,
    ACTIONS(240), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3655] = 2,
    ACTIONS(561), 1,
      sym__attr_name,
    ACTIONS(559), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3664] = 2,
    ACTIONS(565), 1,
      sym__attr_name,
    ACTIONS(563), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3673] = 2,
    ACTIONS(569), 1,
      sym__attr_name,
    ACTIONS(567), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3682] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(224), 1,
      sym__text_nested,
    ACTIONS(571), 2,
      sym__block_end,
      sym__line_separator,
  [3693] = 2,
    ACTIONS(575), 1,
      sym__attr_name,
    ACTIONS(573), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3702] = 2,
    ACTIONS(579), 1,
      sym__attr_name,
    ACTIONS(577), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3711] = 2,
    ACTIONS(583), 1,
      sym__attr_name,
    ACTIONS(581), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3720] = 2,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    ACTIONS(587), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3729] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(218), 1,
      sym__text_nested,
    ACTIONS(517), 2,
      sym__block_end,
      sym__line_separator,
  [3740] = 2,
    ACTIONS(591), 1,
      sym__attr_name,
    ACTIONS(589), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3749] = 2,
    ACTIONS(595), 1,
      sym__attr_name,
    ACTIONS(593), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3758] = 2,
    ACTIONS(599), 1,
      sym__attr_name,
    ACTIONS(597), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3767] = 2,
    ACTIONS(603), 1,
      sym__attr_name,
    ACTIONS(601), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3776] = 2,
    ACTIONS(607), 1,
      sym__attr_name,
    ACTIONS(605), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3785] = 2,
    ACTIONS(238), 1,
      sym__attr_name,
    ACTIONS(236), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3794] = 2,
    ACTIONS(220), 1,
      sym__attr_name,
    ACTIONS(218), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3803] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(231), 1,
      sym__text_nested,
    ACTIONS(609), 2,
      sym__block_end,
      sym__line_separator,
  [3814] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(201), 1,
      sym__text_nested,
    ACTIONS(503), 2,
      sym__block_end,
      sym__line_separator,
  [3825] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(244), 1,
      sym__text_nested,
    ACTIONS(611), 2,
      sym__block_end,
      sym__line_separator,
  [3836] = 2,
    ACTIONS(615), 1,
      sym__attr_name,
    ACTIONS(613), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3845] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(195), 1,
      sym__text_nested,
    ACTIONS(617), 2,
      sym__block_end,
      sym__line_separator,
  [3856] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(220), 1,
      sym__text_nested,
    ACTIONS(619), 2,
      sym__block_end,
      sym__line_separator,
  [3867] = 3,
    ACTIONS(621), 1,
      sym__text_line,
    STATE(212), 1,
      sym__text,
    ACTIONS(623), 2,
      sym__block_end,
      sym__line_separator,
  [3878] = 4,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    STATE(38), 1,
      sym_attr,
    STATE(228), 1,
      sym_attr_name,
  [3891] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(208), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3902] = 2,
    ACTIONS(627), 1,
      sym__attr_name,
    ACTIONS(625), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3911] = 2,
    ACTIONS(631), 1,
      sym__attr_name,
    ACTIONS(629), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3920] = 2,
    ACTIONS(635), 1,
      sym__attr_name,
    ACTIONS(633), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3929] = 2,
    ACTIONS(639), 1,
      sym__attr_name,
    ACTIONS(637), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3938] = 4,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(399), 1,
      anon_sym_STAR,
    STATE(132), 1,
      sym_attr,
    STATE(189), 1,
      sym_attr_name,
  [3951] = 2,
    STATE(149), 1,
      sym__attr_delimited_value_s,
    ACTIONS(641), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_s,
  [3959] = 3,
    ACTIONS(643), 1,
      sym__attr_value_quoted,
    ACTIONS(645), 1,
      sym__attr_value_ruby,
    STATE(36), 1,
      sym_attr_value,
  [3969] = 3,
    ACTIONS(647), 1,
      sym__block_end,
    ACTIONS(649), 1,
      sym__line_separator,
    STATE(171), 1,
      aux_sym__block_repeat1,
  [3979] = 3,
    ACTIONS(37), 1,
      sym__block_end,
    ACTIONS(651), 1,
      sym__line_separator,
    STATE(180), 1,
      aux_sym__block_repeat1,
  [3989] = 1,
    ACTIONS(653), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3995] = 2,
    ACTIONS(655), 1,
      sym_doctype_xml_encoding,
    ACTIONS(657), 2,
      sym__block_end,
      sym__line_separator,
  [4003] = 3,
    ACTIONS(659), 1,
      sym__block_end,
    ACTIONS(661), 1,
      sym__line_separator,
    STATE(175), 1,
      aux_sym__block_repeat1,
  [4013] = 3,
    ACTIONS(41), 1,
      sym__block_end,
    ACTIONS(663), 1,
      sym__line_separator,
    STATE(180), 1,
      aux_sym__block_repeat1,
  [4023] = 1,
    ACTIONS(665), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4029] = 2,
    STATE(164), 1,
      sym__attr_delimited_value_b,
    ACTIONS(667), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_b,
  [4037] = 1,
    ACTIONS(534), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4043] = 1,
    ACTIONS(669), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4049] = 3,
    ACTIONS(671), 1,
      sym__block_end,
    ACTIONS(673), 1,
      sym__line_separator,
    STATE(180), 1,
      aux_sym__block_repeat1,
  [4059] = 2,
    STATE(135), 1,
      sym__attr_delimited_value_p,
    ACTIONS(676), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_p,
  [4067] = 3,
    ACTIONS(678), 1,
      sym__attr_value_quoted,
    ACTIONS(680), 1,
      sym__attr_value_ruby,
    STATE(153), 1,
      sym_attr_value,
  [4077] = 1,
    ACTIONS(682), 2,
      sym__block_end,
      sym__line_separator,
  [4082] = 1,
    ACTIONS(684), 2,
      sym__block_end,
      sym__line_separator,
  [4087] = 1,
    ACTIONS(296), 2,
      sym__block_end,
      sym__line_separator,
  [4092] = 1,
    ACTIONS(517), 2,
      sym__block_end,
      sym__line_separator,
  [4097] = 2,
    ACTIONS(543), 1,
      sym__block_end,
    ACTIONS(686), 1,
      sym__text_line,
  [4104] = 1,
    ACTIONS(669), 2,
      sym__block_end,
      sym__line_separator,
  [4109] = 2,
    ACTIONS(688), 1,
      sym_attr_assignment,
    ACTIONS(690), 1,
      sym_attr_assignment_noescape,
  [4116] = 1,
    ACTIONS(692), 2,
      sym__block_end,
      sym__line_separator,
  [4121] = 1,
    ACTIONS(694), 2,
      sym__block_end,
      sym__line_separator,
  [4126] = 1,
    ACTIONS(696), 2,
      sym__block_end,
      sym__line_separator,
  [4131] = 1,
    ACTIONS(698), 2,
      sym__block_end,
      sym__line_separator,
  [4136] = 2,
    ACTIONS(686), 1,
      sym__text_line,
    ACTIONS(700), 1,
      sym__block_end,
  [4143] = 1,
    ACTIONS(702), 2,
      sym__block_end,
      sym__line_separator,
  [4148] = 1,
    ACTIONS(704), 2,
      sym__block_end,
      sym__line_separator,
  [4153] = 1,
    ACTIONS(706), 2,
      sym__block_end,
      sym__line_separator,
  [4158] = 1,
    ACTIONS(708), 2,
      sym__block_end,
      sym__line_separator,
  [4163] = 1,
    ACTIONS(246), 2,
      sym__block_end,
      sym__line_separator,
  [4168] = 1,
    ACTIONS(710), 2,
      sym__block_end,
      sym__line_separator,
  [4173] = 1,
    ACTIONS(619), 2,
      sym__block_end,
      sym__line_separator,
  [4178] = 1,
    ACTIONS(712), 2,
      sym__block_end,
      sym__line_separator,
  [4183] = 2,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
  [4190] = 1,
    ACTIONS(290), 2,
      sym__block_end,
      sym__line_separator,
  [4195] = 1,
    ACTIONS(187), 2,
      sym__block_end,
      sym__line_separator,
  [4200] = 1,
    ACTIONS(714), 2,
      sym__block_end,
      sym__line_separator,
  [4205] = 1,
    ACTIONS(716), 2,
      sym__block_end,
      sym__line_separator,
  [4210] = 1,
    ACTIONS(503), 2,
      sym__block_end,
      sym__line_separator,
  [4215] = 1,
    ACTIONS(286), 2,
      sym__block_end,
      sym__line_separator,
  [4220] = 1,
    ACTIONS(718), 2,
      sym__block_end,
      sym__line_separator,
  [4225] = 1,
    ACTIONS(665), 2,
      sym__block_end,
      sym__line_separator,
  [4230] = 1,
    ACTIONS(720), 2,
      sym__block_end,
      sym__line_separator,
  [4235] = 2,
    ACTIONS(686), 1,
      sym__text_line,
    ACTIONS(722), 1,
      sym__block_end,
  [4242] = 1,
    ACTIONS(83), 2,
      sym__block_end,
      sym__line_separator,
  [4247] = 1,
    ACTIONS(724), 2,
      sym__block_end,
      sym__line_separator,
  [4252] = 1,
    ACTIONS(726), 2,
      sym__block_end,
      sym__line_separator,
  [4257] = 1,
    ACTIONS(728), 2,
      sym__block_end,
      sym__line_separator,
  [4262] = 1,
    ACTIONS(571), 2,
      sym__block_end,
      sym__line_separator,
  [4267] = 2,
    ACTIONS(539), 1,
      sym__block_end,
    ACTIONS(686), 1,
      sym__text_line,
  [4274] = 1,
    ACTIONS(730), 2,
      sym__block_end,
      sym__line_separator,
  [4279] = 1,
    ACTIONS(732), 2,
      sym__block_end,
      sym__line_separator,
  [4284] = 1,
    ACTIONS(653), 2,
      sym__block_end,
      sym__line_separator,
  [4289] = 1,
    ACTIONS(734), 2,
      sym__block_end,
      sym__line_separator,
  [4294] = 1,
    ACTIONS(736), 2,
      sym__block_end,
      sym__line_separator,
  [4299] = 1,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [4304] = 1,
    ACTIONS(738), 2,
      sym__block_end,
      sym__line_separator,
  [4309] = 1,
    ACTIONS(183), 2,
      sym__block_end,
      sym__line_separator,
  [4314] = 2,
    ACTIONS(740), 1,
      sym_attr_assignment,
    ACTIONS(742), 1,
      sym_attr_assignment_noescape,
  [4321] = 1,
    ACTIONS(77), 2,
      sym__block_end,
      sym__line_separator,
  [4326] = 1,
    ACTIONS(288), 2,
      sym__block_end,
      sym__line_separator,
  [4331] = 1,
    ACTIONS(744), 2,
      sym__block_end,
      sym__line_separator,
  [4336] = 1,
    ACTIONS(746), 2,
      sym__block_end,
      sym__line_separator,
  [4341] = 1,
    ACTIONS(748), 2,
      sym__block_end,
      sym__line_separator,
  [4346] = 1,
    ACTIONS(750), 2,
      sym__block_end,
      sym__line_separator,
  [4351] = 1,
    ACTIONS(71), 2,
      sym__block_end,
      sym__line_separator,
  [4356] = 1,
    ACTIONS(437), 2,
      sym__block_end,
      sym__line_separator,
  [4361] = 1,
    ACTIONS(268), 2,
      sym__block_end,
      sym__line_separator,
  [4366] = 1,
    ACTIONS(185), 2,
      sym__block_end,
      sym__line_separator,
  [4371] = 1,
    ACTIONS(671), 2,
      sym__block_end,
      sym__line_separator,
  [4376] = 1,
    ACTIONS(752), 2,
      sym__block_end,
      sym__line_separator,
  [4381] = 1,
    ACTIONS(754), 2,
      sym__block_end,
      sym__line_separator,
  [4386] = 1,
    ACTIONS(756), 2,
      sym__block_end,
      sym__line_separator,
  [4391] = 1,
    ACTIONS(758), 2,
      sym__block_end,
      sym__line_separator,
  [4396] = 1,
    ACTIONS(760), 2,
      sym__block_end,
      sym__line_separator,
  [4401] = 1,
    ACTIONS(762), 2,
      sym__block_end,
      sym__line_separator,
  [4406] = 1,
    ACTIONS(746), 1,
      ts_builtin_sym_end,
  [4410] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [4414] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [4418] = 1,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [4422] = 1,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [4426] = 1,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [4430] = 1,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [4434] = 1,
    ACTIONS(764), 1,
      sym__text_line,
  [4438] = 1,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [4442] = 1,
    ACTIONS(252), 1,
      anon_sym_COLON,
  [4446] = 1,
    ACTIONS(766), 1,
      sym_ruby,
  [4450] = 1,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [4454] = 1,
    ACTIONS(768), 1,
      sym__space,
  [4458] = 1,
    ACTIONS(770), 1,
      sym__attr_value_ruby,
  [4462] = 1,
    ACTIONS(772), 1,
      sym_css_identifier,
  [4466] = 1,
    ACTIONS(774), 1,
      sym__attr_value_ruby,
  [4470] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [4474] = 1,
    ACTIONS(776), 1,
      sym__attr_value_ruby_b,
  [4478] = 1,
    ACTIONS(778), 1,
      sym_css_identifier,
  [4482] = 1,
    ACTIONS(780), 1,
      sym__attr_value_ruby_s,
  [4486] = 1,
    ACTIONS(782), 1,
      sym__attr_value_ruby_p,
  [4490] = 1,
    ACTIONS(686), 1,
      sym__text_line,
  [4494] = 1,
    ACTIONS(784), 1,
      anon_sym_COLON,
  [4498] = 1,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
  [4502] = 1,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
  [4506] = 1,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
  [4510] = 1,
    ACTIONS(790), 1,
      ts_builtin_sym_end,
  [4514] = 1,
    ACTIONS(792), 1,
      sym__text_line,
  [4518] = 1,
    ACTIONS(752), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 422,
  [SMALL_STATE(8)] = 504,
  [SMALL_STATE(9)] = 586,
  [SMALL_STATE(10)] = 678,
  [SMALL_STATE(11)] = 752,
  [SMALL_STATE(12)] = 826,
  [SMALL_STATE(13)] = 900,
  [SMALL_STATE(14)] = 974,
  [SMALL_STATE(15)] = 1048,
  [SMALL_STATE(16)] = 1084,
  [SMALL_STATE(17)] = 1120,
  [SMALL_STATE(18)] = 1161,
  [SMALL_STATE(19)] = 1207,
  [SMALL_STATE(20)] = 1231,
  [SMALL_STATE(21)] = 1255,
  [SMALL_STATE(22)] = 1301,
  [SMALL_STATE(23)] = 1347,
  [SMALL_STATE(24)] = 1393,
  [SMALL_STATE(25)] = 1439,
  [SMALL_STATE(26)] = 1485,
  [SMALL_STATE(27)] = 1512,
  [SMALL_STATE(28)] = 1554,
  [SMALL_STATE(29)] = 1596,
  [SMALL_STATE(30)] = 1638,
  [SMALL_STATE(31)] = 1680,
  [SMALL_STATE(32)] = 1722,
  [SMALL_STATE(33)] = 1764,
  [SMALL_STATE(34)] = 1793,
  [SMALL_STATE(35)] = 1822,
  [SMALL_STATE(36)] = 1844,
  [SMALL_STATE(37)] = 1860,
  [SMALL_STATE(38)] = 1886,
  [SMALL_STATE(39)] = 1902,
  [SMALL_STATE(40)] = 1918,
  [SMALL_STATE(41)] = 1934,
  [SMALL_STATE(42)] = 1950,
  [SMALL_STATE(43)] = 1979,
  [SMALL_STATE(44)] = 1994,
  [SMALL_STATE(45)] = 2009,
  [SMALL_STATE(46)] = 2024,
  [SMALL_STATE(47)] = 2039,
  [SMALL_STATE(48)] = 2054,
  [SMALL_STATE(49)] = 2083,
  [SMALL_STATE(50)] = 2098,
  [SMALL_STATE(51)] = 2113,
  [SMALL_STATE(52)] = 2128,
  [SMALL_STATE(53)] = 2143,
  [SMALL_STATE(54)] = 2172,
  [SMALL_STATE(55)] = 2201,
  [SMALL_STATE(56)] = 2230,
  [SMALL_STATE(57)] = 2245,
  [SMALL_STATE(58)] = 2274,
  [SMALL_STATE(59)] = 2300,
  [SMALL_STATE(60)] = 2326,
  [SMALL_STATE(61)] = 2352,
  [SMALL_STATE(62)] = 2378,
  [SMALL_STATE(63)] = 2404,
  [SMALL_STATE(64)] = 2430,
  [SMALL_STATE(65)] = 2456,
  [SMALL_STATE(66)] = 2482,
  [SMALL_STATE(67)] = 2508,
  [SMALL_STATE(68)] = 2534,
  [SMALL_STATE(69)] = 2560,
  [SMALL_STATE(70)] = 2586,
  [SMALL_STATE(71)] = 2612,
  [SMALL_STATE(72)] = 2638,
  [SMALL_STATE(73)] = 2664,
  [SMALL_STATE(74)] = 2687,
  [SMALL_STATE(75)] = 2700,
  [SMALL_STATE(76)] = 2720,
  [SMALL_STATE(77)] = 2740,
  [SMALL_STATE(78)] = 2760,
  [SMALL_STATE(79)] = 2780,
  [SMALL_STATE(80)] = 2800,
  [SMALL_STATE(81)] = 2820,
  [SMALL_STATE(82)] = 2840,
  [SMALL_STATE(83)] = 2860,
  [SMALL_STATE(84)] = 2880,
  [SMALL_STATE(85)] = 2900,
  [SMALL_STATE(86)] = 2920,
  [SMALL_STATE(87)] = 2940,
  [SMALL_STATE(88)] = 2960,
  [SMALL_STATE(89)] = 2980,
  [SMALL_STATE(90)] = 2995,
  [SMALL_STATE(91)] = 3010,
  [SMALL_STATE(92)] = 3027,
  [SMALL_STATE(93)] = 3040,
  [SMALL_STATE(94)] = 3053,
  [SMALL_STATE(95)] = 3070,
  [SMALL_STATE(96)] = 3087,
  [SMALL_STATE(97)] = 3102,
  [SMALL_STATE(98)] = 3119,
  [SMALL_STATE(99)] = 3136,
  [SMALL_STATE(100)] = 3153,
  [SMALL_STATE(101)] = 3166,
  [SMALL_STATE(102)] = 3183,
  [SMALL_STATE(103)] = 3196,
  [SMALL_STATE(104)] = 3209,
  [SMALL_STATE(105)] = 3222,
  [SMALL_STATE(106)] = 3239,
  [SMALL_STATE(107)] = 3256,
  [SMALL_STATE(108)] = 3273,
  [SMALL_STATE(109)] = 3286,
  [SMALL_STATE(110)] = 3299,
  [SMALL_STATE(111)] = 3314,
  [SMALL_STATE(112)] = 3327,
  [SMALL_STATE(113)] = 3339,
  [SMALL_STATE(114)] = 3353,
  [SMALL_STATE(115)] = 3361,
  [SMALL_STATE(116)] = 3375,
  [SMALL_STATE(117)] = 3389,
  [SMALL_STATE(118)] = 3403,
  [SMALL_STATE(119)] = 3417,
  [SMALL_STATE(120)] = 3431,
  [SMALL_STATE(121)] = 3445,
  [SMALL_STATE(122)] = 3459,
  [SMALL_STATE(123)] = 3473,
  [SMALL_STATE(124)] = 3487,
  [SMALL_STATE(125)] = 3501,
  [SMALL_STATE(126)] = 3515,
  [SMALL_STATE(127)] = 3529,
  [SMALL_STATE(128)] = 3543,
  [SMALL_STATE(129)] = 3557,
  [SMALL_STATE(130)] = 3571,
  [SMALL_STATE(131)] = 3585,
  [SMALL_STATE(132)] = 3599,
  [SMALL_STATE(133)] = 3608,
  [SMALL_STATE(134)] = 3617,
  [SMALL_STATE(135)] = 3628,
  [SMALL_STATE(136)] = 3637,
  [SMALL_STATE(137)] = 3646,
  [SMALL_STATE(138)] = 3655,
  [SMALL_STATE(139)] = 3664,
  [SMALL_STATE(140)] = 3673,
  [SMALL_STATE(141)] = 3682,
  [SMALL_STATE(142)] = 3693,
  [SMALL_STATE(143)] = 3702,
  [SMALL_STATE(144)] = 3711,
  [SMALL_STATE(145)] = 3720,
  [SMALL_STATE(146)] = 3729,
  [SMALL_STATE(147)] = 3740,
  [SMALL_STATE(148)] = 3749,
  [SMALL_STATE(149)] = 3758,
  [SMALL_STATE(150)] = 3767,
  [SMALL_STATE(151)] = 3776,
  [SMALL_STATE(152)] = 3785,
  [SMALL_STATE(153)] = 3794,
  [SMALL_STATE(154)] = 3803,
  [SMALL_STATE(155)] = 3814,
  [SMALL_STATE(156)] = 3825,
  [SMALL_STATE(157)] = 3836,
  [SMALL_STATE(158)] = 3845,
  [SMALL_STATE(159)] = 3856,
  [SMALL_STATE(160)] = 3867,
  [SMALL_STATE(161)] = 3878,
  [SMALL_STATE(162)] = 3891,
  [SMALL_STATE(163)] = 3902,
  [SMALL_STATE(164)] = 3911,
  [SMALL_STATE(165)] = 3920,
  [SMALL_STATE(166)] = 3929,
  [SMALL_STATE(167)] = 3938,
  [SMALL_STATE(168)] = 3951,
  [SMALL_STATE(169)] = 3959,
  [SMALL_STATE(170)] = 3969,
  [SMALL_STATE(171)] = 3979,
  [SMALL_STATE(172)] = 3989,
  [SMALL_STATE(173)] = 3995,
  [SMALL_STATE(174)] = 4003,
  [SMALL_STATE(175)] = 4013,
  [SMALL_STATE(176)] = 4023,
  [SMALL_STATE(177)] = 4029,
  [SMALL_STATE(178)] = 4037,
  [SMALL_STATE(179)] = 4043,
  [SMALL_STATE(180)] = 4049,
  [SMALL_STATE(181)] = 4059,
  [SMALL_STATE(182)] = 4067,
  [SMALL_STATE(183)] = 4077,
  [SMALL_STATE(184)] = 4082,
  [SMALL_STATE(185)] = 4087,
  [SMALL_STATE(186)] = 4092,
  [SMALL_STATE(187)] = 4097,
  [SMALL_STATE(188)] = 4104,
  [SMALL_STATE(189)] = 4109,
  [SMALL_STATE(190)] = 4116,
  [SMALL_STATE(191)] = 4121,
  [SMALL_STATE(192)] = 4126,
  [SMALL_STATE(193)] = 4131,
  [SMALL_STATE(194)] = 4136,
  [SMALL_STATE(195)] = 4143,
  [SMALL_STATE(196)] = 4148,
  [SMALL_STATE(197)] = 4153,
  [SMALL_STATE(198)] = 4158,
  [SMALL_STATE(199)] = 4163,
  [SMALL_STATE(200)] = 4168,
  [SMALL_STATE(201)] = 4173,
  [SMALL_STATE(202)] = 4178,
  [SMALL_STATE(203)] = 4183,
  [SMALL_STATE(204)] = 4190,
  [SMALL_STATE(205)] = 4195,
  [SMALL_STATE(206)] = 4200,
  [SMALL_STATE(207)] = 4205,
  [SMALL_STATE(208)] = 4210,
  [SMALL_STATE(209)] = 4215,
  [SMALL_STATE(210)] = 4220,
  [SMALL_STATE(211)] = 4225,
  [SMALL_STATE(212)] = 4230,
  [SMALL_STATE(213)] = 4235,
  [SMALL_STATE(214)] = 4242,
  [SMALL_STATE(215)] = 4247,
  [SMALL_STATE(216)] = 4252,
  [SMALL_STATE(217)] = 4257,
  [SMALL_STATE(218)] = 4262,
  [SMALL_STATE(219)] = 4267,
  [SMALL_STATE(220)] = 4274,
  [SMALL_STATE(221)] = 4279,
  [SMALL_STATE(222)] = 4284,
  [SMALL_STATE(223)] = 4289,
  [SMALL_STATE(224)] = 4294,
  [SMALL_STATE(225)] = 4299,
  [SMALL_STATE(226)] = 4304,
  [SMALL_STATE(227)] = 4309,
  [SMALL_STATE(228)] = 4314,
  [SMALL_STATE(229)] = 4321,
  [SMALL_STATE(230)] = 4326,
  [SMALL_STATE(231)] = 4331,
  [SMALL_STATE(232)] = 4336,
  [SMALL_STATE(233)] = 4341,
  [SMALL_STATE(234)] = 4346,
  [SMALL_STATE(235)] = 4351,
  [SMALL_STATE(236)] = 4356,
  [SMALL_STATE(237)] = 4361,
  [SMALL_STATE(238)] = 4366,
  [SMALL_STATE(239)] = 4371,
  [SMALL_STATE(240)] = 4376,
  [SMALL_STATE(241)] = 4381,
  [SMALL_STATE(242)] = 4386,
  [SMALL_STATE(243)] = 4391,
  [SMALL_STATE(244)] = 4396,
  [SMALL_STATE(245)] = 4401,
  [SMALL_STATE(246)] = 4406,
  [SMALL_STATE(247)] = 4410,
  [SMALL_STATE(248)] = 4414,
  [SMALL_STATE(249)] = 4418,
  [SMALL_STATE(250)] = 4422,
  [SMALL_STATE(251)] = 4426,
  [SMALL_STATE(252)] = 4430,
  [SMALL_STATE(253)] = 4434,
  [SMALL_STATE(254)] = 4438,
  [SMALL_STATE(255)] = 4442,
  [SMALL_STATE(256)] = 4446,
  [SMALL_STATE(257)] = 4450,
  [SMALL_STATE(258)] = 4454,
  [SMALL_STATE(259)] = 4458,
  [SMALL_STATE(260)] = 4462,
  [SMALL_STATE(261)] = 4466,
  [SMALL_STATE(262)] = 4470,
  [SMALL_STATE(263)] = 4474,
  [SMALL_STATE(264)] = 4478,
  [SMALL_STATE(265)] = 4482,
  [SMALL_STATE(266)] = 4486,
  [SMALL_STATE(267)] = 4490,
  [SMALL_STATE(268)] = 4494,
  [SMALL_STATE(269)] = 4498,
  [SMALL_STATE(270)] = 4502,
  [SMALL_STATE(271)] = 4506,
  [SMALL_STATE(272)] = 4510,
  [SMALL_STATE(273)] = 4514,
  [SMALL_STATE(274)] = 4518,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(264),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(260),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcuts, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcuts, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 8),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_id, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_id, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 10),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__output_modifiers, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2), SHIFT_REPEAT(26),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_plain, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2), SHIFT(74),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_plain, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2), SHIFT(161),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(259),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(74),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(161),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, .production_id = 14),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 3, .production_id = 14),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1, .production_id = 15),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1, .production_id = 15),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 8),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrs, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 12),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 7),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 10),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(266),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(74),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(94),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(265),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(74),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(97),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(263),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(74),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(99),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_name, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(261),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(167),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_boolean, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_boolean, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 3),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2), SHIFT_REPEAT(92),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 1),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2), SHIFT_REPEAT(112),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine_name, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2), SHIFT_REPEAT(273),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2), SHIFT_REPEAT(267),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 3, .production_id = 14),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 3, .production_id = 14),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_p, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_p, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, .production_id = 11),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, .production_id = 11),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_p, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_p, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_s, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_s, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 5),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_s, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_s, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, .production_id = 6),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, .production_id = 6),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, .production_id = 11),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, .production_id = 11),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_condition, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_b, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_b, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 3, .production_id = 14),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 3, .production_id = 14),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, .production_id = 11),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, .production_id = 11),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, .production_id = 6),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, .production_id = 6),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 3, .production_id = 14),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 3, .production_id = 14),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_b, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_b, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, .production_id = 6),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, .production_id = 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 5),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(8),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 4, .production_id = 13),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_inline, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, .production_id = 13),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, .production_id = 13),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 7),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 8),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 5, .production_id = 16),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 5, .production_id = 16),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 10),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 5),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, .production_id = 12),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_inline_expansion, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 6),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 4),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_html5, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_xhtml, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 5),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 3, .production_id = 9),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, .production_id = 9),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, .production_id = 9),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, .production_id = 9),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [788] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__block_start = 0,
  ts_external_token__block_end = 1,
  ts_external_token__line_separator = 2,
  ts_external_token__attr_value_quoted = 3,
  ts_external_token__attr_value_ruby = 4,
  ts_external_token__attr_value_ruby_p = 5,
  ts_external_token__attr_value_ruby_s = 6,
  ts_external_token__attr_value_ruby_b = 7,
  ts_external_token_ruby = 8,
  ts_external_token__error_sentinel = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__block_start] = sym__block_start,
  [ts_external_token__block_end] = sym__block_end,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token__attr_value_quoted] = sym__attr_value_quoted,
  [ts_external_token__attr_value_ruby] = sym__attr_value_ruby,
  [ts_external_token__attr_value_ruby_p] = sym__attr_value_ruby_p,
  [ts_external_token__attr_value_ruby_s] = sym__attr_value_ruby_s,
  [ts_external_token__attr_value_ruby_b] = sym__attr_value_ruby_b,
  [ts_external_token_ruby] = sym_ruby,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[15][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby] = true,
    [ts_external_token__attr_value_ruby_p] = true,
    [ts_external_token__attr_value_ruby_s] = true,
    [ts_external_token__attr_value_ruby_b] = true,
    [ts_external_token_ruby] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__block_start] = true,
  },
  [3] = {
    [ts_external_token__block_end] = true,
  },
  [4] = {
    [ts_external_token__block_start] = true,
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
  },
  [5] = {
    [ts_external_token_ruby] = true,
  },
  [6] = {
    [ts_external_token__block_end] = true,
    [ts_external_token__line_separator] = true,
  },
  [7] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [8] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby] = true,
  },
  [9] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [10] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [11] = {
    [ts_external_token__attr_value_ruby] = true,
  },
  [12] = {
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [13] = {
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [14] = {
    [ts_external_token__attr_value_ruby_p] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_slim_external_scanner_create(void);
void tree_sitter_slim_external_scanner_destroy(void *);
bool tree_sitter_slim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_slim_external_scanner_serialize(void *, char *);
void tree_sitter_slim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_slim(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_slim_external_scanner_create,
      tree_sitter_slim_external_scanner_destroy,
      tree_sitter_slim_external_scanner_scan,
      tree_sitter_slim_external_scanner_serialize,
      tree_sitter_slim_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
