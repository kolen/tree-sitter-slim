#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 280
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
  anon_sym_STAR = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
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
  sym__attr_delimited_value_p = 81,
  sym__attr_delimited_splat_p = 82,
  sym__attr_delimited_p = 83,
  sym__attrs_delimited_p = 84,
  sym__attr_delimited_value_s = 85,
  sym__attr_delimited_splat_s = 86,
  sym__attr_delimited_s = 87,
  sym__attrs_delimited_s = 88,
  sym__attr_delimited_value_b = 89,
  sym__attr_delimited_splat_b = 90,
  sym__attr_delimited_b = 91,
  sym__attrs_delimited_b = 92,
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
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym__attr_delimited_value_p] = "attr_value",
  [sym__attr_delimited_splat_p] = "attr_splat",
  [sym__attr_delimited_p] = "attr",
  [sym__attrs_delimited_p] = "_attrs_delimited_p",
  [sym__attr_delimited_value_s] = "attr_value",
  [sym__attr_delimited_splat_s] = "attr_splat",
  [sym__attr_delimited_s] = "attr",
  [sym__attrs_delimited_s] = "_attrs_delimited_s",
  [sym__attr_delimited_value_b] = "attr_value",
  [sym__attr_delimited_splat_b] = "attr_splat",
  [sym__attr_delimited_b] = "attr",
  [sym__attrs_delimited_b] = "_attrs_delimited_b",
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
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym__attr_delimited_value_p] = sym_attr_value,
  [sym__attr_delimited_splat_p] = sym__attr_value_ruby,
  [sym__attr_delimited_p] = sym_attr,
  [sym__attrs_delimited_p] = sym__attrs_delimited_p,
  [sym__attr_delimited_value_s] = sym_attr_value,
  [sym__attr_delimited_splat_s] = sym__attr_value_ruby,
  [sym__attr_delimited_s] = sym_attr,
  [sym__attrs_delimited_s] = sym__attrs_delimited_s,
  [sym__attr_delimited_value_b] = sym_attr_value,
  [sym__attr_delimited_splat_b] = sym__attr_value_ruby,
  [sym__attr_delimited_b] = sym_attr,
  [sym__attrs_delimited_b] = sym__attrs_delimited_b,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
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
    .supertype = true,
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
    .supertype = true,
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
  [sym__attr_delimited_value_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_p] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_p] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_s] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_s] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_delimited_value_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_splat_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attr_delimited_b] = {
    .visible = true,
    .named = true,
  },
  [sym__attrs_delimited_b] = {
    .visible = false,
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
    .supertype = true,
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
    .supertype = true,
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 7,
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
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 62,
  [68] = 68,
  [69] = 68,
  [70] = 66,
  [71] = 71,
  [72] = 65,
  [73] = 63,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 81,
  [82] = 79,
  [83] = 83,
  [84] = 84,
  [85] = 35,
  [86] = 83,
  [87] = 84,
  [88] = 81,
  [89] = 36,
  [90] = 77,
  [91] = 91,
  [92] = 92,
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
  [113] = 27,
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
  [128] = 120,
  [129] = 129,
  [130] = 114,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 40,
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
  [151] = 38,
  [152] = 152,
  [153] = 43,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 28,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 42,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 41,
  [168] = 168,
  [169] = 158,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 173,
  [183] = 175,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 174,
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
  [211] = 211,
  [212] = 197,
  [213] = 213,
  [214] = 214,
  [215] = 177,
  [216] = 216,
  [217] = 208,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 176,
  [227] = 227,
  [228] = 228,
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
  [245] = 201,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 47,
  [252] = 51,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 50,
  [258] = 231,
  [259] = 58,
  [260] = 55,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 244,
  [265] = 46,
  [266] = 263,
  [267] = 49,
  [268] = 57,
  [269] = 53,
  [270] = 59,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 237,
  [277] = 277,
  [278] = 261,
  [279] = 279,
};

static TSCharacterRange sym__attr_name_character_set_1[] = {
  {0, 0x08}, {0x0b, 0x1f}, {'!', '!'}, {'#', '&'}, {'*', '.'}, {'1', ';'}, {'?', 'Z'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '\n', 256,
        '#', 112,
        '\'', 230,
        '(', 118,
        ')', 119,
        '*', 117,
        '-', 223,
        '.', 111,
        '/', 61,
        '0', 209,
        '5', 214,
        ':', 231,
        '<', 228,
        '=', 224,
        '>', 229,
        '[', 120,
        ']', 121,
        'b', 124,
        'c', 171,
        'd', 172,
        'f', 179,
        'h', 198,
        'j', 125,
        'l', 147,
        'm', 127,
        'r', 140,
        's', 131,
        't', 141,
        'x', 165,
        '{', 122,
        '|', 242,
        '}', 123,
        '\t', 254,
        ' ', 254,
        '"', 116,
        '\\', 116,
      );
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 257,
        ')', 119,
        '*', 117,
        '=', 206,
        ']', 121,
        '}', 123,
        '\t', 255,
        ' ', 255,
      );
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '/' &&
          lookahead != '0' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(205);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 112,
        '\'', 230,
        '(', 118,
        '.', 111,
        '/', 62,
        ':', 60,
        '<', 228,
        '=', 225,
        '>', 229,
        '[', 120,
        '{', 122,
        '\t', 258,
        ' ', 258,
        '\n', 209,
        '0', 209,
        '"', 116,
        ')', 116,
        '\\', 116,
        ']', 116,
        '}', 116,
      );
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 112,
        '\'', 243,
        '-', 223,
        '.', 111,
        '/', 250,
        '=', 225,
        'c', 86,
        'd', 87,
        'j', 63,
        'l', 77,
        'm', 64,
        'r', 72,
        's', 66,
        't', 75,
        '|', 242,
        '\t', 260,
        ' ', 260,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 112,
        '.', 111,
        'c', 86,
        'j', 63,
        'l', 77,
        'm', 64,
        'r', 72,
        's', 66,
        't', 75,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != '.') ADVANCE(116);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\'', 230,
        '(', 118,
        '/', 62,
        ':', 60,
        '<', 228,
        '=', 225,
        '>', 229,
        '[', 120,
        '{', 122,
        '\t', 258,
        ' ', 258,
        '\n', 209,
        '"', 209,
        ')', 209,
        '0', 209,
        '\\', 209,
        ']', 209,
        '}', 209,
      );
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 118,
        '1', 11,
        '5', 214,
        ':', 231,
        '[', 120,
        ']', 121,
        'b', 17,
        'f', 43,
        'h', 53,
        'm', 41,
        's', 51,
        't', 44,
        'x', 36,
        '{', 122,
        '\t', 260,
        ' ', 260,
      );
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(117);
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
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(117);
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
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(205);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(121);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(182);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(200);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(170);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(133);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(167);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(162);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(188);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 't') ADVANCE(180);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(203);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(155);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(234);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(219);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(196);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(193);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(181);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(173);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(132);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(126);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(235);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(218);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(211);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(233);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(142);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(187);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(194);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(191);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(146);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(150);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(177);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(175);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(135);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(163);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(197);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(137);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(164);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'k') ADVANCE(139);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(221);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(213);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(220);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(143);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(145);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(160);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(161);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(149);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(232);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(129);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(189);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 's') ADVANCE(183);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(136);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(201);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(134);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(169);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(144);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(195);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(159);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(128);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(157);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(152);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(154);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(240);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(236);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(237);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(238);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(184);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(138);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(156);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(185);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(148);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(186);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(216);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(217);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(239);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(204);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(153);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(166);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(158);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'v') ADVANCE(130);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'w') ADVANCE(168);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'x') ADVANCE(199);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(241);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(176);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__attr_name);
      if ((!eof && set_contains(sym__attr_name_character_set_1, 10, lookahead))) ADVANCE(205);
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
          lookahead != '\t' &&
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
          lookahead != '\t' &&
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
          lookahead != '\t' &&
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
  [19] = {.lex_state = 12, .external_lex_state = 4},
  [20] = {.lex_state = 12, .external_lex_state = 4},
  [21] = {.lex_state = 2, .external_lex_state = 4},
  [22] = {.lex_state = 12, .external_lex_state = 4},
  [23] = {.lex_state = 12, .external_lex_state = 4},
  [24] = {.lex_state = 2, .external_lex_state = 4},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 12, .external_lex_state = 4},
  [27] = {.lex_state = 5, .external_lex_state = 4},
  [28] = {.lex_state = 5, .external_lex_state = 4},
  [29] = {.lex_state = 9, .external_lex_state = 4},
  [30] = {.lex_state = 9, .external_lex_state = 4},
  [31] = {.lex_state = 9, .external_lex_state = 4},
  [32] = {.lex_state = 9, .external_lex_state = 4},
  [33] = {.lex_state = 9, .external_lex_state = 4},
  [34] = {.lex_state = 9, .external_lex_state = 4},
  [35] = {.lex_state = 7, .external_lex_state = 4},
  [36] = {.lex_state = 7, .external_lex_state = 4},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7, .external_lex_state = 4},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 7, .external_lex_state = 4},
  [41] = {.lex_state = 7, .external_lex_state = 4},
  [42] = {.lex_state = 7, .external_lex_state = 4},
  [43] = {.lex_state = 7, .external_lex_state = 4},
  [44] = {.lex_state = 15, .external_lex_state = 4},
  [45] = {.lex_state = 15, .external_lex_state = 4},
  [46] = {.lex_state = 12, .external_lex_state = 4},
  [47] = {.lex_state = 12, .external_lex_state = 4},
  [48] = {.lex_state = 15, .external_lex_state = 4},
  [49] = {.lex_state = 12, .external_lex_state = 4},
  [50] = {.lex_state = 12, .external_lex_state = 4},
  [51] = {.lex_state = 12, .external_lex_state = 4},
  [52] = {.lex_state = 15, .external_lex_state = 4},
  [53] = {.lex_state = 12, .external_lex_state = 4},
  [54] = {.lex_state = 15, .external_lex_state = 4},
  [55] = {.lex_state = 12, .external_lex_state = 4},
  [56] = {.lex_state = 15, .external_lex_state = 4},
  [57] = {.lex_state = 12, .external_lex_state = 4},
  [58] = {.lex_state = 12, .external_lex_state = 4},
  [59] = {.lex_state = 12, .external_lex_state = 4},
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
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 14, .external_lex_state = 4},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 54, .external_lex_state = 4},
  [92] = {.lex_state = 2, .external_lex_state = 5},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 2, .external_lex_state = 5},
  [96] = {.lex_state = 2, .external_lex_state = 5},
  [97] = {.lex_state = 54, .external_lex_state = 4},
  [98] = {.lex_state = 16, .external_lex_state = 4},
  [99] = {.lex_state = 54, .external_lex_state = 4},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 54, .external_lex_state = 4},
  [102] = {.lex_state = 54, .external_lex_state = 4},
  [103] = {.lex_state = 2, .external_lex_state = 5},
  [104] = {.lex_state = 2, .external_lex_state = 5},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 54, .external_lex_state = 4},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 2, .external_lex_state = 5},
  [112] = {.lex_state = 2, .external_lex_state = 5},
  [113] = {.lex_state = 2, .external_lex_state = 5},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 54, .external_lex_state = 4},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 54, .external_lex_state = 4},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 54, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 54, .external_lex_state = 4},
  [132] = {.lex_state = 54, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 6, .external_lex_state = 4},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 2, .external_lex_state = 5},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 58, .external_lex_state = 6},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 0, .external_lex_state = 7},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 0, .external_lex_state = 4},
  [175] = {.lex_state = 0, .external_lex_state = 6},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 4},
  [178] = {.lex_state = 0, .external_lex_state = 9},
  [179] = {.lex_state = 0, .external_lex_state = 10},
  [180] = {.lex_state = 0, .external_lex_state = 6},
  [181] = {.lex_state = 0, .external_lex_state = 6},
  [182] = {.lex_state = 0, .external_lex_state = 8},
  [183] = {.lex_state = 0, .external_lex_state = 6},
  [184] = {.lex_state = 0, .external_lex_state = 4},
  [185] = {.lex_state = 57, .external_lex_state = 6},
  [186] = {.lex_state = 0, .external_lex_state = 6},
  [187] = {.lex_state = 0, .external_lex_state = 6},
  [188] = {.lex_state = 0, .external_lex_state = 6},
  [189] = {.lex_state = 0, .external_lex_state = 6},
  [190] = {.lex_state = 0, .external_lex_state = 6},
  [191] = {.lex_state = 0, .external_lex_state = 6},
  [192] = {.lex_state = 0, .external_lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 6},
  [194] = {.lex_state = 0, .external_lex_state = 6},
  [195] = {.lex_state = 0, .external_lex_state = 6},
  [196] = {.lex_state = 0, .external_lex_state = 6},
  [197] = {.lex_state = 58, .external_lex_state = 3},
  [198] = {.lex_state = 0, .external_lex_state = 6},
  [199] = {.lex_state = 0, .external_lex_state = 6},
  [200] = {.lex_state = 0, .external_lex_state = 6},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0, .external_lex_state = 6},
  [203] = {.lex_state = 0, .external_lex_state = 6},
  [204] = {.lex_state = 0, .external_lex_state = 6},
  [205] = {.lex_state = 0, .external_lex_state = 6},
  [206] = {.lex_state = 0, .external_lex_state = 6},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 58, .external_lex_state = 3},
  [209] = {.lex_state = 0, .external_lex_state = 6},
  [210] = {.lex_state = 0, .external_lex_state = 6},
  [211] = {.lex_state = 0, .external_lex_state = 6},
  [212] = {.lex_state = 58, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 6},
  [214] = {.lex_state = 0, .external_lex_state = 6},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 58, .external_lex_state = 3},
  [218] = {.lex_state = 0, .external_lex_state = 6},
  [219] = {.lex_state = 0, .external_lex_state = 6},
  [220] = {.lex_state = 0, .external_lex_state = 6},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 0, .external_lex_state = 6},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 6},
  [225] = {.lex_state = 0, .external_lex_state = 6},
  [226] = {.lex_state = 0, .external_lex_state = 6},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 6},
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
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 0, .external_lex_state = 6},
  [247] = {.lex_state = 0, .external_lex_state = 6},
  [248] = {.lex_state = 0, .external_lex_state = 6},
  [249] = {.lex_state = 0, .external_lex_state = 6},
  [250] = {.lex_state = 0, .external_lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 0, .external_lex_state = 11},
  [254] = {.lex_state = 0, .external_lex_state = 12},
  [255] = {.lex_state = 0, .external_lex_state = 13},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 58},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 0, .external_lex_state = 14},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 0, .external_lex_state = 14},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 0, .external_lex_state = 5},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 58},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 58},
  [279] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__closed_tag] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_attr_shortcut_custom] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(279),
    [sym__block] = STATE(277),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__block_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(161), 1,
      sym__html_comment_conditional_incomplete,
    STATE(209), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(232), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
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
  [91] = 23,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(161), 1,
      sym__html_comment_conditional_incomplete,
    STATE(209), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(232), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
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
  [182] = 23,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(161), 1,
      sym__html_comment_conditional_incomplete,
    STATE(209), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(232), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
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
  [273] = 23,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(161), 1,
      sym__html_comment_conditional_incomplete,
    STATE(209), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(232), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
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
  [364] = 22,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(161), 1,
      sym__html_comment_conditional_incomplete,
    STATE(209), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(232), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
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
  [452] = 22,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(161), 1,
      sym__html_comment_conditional_incomplete,
    STATE(183), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(232), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
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
  [540] = 22,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(161), 1,
      sym__html_comment_conditional_incomplete,
    STATE(175), 1,
      sym__line,
    ACTIONS(25), 2,
      anon_sym_PIPE,
      sym_verbatim_text_modifier_trailing_whitespace,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(232), 3,
      sym_ruby_block_control,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(230), 8,
      sym_element,
      sym_doctype,
      sym__ruby_block,
      sym_embedded_engine,
      sym_verbatim_text,
      sym_html_comment_conditional,
      sym_html_comment,
      sym_code_comment,
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
  [628] = 26,
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
    STATE(11), 1,
      sym_attr_shortcuts,
    STATE(22), 1,
      sym_attrs,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(63), 2,
      sym__block_end,
      sym__line_separator,
    STATE(10), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(238), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(59), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [722] = 20,
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
    ACTIONS(67), 1,
      sym__space,
    STATE(19), 1,
      sym_attrs,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(246), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(59), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [796] = 20,
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
    ACTIONS(71), 1,
      sym__closed_tag,
    ACTIONS(73), 1,
      sym__space,
    STATE(26), 1,
      sym_attrs,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(75), 2,
      sym__block_end,
      sym__line_separator,
    STATE(12), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(243), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(59), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [870] = 20,
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
    ACTIONS(77), 1,
      sym__closed_tag,
    ACTIONS(79), 1,
      sym__space,
    STATE(20), 1,
      sym_attrs,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(188), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(59), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [944] = 20,
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
    ACTIONS(83), 1,
      sym__closed_tag,
    ACTIONS(85), 1,
      sym__space,
    STATE(23), 1,
      sym_attrs,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(87), 2,
      sym__block_end,
      sym__line_separator,
    STATE(14), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(248), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(59), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1018] = 20,
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
    ACTIONS(89), 1,
      sym__closed_tag,
    ACTIONS(91), 1,
      sym__space,
    STATE(18), 1,
      sym_attrs,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(57), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(204), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(59), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1092] = 7,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      sym_attr_shortcut_custom,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(106), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(95), 12,
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
  [1130] = 7,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(15), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    ACTIONS(110), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(108), 12,
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
  [1168] = 10,
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
    STATE(39), 1,
      sym_embedded_engine_name,
    STATE(16), 2,
      sym__attr_shortcut,
      aux_sym_attr_shortcuts_repeat1,
    STATE(25), 2,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
    STATE(186), 2,
      sym_element,
      sym_embedded_engine,
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
  [1211] = 13,
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
    ACTIONS(112), 1,
      sym__closed_tag,
    ACTIONS(114), 1,
      sym__space,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(116), 2,
      sym__block_end,
      sym__line_separator,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(189), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1257] = 13,
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
    ACTIONS(118), 1,
      sym__closed_tag,
    ACTIONS(120), 1,
      sym__space,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(122), 2,
      sym__block_end,
      sym__line_separator,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(191), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1303] = 13,
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
    ACTIONS(124), 1,
      sym__closed_tag,
    ACTIONS(126), 1,
      sym__space,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(128), 2,
      sym__block_end,
      sym__line_separator,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(213), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1349] = 2,
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
  [1373] = 13,
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
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(138), 2,
      sym__block_end,
      sym__line_separator,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(242), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1419] = 13,
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
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(144), 2,
      sym__block_end,
      sym__line_separator,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(207), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1465] = 2,
    ACTIONS(148), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(146), 14,
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
  [1489] = 2,
    ACTIONS(152), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(150), 14,
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
  [1513] = 13,
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
    ACTIONS(154), 1,
      sym__closed_tag,
    ACTIONS(156), 1,
      sym__space,
    STATE(102), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    ACTIONS(158), 2,
      sym__block_end,
      sym__line_separator,
    STATE(239), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(199), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1559] = 4,
    STATE(27), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(164), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    ACTIONS(162), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(160), 9,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
  [1586] = 2,
    ACTIONS(169), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(167), 12,
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
  [1607] = 13,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(233), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    STATE(245), 1,
      sym_attr_name,
    ACTIONS(183), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1649] = 13,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(188), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    STATE(245), 1,
      sym_attr_name,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1691] = 13,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(234), 1,
      sym__block,
    STATE(245), 1,
      sym_attr_name,
    STATE(246), 1,
      sym_nested,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1733] = 13,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(202), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    STATE(245), 1,
      sym_attr_name,
    ACTIONS(185), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1775] = 13,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(211), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    STATE(245), 1,
      sym_attr_name,
    ACTIONS(187), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1817] = 13,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(204), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    STATE(245), 1,
      sym_attr_name,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
    STATE(36), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1859] = 7,
    ACTIONS(191), 1,
      anon_sym_STAR,
    ACTIONS(194), 1,
      sym__attr_name,
    ACTIONS(199), 1,
      sym__space,
    STATE(245), 1,
      sym_attr_name,
    ACTIONS(197), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(189), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1888] = 7,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(204), 1,
      sym__attr_name,
    ACTIONS(209), 1,
      sym__space,
    STATE(245), 1,
      sym_attr_name,
    ACTIONS(207), 2,
      sym__element_rest_text,
      anon_sym_EQ,
    STATE(35), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(202), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [1917] = 4,
    ACTIONS(216), 1,
      anon_sym_xml,
    ACTIONS(212), 2,
      anon_sym_html,
      anon_sym_5,
    STATE(236), 4,
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
  [1939] = 2,
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
  [1955] = 7,
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
    STATE(256), 1,
      sym_attrs,
    STATE(270), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1981] = 2,
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
  [1997] = 2,
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
  [2013] = 2,
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
  [2029] = 2,
    ACTIONS(197), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(189), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
  [2045] = 9,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(214), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(246), 2,
      sym__block_end,
      sym__line_separator,
  [2074] = 9,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(200), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(248), 2,
      sym__block_end,
      sym__line_separator,
  [2103] = 2,
    ACTIONS(252), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(250), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2118] = 2,
    ACTIONS(256), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(254), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2133] = 9,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(221), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(258), 2,
      sym__block_end,
      sym__line_separator,
  [2162] = 2,
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
  [2177] = 2,
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
  [2192] = 2,
    ACTIONS(270), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(268), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2207] = 9,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(210), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(272), 2,
      sym__block_end,
      sym__line_separator,
  [2236] = 2,
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
  [2251] = 9,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(225), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(278), 2,
      sym__block_end,
      sym__line_separator,
  [2280] = 2,
    ACTIONS(282), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(280), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2295] = 9,
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
    STATE(101), 1,
      aux_sym_element_text_repeat1,
    STATE(203), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(284), 2,
      sym__block_end,
      sym__line_separator,
  [2324] = 2,
    ACTIONS(288), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(286), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2339] = 2,
    ACTIONS(292), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(290), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2354] = 2,
    ACTIONS(296), 4,
      sym__attr_name,
      sym__element_rest_text,
      anon_sym_EQ,
      sym__space,
    ACTIONS(294), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_EQ_EQ,
  [2369] = 8,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(304), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(110), 1,
      sym_attr_name,
    STATE(165), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2395] = 8,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(110), 1,
      sym_attr_name,
    STATE(165), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2421] = 8,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(312), 1,
      sym__space_or_newline,
    STATE(61), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(110), 1,
      sym_attr_name,
    STATE(165), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2447] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    ACTIONS(318), 1,
      sym__space_or_newline,
    STATE(65), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(105), 1,
      sym_attr_name,
    STATE(145), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2473] = 8,
    ACTIONS(320), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      sym__attr_name,
    ACTIONS(328), 1,
      sym__space_or_newline,
    STATE(64), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(100), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2499] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(333), 1,
      sym__space_or_newline,
    STATE(71), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(105), 1,
      sym_attr_name,
    STATE(145), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2525] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      sym__space_or_newline,
    STATE(64), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(100), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2551] = 8,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      sym__space_or_newline,
    STATE(60), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(110), 1,
      sym_attr_name,
    STATE(165), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2577] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      sym__space_or_newline,
    STATE(66), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(100), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2603] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym__space_or_newline,
    STATE(70), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(100), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2629] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      sym__space_or_newline,
    STATE(64), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(100), 1,
      sym_attr_name,
    STATE(156), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2655] = 8,
    ACTIONS(357), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(362), 1,
      sym__attr_name,
    ACTIONS(365), 1,
      sym__space_or_newline,
    STATE(71), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(105), 1,
      sym_attr_name,
    STATE(145), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2681] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      sym__space_or_newline,
    STATE(71), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(105), 1,
      sym_attr_name,
    STATE(145), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2707] = 8,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    ACTIONS(374), 1,
      sym__space_or_newline,
    STATE(72), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(105), 1,
      sym_attr_name,
    STATE(145), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2733] = 8,
    ACTIONS(376), 1,
      anon_sym_STAR,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      sym__attr_name,
    ACTIONS(384), 1,
      sym__space_or_newline,
    STATE(74), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(110), 1,
      sym_attr_name,
    STATE(165), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2759] = 7,
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
    STATE(198), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [2782] = 2,
    ACTIONS(387), 3,
      sym__attr_name,
      sym_attr_assignment,
      sym__space_or_newline,
    ACTIONS(389), 5,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym_attr_assignment_noescape,
  [2795] = 6,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      sym__attr_name,
    STATE(110), 1,
      sym_attr_name,
    STATE(134), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2815] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_attr_name,
    STATE(148), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2835] = 6,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_attr_name,
    STATE(134), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2855] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_attr_name,
    STATE(148), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2875] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_attr_name,
    STATE(154), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2895] = 6,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_attr_name,
    STATE(134), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [2915] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_attr_name,
    STATE(148), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2935] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_attr_name,
    STATE(154), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [2955] = 6,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      sym__attr_name,
    ACTIONS(407), 1,
      anon_sym_STAR,
    ACTIONS(410), 1,
      sym__space,
    STATE(201), 1,
      sym_attr_name,
    STATE(85), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2975] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_attr_name,
    STATE(148), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [2995] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_attr_name,
    STATE(154), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3015] = 6,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_attr_name,
    STATE(154), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3035] = 6,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(417), 1,
      anon_sym_STAR,
    ACTIONS(419), 1,
      sym__space,
    STATE(201), 1,
      sym_attr_name,
    STATE(85), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3055] = 6,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_attr_name,
    STATE(134), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3075] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(421), 1,
      sym__element_rest_text,
    ACTIONS(423), 1,
      sym__space,
    STATE(190), 1,
      sym__text_nested,
    ACTIONS(425), 2,
      sym__block_end,
      sym__line_separator,
  [3092] = 3,
    ACTIONS(429), 1,
      sym_ruby,
    STATE(113), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3105] = 5,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      anon_sym_STAR,
    STATE(105), 1,
      sym_attr_name,
    STATE(148), 1,
      sym__attr_delimited_s,
    STATE(142), 2,
      sym__attr_delimited_splat_s,
      sym_attr_boolean,
  [3122] = 5,
    ACTIONS(298), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    STATE(110), 1,
      sym_attr_name,
    STATE(134), 1,
      sym__attr_delimited_p,
    STATE(147), 2,
      sym__attr_delimited_splat_p,
      sym_attr_boolean,
  [3139] = 3,
    ACTIONS(431), 1,
      sym_ruby,
    STATE(103), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3152] = 3,
    ACTIONS(433), 1,
      sym_ruby,
    STATE(104), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3165] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(435), 1,
      sym__element_rest_text,
    ACTIONS(437), 1,
      sym__space,
    STATE(198), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3182] = 4,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    ACTIONS(441), 1,
      sym__html_comment_condition,
    STATE(262), 1,
      sym_html_comment_condition,
    ACTIONS(443), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3197] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(445), 1,
      sym__element_rest_text,
    ACTIONS(447), 1,
      sym__space,
    STATE(247), 1,
      sym__text_nested,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [3214] = 4,
    ACTIONS(455), 1,
      sym_attr_assignment,
    ACTIONS(457), 1,
      sym_attr_assignment_noescape,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_RBRACE,
    ACTIONS(453), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3229] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(459), 1,
      sym__element_rest_text,
    STATE(118), 1,
      aux_sym_element_text_repeat1,
    STATE(198), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3246] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(459), 1,
      sym__element_rest_text,
    STATE(118), 1,
      aux_sym_element_text_repeat1,
    STATE(247), 1,
      sym__text_nested,
    ACTIONS(449), 2,
      sym__block_end,
      sym__line_separator,
  [3263] = 3,
    ACTIONS(461), 1,
      sym_ruby,
    STATE(113), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3276] = 3,
    ACTIONS(463), 1,
      sym_ruby,
    STATE(113), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3289] = 4,
    ACTIONS(465), 1,
      sym_attr_assignment,
    ACTIONS(467), 1,
      sym_attr_assignment_noescape,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_RBRACK,
    ACTIONS(453), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3304] = 5,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(335), 1,
      anon_sym_STAR,
    STATE(100), 1,
      sym_attr_name,
    STATE(154), 1,
      sym__attr_delimited_b,
    STATE(155), 2,
      sym__attr_delimited_splat_b,
      sym_attr_boolean,
  [3321] = 3,
    ACTIONS(461), 1,
      sym_ruby,
    STATE(112), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3334] = 5,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(417), 1,
      anon_sym_STAR,
    ACTIONS(419), 1,
      sym__space,
    STATE(201), 1,
      sym_attr_name,
    STATE(89), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [3351] = 5,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(469), 1,
      sym__element_rest_text,
    ACTIONS(471), 1,
      sym__space,
    STATE(206), 1,
      sym__text_nested,
    ACTIONS(473), 2,
      sym__block_end,
      sym__line_separator,
  [3368] = 4,
    ACTIONS(475), 1,
      sym_attr_assignment,
    ACTIONS(477), 1,
      sym_attr_assignment_noescape,
    ACTIONS(451), 2,
      anon_sym_STAR,
      anon_sym_RPAREN,
    ACTIONS(453), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3383] = 3,
    ACTIONS(463), 1,
      sym_ruby,
    STATE(92), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3396] = 3,
    ACTIONS(479), 1,
      sym_ruby,
    STATE(113), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(427), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3409] = 3,
    ACTIONS(160), 1,
      sym_ruby,
    STATE(113), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(481), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3422] = 4,
    ACTIONS(484), 1,
      sym__block_start,
    ACTIONS(486), 1,
      sym__block_end,
    ACTIONS(488), 1,
      sym__line_separator,
    STATE(128), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3436] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(421), 1,
      sym__element_rest_text,
    STATE(190), 1,
      sym__text_nested,
    ACTIONS(425), 2,
      sym__block_end,
      sym__line_separator,
  [3450] = 1,
    ACTIONS(490), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__space,
  [3458] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(220), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(492), 2,
      sym__block_end,
      sym__line_separator,
  [3472] = 3,
    ACTIONS(494), 1,
      sym__element_rest_text,
    STATE(118), 1,
      aux_sym_element_text_repeat1,
    ACTIONS(497), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3484] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(187), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(499), 2,
      sym__block_end,
      sym__line_separator,
  [3498] = 4,
    ACTIONS(484), 1,
      sym__block_start,
    ACTIONS(501), 1,
      sym__block_end,
    ACTIONS(503), 1,
      sym__line_separator,
    STATE(125), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3512] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(505), 1,
      sym__element_rest_text,
    STATE(205), 1,
      sym__text_nested,
    ACTIONS(507), 2,
      sym__block_end,
      sym__line_separator,
  [3526] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(234), 1,
      sym__block,
    STATE(235), 1,
      sym_nested,
    ACTIONS(509), 2,
      sym__block_end,
      sym__line_separator,
  [3540] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(229), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(511), 2,
      sym__block_end,
      sym__line_separator,
  [3554] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(193), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(513), 2,
      sym__block_end,
      sym__line_separator,
  [3568] = 4,
    ACTIONS(515), 1,
      sym__block_start,
    ACTIONS(518), 1,
      sym__block_end,
    ACTIONS(520), 1,
      sym__line_separator,
    STATE(125), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3582] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(194), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(523), 2,
      sym__block_end,
      sym__line_separator,
  [3596] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(223), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(525), 2,
      sym__block_end,
      sym__line_separator,
  [3610] = 4,
    ACTIONS(484), 1,
      sym__block_start,
    ACTIONS(527), 1,
      sym__block_end,
    ACTIONS(529), 1,
      sym__line_separator,
    STATE(125), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3624] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(195), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(531), 2,
      sym__block_end,
      sym__line_separator,
  [3638] = 4,
    ACTIONS(484), 1,
      sym__block_start,
    ACTIONS(533), 1,
      sym__block_end,
    ACTIONS(535), 1,
      sym__line_separator,
    STATE(120), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3652] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(537), 1,
      sym__element_rest_text,
    STATE(222), 1,
      sym__text_nested,
    ACTIONS(539), 2,
      sym__block_end,
      sym__line_separator,
  [3666] = 4,
    ACTIONS(395), 1,
      sym__block_start,
    ACTIONS(435), 1,
      sym__element_rest_text,
    STATE(198), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3680] = 4,
    ACTIONS(61), 1,
      sym__block_start,
    STATE(216), 1,
      sym_nested,
    STATE(234), 1,
      sym__block,
    ACTIONS(541), 2,
      sym__block_end,
      sym__line_separator,
  [3694] = 2,
    ACTIONS(545), 1,
      sym__attr_name,
    ACTIONS(543), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [3703] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(228), 1,
      sym__text_nested,
    ACTIONS(547), 2,
      sym__block_end,
      sym__line_separator,
  [3714] = 2,
    ACTIONS(551), 1,
      sym__attr_name,
    ACTIONS(549), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [3723] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(224), 1,
      sym__text_nested,
    ACTIONS(553), 2,
      sym__block_end,
      sym__line_separator,
  [3734] = 2,
    ACTIONS(234), 1,
      sym__attr_name,
    ACTIONS(232), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3743] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(190), 1,
      sym__text_nested,
    ACTIONS(425), 2,
      sym__block_end,
      sym__line_separator,
  [3754] = 2,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    ACTIONS(557), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3763] = 2,
    ACTIONS(561), 1,
      sym__attr_name,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [3772] = 2,
    ACTIONS(565), 1,
      sym__attr_name,
    ACTIONS(563), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [3781] = 2,
    ACTIONS(569), 1,
      sym__attr_name,
    ACTIONS(567), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [3790] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(218), 1,
      sym__text_nested,
    ACTIONS(571), 2,
      sym__block_end,
      sym__line_separator,
  [3801] = 2,
    ACTIONS(575), 1,
      sym__attr_name,
    ACTIONS(573), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [3810] = 2,
    ACTIONS(579), 1,
      sym__attr_name,
    ACTIONS(577), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [3819] = 2,
    ACTIONS(583), 1,
      sym__attr_name,
    ACTIONS(581), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [3828] = 2,
    ACTIONS(587), 1,
      sym__attr_name,
    ACTIONS(585), 3,
      anon_sym_STAR,
      anon_sym_RBRACK,
      sym__space_or_newline,
  [3837] = 2,
    ACTIONS(591), 1,
      sym__attr_name,
    ACTIONS(589), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [3846] = 2,
    ACTIONS(595), 1,
      sym__attr_name,
    ACTIONS(593), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [3855] = 2,
    ACTIONS(220), 1,
      sym__attr_name,
    ACTIONS(218), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3864] = 2,
    ACTIONS(599), 1,
      sym__attr_name,
    ACTIONS(597), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [3873] = 2,
    ACTIONS(197), 1,
      sym__attr_name,
    ACTIONS(189), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3882] = 2,
    ACTIONS(603), 1,
      sym__attr_name,
    ACTIONS(601), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [3891] = 2,
    ACTIONS(607), 1,
      sym__attr_name,
    ACTIONS(605), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [3900] = 2,
    ACTIONS(611), 1,
      sym__attr_name,
    ACTIONS(609), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [3909] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(205), 1,
      sym__text_nested,
    ACTIONS(507), 2,
      sym__block_end,
      sym__line_separator,
  [3920] = 4,
    ACTIONS(302), 1,
      sym__attr_name,
    ACTIONS(417), 1,
      anon_sym_STAR,
    STATE(153), 1,
      sym_attr,
    STATE(201), 1,
      sym_attr_name,
  [3933] = 1,
    ACTIONS(167), 4,
      sym_ruby,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3940] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(198), 1,
      sym__text_nested,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [3951] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(249), 1,
      sym__text_nested,
    ACTIONS(613), 2,
      sym__block_end,
      sym__line_separator,
  [3962] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(250), 1,
      sym__text_nested,
    ACTIONS(615), 2,
      sym__block_end,
      sym__line_separator,
  [3973] = 2,
    ACTIONS(242), 1,
      sym__attr_name,
    ACTIONS(240), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3982] = 3,
    ACTIONS(617), 1,
      sym__text_line,
    STATE(219), 1,
      sym__text,
    ACTIONS(619), 2,
      sym__block_end,
      sym__line_separator,
  [3993] = 2,
    ACTIONS(623), 1,
      sym__attr_name,
    ACTIONS(621), 3,
      anon_sym_STAR,
      anon_sym_RPAREN,
      sym__space_or_newline,
  [4002] = 2,
    ACTIONS(627), 1,
      sym__attr_name,
    ACTIONS(625), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4011] = 2,
    ACTIONS(238), 1,
      sym__attr_name,
    ACTIONS(236), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [4020] = 2,
    ACTIONS(631), 1,
      sym__attr_name,
    ACTIONS(629), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym__space_or_newline,
  [4029] = 4,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(302), 1,
      sym__attr_name,
    STATE(43), 1,
      sym_attr,
    STATE(245), 1,
      sym_attr_name,
  [4042] = 3,
    ACTIONS(395), 1,
      sym__block_start,
    STATE(222), 1,
      sym__text_nested,
    ACTIONS(539), 2,
      sym__block_end,
      sym__line_separator,
  [4053] = 3,
    ACTIONS(633), 1,
      sym__block_end,
    ACTIONS(635), 1,
      sym__line_separator,
    STATE(171), 1,
      aux_sym__block_repeat1,
  [4063] = 2,
    STATE(168), 1,
      sym__attr_delimited_value_b,
    ACTIONS(638), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_b,
  [4071] = 3,
    ACTIONS(640), 1,
      sym__attr_value_quoted,
    ACTIONS(642), 1,
      sym__attr_value_ruby,
    STATE(38), 1,
      sym_attr_value,
  [4081] = 1,
    ACTIONS(644), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4087] = 3,
    ACTIONS(646), 1,
      sym__block_end,
    ACTIONS(648), 1,
      sym__line_separator,
    STATE(181), 1,
      aux_sym__block_repeat1,
  [4097] = 1,
    ACTIONS(650), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4103] = 1,
    ACTIONS(652), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4109] = 2,
    STATE(143), 1,
      sym__attr_delimited_value_s,
    ACTIONS(654), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_s,
  [4117] = 2,
    STATE(149), 1,
      sym__attr_delimited_value_p,
    ACTIONS(656), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_p,
  [4125] = 3,
    ACTIONS(37), 1,
      sym__block_end,
    ACTIONS(658), 1,
      sym__line_separator,
    STATE(171), 1,
      aux_sym__block_repeat1,
  [4135] = 3,
    ACTIONS(35), 1,
      sym__block_end,
    ACTIONS(660), 1,
      sym__line_separator,
    STATE(171), 1,
      aux_sym__block_repeat1,
  [4145] = 3,
    ACTIONS(662), 1,
      sym__attr_value_quoted,
    ACTIONS(664), 1,
      sym__attr_value_ruby,
    STATE(151), 1,
      sym_attr_value,
  [4155] = 3,
    ACTIONS(666), 1,
      sym__block_end,
    ACTIONS(668), 1,
      sym__line_separator,
    STATE(180), 1,
      aux_sym__block_repeat1,
  [4165] = 1,
    ACTIONS(518), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [4171] = 2,
    ACTIONS(670), 1,
      sym_doctype_xml_encoding,
    ACTIONS(672), 2,
      sym__block_end,
      sym__line_separator,
  [4179] = 1,
    ACTIONS(674), 2,
      sym__block_end,
      sym__line_separator,
  [4184] = 1,
    ACTIONS(676), 2,
      sym__block_end,
      sym__line_separator,
  [4189] = 1,
    ACTIONS(187), 2,
      sym__block_end,
      sym__line_separator,
  [4194] = 1,
    ACTIONS(258), 2,
      sym__block_end,
      sym__line_separator,
  [4199] = 1,
    ACTIONS(539), 2,
      sym__block_end,
      sym__line_separator,
  [4204] = 1,
    ACTIONS(246), 2,
      sym__block_end,
      sym__line_separator,
  [4209] = 1,
    ACTIONS(678), 2,
      sym__block_end,
      sym__line_separator,
  [4214] = 1,
    ACTIONS(680), 2,
      sym__block_end,
      sym__line_separator,
  [4219] = 1,
    ACTIONS(682), 2,
      sym__block_end,
      sym__line_separator,
  [4224] = 1,
    ACTIONS(684), 2,
      sym__block_end,
      sym__line_separator,
  [4229] = 1,
    ACTIONS(644), 2,
      sym__block_end,
      sym__line_separator,
  [4234] = 2,
    ACTIONS(501), 1,
      sym__block_end,
    ACTIONS(686), 1,
      sym__text_line,
  [4241] = 1,
    ACTIONS(507), 2,
      sym__block_end,
      sym__line_separator,
  [4246] = 1,
    ACTIONS(272), 2,
      sym__block_end,
      sym__line_separator,
  [4251] = 1,
    ACTIONS(688), 2,
      sym__block_end,
      sym__line_separator,
  [4256] = 2,
    ACTIONS(690), 1,
      sym_attr_assignment,
    ACTIONS(692), 1,
      sym_attr_assignment_noescape,
  [4263] = 1,
    ACTIONS(694), 2,
      sym__block_end,
      sym__line_separator,
  [4268] = 1,
    ACTIONS(696), 2,
      sym__block_end,
      sym__line_separator,
  [4273] = 1,
    ACTIONS(183), 2,
      sym__block_end,
      sym__line_separator,
  [4278] = 1,
    ACTIONS(553), 2,
      sym__block_end,
      sym__line_separator,
  [4283] = 1,
    ACTIONS(425), 2,
      sym__block_end,
      sym__line_separator,
  [4288] = 1,
    ACTIONS(284), 2,
      sym__block_end,
      sym__line_separator,
  [4293] = 2,
    ACTIONS(686), 1,
      sym__text_line,
    ACTIONS(698), 1,
      sym__block_end,
  [4300] = 1,
    ACTIONS(633), 2,
      sym__block_end,
      sym__line_separator,
  [4305] = 1,
    ACTIONS(700), 2,
      sym__block_end,
      sym__line_separator,
  [4310] = 1,
    ACTIONS(702), 2,
      sym__block_end,
      sym__line_separator,
  [4315] = 2,
    ACTIONS(527), 1,
      sym__block_end,
    ACTIONS(686), 1,
      sym__text_line,
  [4322] = 1,
    ACTIONS(278), 2,
      sym__block_end,
      sym__line_separator,
  [4327] = 1,
    ACTIONS(704), 2,
      sym__block_end,
      sym__line_separator,
  [4332] = 1,
    ACTIONS(652), 2,
      sym__block_end,
      sym__line_separator,
  [4337] = 1,
    ACTIONS(706), 2,
      sym__block_end,
      sym__line_separator,
  [4342] = 2,
    ACTIONS(686), 1,
      sym__text_line,
    ACTIONS(708), 1,
      sym__block_end,
  [4349] = 1,
    ACTIONS(710), 2,
      sym__block_end,
      sym__line_separator,
  [4354] = 1,
    ACTIONS(712), 2,
      sym__block_end,
      sym__line_separator,
  [4359] = 1,
    ACTIONS(714), 2,
      sym__block_end,
      sym__line_separator,
  [4364] = 1,
    ACTIONS(716), 2,
      sym__block_end,
      sym__line_separator,
  [4369] = 1,
    ACTIONS(547), 2,
      sym__block_end,
      sym__line_separator,
  [4374] = 1,
    ACTIONS(718), 2,
      sym__block_end,
      sym__line_separator,
  [4379] = 1,
    ACTIONS(720), 2,
      sym__block_end,
      sym__line_separator,
  [4384] = 1,
    ACTIONS(722), 2,
      sym__block_end,
      sym__line_separator,
  [4389] = 1,
    ACTIONS(650), 2,
      sym__block_end,
      sym__line_separator,
  [4394] = 2,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_EQ_EQ,
  [4401] = 1,
    ACTIONS(724), 2,
      sym__block_end,
      sym__line_separator,
  [4406] = 1,
    ACTIONS(726), 2,
      sym__block_end,
      sym__line_separator,
  [4411] = 1,
    ACTIONS(728), 2,
      sym__block_end,
      sym__line_separator,
  [4416] = 1,
    ACTIONS(730), 2,
      sym__block_end,
      sym__line_separator,
  [4421] = 1,
    ACTIONS(732), 2,
      sym__block_end,
      sym__line_separator,
  [4426] = 1,
    ACTIONS(734), 2,
      sym__block_end,
      sym__line_separator,
  [4431] = 1,
    ACTIONS(736), 2,
      sym__block_end,
      sym__line_separator,
  [4436] = 1,
    ACTIONS(738), 2,
      sym__block_end,
      sym__line_separator,
  [4441] = 1,
    ACTIONS(740), 2,
      sym__block_end,
      sym__line_separator,
  [4446] = 1,
    ACTIONS(742), 2,
      sym__block_end,
      sym__line_separator,
  [4451] = 1,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
  [4456] = 1,
    ACTIONS(744), 2,
      sym__block_end,
      sym__line_separator,
  [4461] = 1,
    ACTIONS(746), 2,
      sym__block_end,
      sym__line_separator,
  [4466] = 1,
    ACTIONS(748), 2,
      sym__block_end,
      sym__line_separator,
  [4471] = 1,
    ACTIONS(248), 2,
      sym__block_end,
      sym__line_separator,
  [4476] = 1,
    ACTIONS(81), 2,
      sym__block_end,
      sym__line_separator,
  [4481] = 1,
    ACTIONS(750), 2,
      sym__block_end,
      sym__line_separator,
  [4486] = 2,
    ACTIONS(752), 1,
      sym_attr_assignment,
    ACTIONS(754), 1,
      sym_attr_assignment_noescape,
  [4493] = 1,
    ACTIONS(185), 2,
      sym__block_end,
      sym__line_separator,
  [4498] = 1,
    ACTIONS(397), 2,
      sym__block_end,
      sym__line_separator,
  [4503] = 1,
    ACTIONS(93), 2,
      sym__block_end,
      sym__line_separator,
  [4508] = 1,
    ACTIONS(756), 2,
      sym__block_end,
      sym__line_separator,
  [4513] = 1,
    ACTIONS(758), 2,
      sym__block_end,
      sym__line_separator,
  [4518] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [4522] = 1,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [4526] = 1,
    ACTIONS(760), 1,
      sym__attr_value_ruby_b,
  [4530] = 1,
    ACTIONS(762), 1,
      sym__attr_value_ruby_s,
  [4534] = 1,
    ACTIONS(764), 1,
      sym__attr_value_ruby_p,
  [4538] = 1,
    ACTIONS(766), 1,
      anon_sym_COLON,
  [4542] = 1,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [4546] = 1,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
  [4550] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [4554] = 1,
    ACTIONS(280), 1,
      anon_sym_COLON,
  [4558] = 1,
    ACTIONS(768), 1,
      sym__text_line,
  [4562] = 1,
    ACTIONS(770), 1,
      anon_sym_RBRACK,
  [4566] = 1,
    ACTIONS(772), 1,
      sym__attr_value_ruby,
  [4570] = 1,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
  [4574] = 1,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [4578] = 1,
    ACTIONS(774), 1,
      sym__attr_value_ruby,
  [4582] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [4586] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [4590] = 1,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [4594] = 1,
    ACTIONS(294), 1,
      anon_sym_COLON,
  [4598] = 1,
    ACTIONS(776), 1,
      sym_ruby,
  [4602] = 1,
    ACTIONS(778), 1,
      sym__space,
  [4606] = 1,
    ACTIONS(780), 1,
      sym_css_identifier,
  [4610] = 1,
    ACTIONS(686), 1,
      sym__text_line,
  [4614] = 1,
    ACTIONS(782), 1,
      sym_css_identifier,
  [4618] = 1,
    ACTIONS(742), 1,
      ts_builtin_sym_end,
  [4622] = 1,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
  [4626] = 1,
    ACTIONS(786), 1,
      sym__text_line,
  [4630] = 1,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 452,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 628,
  [SMALL_STATE(10)] = 722,
  [SMALL_STATE(11)] = 796,
  [SMALL_STATE(12)] = 870,
  [SMALL_STATE(13)] = 944,
  [SMALL_STATE(14)] = 1018,
  [SMALL_STATE(15)] = 1092,
  [SMALL_STATE(16)] = 1130,
  [SMALL_STATE(17)] = 1168,
  [SMALL_STATE(18)] = 1211,
  [SMALL_STATE(19)] = 1257,
  [SMALL_STATE(20)] = 1303,
  [SMALL_STATE(21)] = 1349,
  [SMALL_STATE(22)] = 1373,
  [SMALL_STATE(23)] = 1419,
  [SMALL_STATE(24)] = 1465,
  [SMALL_STATE(25)] = 1489,
  [SMALL_STATE(26)] = 1513,
  [SMALL_STATE(27)] = 1559,
  [SMALL_STATE(28)] = 1586,
  [SMALL_STATE(29)] = 1607,
  [SMALL_STATE(30)] = 1649,
  [SMALL_STATE(31)] = 1691,
  [SMALL_STATE(32)] = 1733,
  [SMALL_STATE(33)] = 1775,
  [SMALL_STATE(34)] = 1817,
  [SMALL_STATE(35)] = 1859,
  [SMALL_STATE(36)] = 1888,
  [SMALL_STATE(37)] = 1917,
  [SMALL_STATE(38)] = 1939,
  [SMALL_STATE(39)] = 1955,
  [SMALL_STATE(40)] = 1981,
  [SMALL_STATE(41)] = 1997,
  [SMALL_STATE(42)] = 2013,
  [SMALL_STATE(43)] = 2029,
  [SMALL_STATE(44)] = 2045,
  [SMALL_STATE(45)] = 2074,
  [SMALL_STATE(46)] = 2103,
  [SMALL_STATE(47)] = 2118,
  [SMALL_STATE(48)] = 2133,
  [SMALL_STATE(49)] = 2162,
  [SMALL_STATE(50)] = 2177,
  [SMALL_STATE(51)] = 2192,
  [SMALL_STATE(52)] = 2207,
  [SMALL_STATE(53)] = 2236,
  [SMALL_STATE(54)] = 2251,
  [SMALL_STATE(55)] = 2280,
  [SMALL_STATE(56)] = 2295,
  [SMALL_STATE(57)] = 2324,
  [SMALL_STATE(58)] = 2339,
  [SMALL_STATE(59)] = 2354,
  [SMALL_STATE(60)] = 2369,
  [SMALL_STATE(61)] = 2395,
  [SMALL_STATE(62)] = 2421,
  [SMALL_STATE(63)] = 2447,
  [SMALL_STATE(64)] = 2473,
  [SMALL_STATE(65)] = 2499,
  [SMALL_STATE(66)] = 2525,
  [SMALL_STATE(67)] = 2551,
  [SMALL_STATE(68)] = 2577,
  [SMALL_STATE(69)] = 2603,
  [SMALL_STATE(70)] = 2629,
  [SMALL_STATE(71)] = 2655,
  [SMALL_STATE(72)] = 2681,
  [SMALL_STATE(73)] = 2707,
  [SMALL_STATE(74)] = 2733,
  [SMALL_STATE(75)] = 2759,
  [SMALL_STATE(76)] = 2782,
  [SMALL_STATE(77)] = 2795,
  [SMALL_STATE(78)] = 2815,
  [SMALL_STATE(79)] = 2835,
  [SMALL_STATE(80)] = 2855,
  [SMALL_STATE(81)] = 2875,
  [SMALL_STATE(82)] = 2895,
  [SMALL_STATE(83)] = 2915,
  [SMALL_STATE(84)] = 2935,
  [SMALL_STATE(85)] = 2955,
  [SMALL_STATE(86)] = 2975,
  [SMALL_STATE(87)] = 2995,
  [SMALL_STATE(88)] = 3015,
  [SMALL_STATE(89)] = 3035,
  [SMALL_STATE(90)] = 3055,
  [SMALL_STATE(91)] = 3075,
  [SMALL_STATE(92)] = 3092,
  [SMALL_STATE(93)] = 3105,
  [SMALL_STATE(94)] = 3122,
  [SMALL_STATE(95)] = 3139,
  [SMALL_STATE(96)] = 3152,
  [SMALL_STATE(97)] = 3165,
  [SMALL_STATE(98)] = 3182,
  [SMALL_STATE(99)] = 3197,
  [SMALL_STATE(100)] = 3214,
  [SMALL_STATE(101)] = 3229,
  [SMALL_STATE(102)] = 3246,
  [SMALL_STATE(103)] = 3263,
  [SMALL_STATE(104)] = 3276,
  [SMALL_STATE(105)] = 3289,
  [SMALL_STATE(106)] = 3304,
  [SMALL_STATE(107)] = 3321,
  [SMALL_STATE(108)] = 3334,
  [SMALL_STATE(109)] = 3351,
  [SMALL_STATE(110)] = 3368,
  [SMALL_STATE(111)] = 3383,
  [SMALL_STATE(112)] = 3396,
  [SMALL_STATE(113)] = 3409,
  [SMALL_STATE(114)] = 3422,
  [SMALL_STATE(115)] = 3436,
  [SMALL_STATE(116)] = 3450,
  [SMALL_STATE(117)] = 3458,
  [SMALL_STATE(118)] = 3472,
  [SMALL_STATE(119)] = 3484,
  [SMALL_STATE(120)] = 3498,
  [SMALL_STATE(121)] = 3512,
  [SMALL_STATE(122)] = 3526,
  [SMALL_STATE(123)] = 3540,
  [SMALL_STATE(124)] = 3554,
  [SMALL_STATE(125)] = 3568,
  [SMALL_STATE(126)] = 3582,
  [SMALL_STATE(127)] = 3596,
  [SMALL_STATE(128)] = 3610,
  [SMALL_STATE(129)] = 3624,
  [SMALL_STATE(130)] = 3638,
  [SMALL_STATE(131)] = 3652,
  [SMALL_STATE(132)] = 3666,
  [SMALL_STATE(133)] = 3680,
  [SMALL_STATE(134)] = 3694,
  [SMALL_STATE(135)] = 3703,
  [SMALL_STATE(136)] = 3714,
  [SMALL_STATE(137)] = 3723,
  [SMALL_STATE(138)] = 3734,
  [SMALL_STATE(139)] = 3743,
  [SMALL_STATE(140)] = 3754,
  [SMALL_STATE(141)] = 3763,
  [SMALL_STATE(142)] = 3772,
  [SMALL_STATE(143)] = 3781,
  [SMALL_STATE(144)] = 3790,
  [SMALL_STATE(145)] = 3801,
  [SMALL_STATE(146)] = 3810,
  [SMALL_STATE(147)] = 3819,
  [SMALL_STATE(148)] = 3828,
  [SMALL_STATE(149)] = 3837,
  [SMALL_STATE(150)] = 3846,
  [SMALL_STATE(151)] = 3855,
  [SMALL_STATE(152)] = 3864,
  [SMALL_STATE(153)] = 3873,
  [SMALL_STATE(154)] = 3882,
  [SMALL_STATE(155)] = 3891,
  [SMALL_STATE(156)] = 3900,
  [SMALL_STATE(157)] = 3909,
  [SMALL_STATE(158)] = 3920,
  [SMALL_STATE(159)] = 3933,
  [SMALL_STATE(160)] = 3940,
  [SMALL_STATE(161)] = 3951,
  [SMALL_STATE(162)] = 3962,
  [SMALL_STATE(163)] = 3973,
  [SMALL_STATE(164)] = 3982,
  [SMALL_STATE(165)] = 3993,
  [SMALL_STATE(166)] = 4002,
  [SMALL_STATE(167)] = 4011,
  [SMALL_STATE(168)] = 4020,
  [SMALL_STATE(169)] = 4029,
  [SMALL_STATE(170)] = 4042,
  [SMALL_STATE(171)] = 4053,
  [SMALL_STATE(172)] = 4063,
  [SMALL_STATE(173)] = 4071,
  [SMALL_STATE(174)] = 4081,
  [SMALL_STATE(175)] = 4087,
  [SMALL_STATE(176)] = 4097,
  [SMALL_STATE(177)] = 4103,
  [SMALL_STATE(178)] = 4109,
  [SMALL_STATE(179)] = 4117,
  [SMALL_STATE(180)] = 4125,
  [SMALL_STATE(181)] = 4135,
  [SMALL_STATE(182)] = 4145,
  [SMALL_STATE(183)] = 4155,
  [SMALL_STATE(184)] = 4165,
  [SMALL_STATE(185)] = 4171,
  [SMALL_STATE(186)] = 4179,
  [SMALL_STATE(187)] = 4184,
  [SMALL_STATE(188)] = 4189,
  [SMALL_STATE(189)] = 4194,
  [SMALL_STATE(190)] = 4199,
  [SMALL_STATE(191)] = 4204,
  [SMALL_STATE(192)] = 4209,
  [SMALL_STATE(193)] = 4214,
  [SMALL_STATE(194)] = 4219,
  [SMALL_STATE(195)] = 4224,
  [SMALL_STATE(196)] = 4229,
  [SMALL_STATE(197)] = 4234,
  [SMALL_STATE(198)] = 4241,
  [SMALL_STATE(199)] = 4246,
  [SMALL_STATE(200)] = 4251,
  [SMALL_STATE(201)] = 4256,
  [SMALL_STATE(202)] = 4263,
  [SMALL_STATE(203)] = 4268,
  [SMALL_STATE(204)] = 4273,
  [SMALL_STATE(205)] = 4278,
  [SMALL_STATE(206)] = 4283,
  [SMALL_STATE(207)] = 4288,
  [SMALL_STATE(208)] = 4293,
  [SMALL_STATE(209)] = 4300,
  [SMALL_STATE(210)] = 4305,
  [SMALL_STATE(211)] = 4310,
  [SMALL_STATE(212)] = 4315,
  [SMALL_STATE(213)] = 4322,
  [SMALL_STATE(214)] = 4327,
  [SMALL_STATE(215)] = 4332,
  [SMALL_STATE(216)] = 4337,
  [SMALL_STATE(217)] = 4342,
  [SMALL_STATE(218)] = 4349,
  [SMALL_STATE(219)] = 4354,
  [SMALL_STATE(220)] = 4359,
  [SMALL_STATE(221)] = 4364,
  [SMALL_STATE(222)] = 4369,
  [SMALL_STATE(223)] = 4374,
  [SMALL_STATE(224)] = 4379,
  [SMALL_STATE(225)] = 4384,
  [SMALL_STATE(226)] = 4389,
  [SMALL_STATE(227)] = 4394,
  [SMALL_STATE(228)] = 4401,
  [SMALL_STATE(229)] = 4406,
  [SMALL_STATE(230)] = 4411,
  [SMALL_STATE(231)] = 4416,
  [SMALL_STATE(232)] = 4421,
  [SMALL_STATE(233)] = 4426,
  [SMALL_STATE(234)] = 4431,
  [SMALL_STATE(235)] = 4436,
  [SMALL_STATE(236)] = 4441,
  [SMALL_STATE(237)] = 4446,
  [SMALL_STATE(238)] = 4451,
  [SMALL_STATE(239)] = 4456,
  [SMALL_STATE(240)] = 4461,
  [SMALL_STATE(241)] = 4466,
  [SMALL_STATE(242)] = 4471,
  [SMALL_STATE(243)] = 4476,
  [SMALL_STATE(244)] = 4481,
  [SMALL_STATE(245)] = 4486,
  [SMALL_STATE(246)] = 4493,
  [SMALL_STATE(247)] = 4498,
  [SMALL_STATE(248)] = 4503,
  [SMALL_STATE(249)] = 4508,
  [SMALL_STATE(250)] = 4513,
  [SMALL_STATE(251)] = 4518,
  [SMALL_STATE(252)] = 4522,
  [SMALL_STATE(253)] = 4526,
  [SMALL_STATE(254)] = 4530,
  [SMALL_STATE(255)] = 4534,
  [SMALL_STATE(256)] = 4538,
  [SMALL_STATE(257)] = 4542,
  [SMALL_STATE(258)] = 4546,
  [SMALL_STATE(259)] = 4550,
  [SMALL_STATE(260)] = 4554,
  [SMALL_STATE(261)] = 4558,
  [SMALL_STATE(262)] = 4562,
  [SMALL_STATE(263)] = 4566,
  [SMALL_STATE(264)] = 4570,
  [SMALL_STATE(265)] = 4574,
  [SMALL_STATE(266)] = 4578,
  [SMALL_STATE(267)] = 4582,
  [SMALL_STATE(268)] = 4586,
  [SMALL_STATE(269)] = 4590,
  [SMALL_STATE(270)] = 4594,
  [SMALL_STATE(271)] = 4598,
  [SMALL_STATE(272)] = 4602,
  [SMALL_STATE(273)] = 4606,
  [SMALL_STATE(274)] = 4610,
  [SMALL_STATE(275)] = 4614,
  [SMALL_STATE(276)] = 4618,
  [SMALL_STATE(277)] = 4622,
  [SMALL_STATE(278)] = 4626,
  [SMALL_STATE(279)] = 4630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(275),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcuts, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcuts, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 12),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_id, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_id, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_shortcut, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_shortcut, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0), SHIFT_REPEAT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_modifier, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__output_modifier, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_plain, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0), SHIFT(76),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2, 0, 0), SHIFT(169),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, 0, 14),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 3, 0, 14),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1, 0, 15),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1, 0, 15),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 8),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 2, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 10),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 4, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 4, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 4, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 7),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 12),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrs, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_name, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_boolean, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_boolean, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2, 0, 0), SHIFT_REPEAT(159),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine_name, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, 0, 0),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 2, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 4, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 2, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 11),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, 0, 11),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 5, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_s, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_s, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 4, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_condition, 1, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 2, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_p, 2, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_p, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 1, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 3, 0, 14),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 3, 0, 14),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, 0, 6),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, 0, 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_s, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_s, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 1, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 11),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, 0, 11),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 3, 0, 14),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 3, 0, 14),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_p, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_p, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_splat_b, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_splat_b, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 11),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, 0, 11),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, 0, 6),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, 0, 6),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, 0, 6),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, 0, 6),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_value_b, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_value_b, 1, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 3, 0, 14),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 3, 0, 14),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 5, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 4, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_inline_expansion, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 5, 0, 16),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, 0, 13),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, 0, 13),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 4, 0, 13),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 4),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 7),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 8),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, 0, 9),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 2, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 5, 0, 16),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 10),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, 0, 9),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 5, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, 0, 12),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 6, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, 0, 9),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_block, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 1, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 3, 0, 9),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 3, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 4, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_inline, 1, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_xhtml, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_html5, 1, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 5, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 2, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [788] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [8] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby] = true,
  },
  [9] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [10] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [11] = {
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [12] = {
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [13] = {
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [14] = {
    [ts_external_token__attr_value_ruby] = true,
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

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_slim(void) {
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
