#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 1
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
  aux_sym_ruby_block_output_token1 = 31,
  aux_sym_ruby_block_output_noescape_token1 = 32,
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
  sym_attr = 87,
  sym_attr_name = 88,
  sym_attr_value = 89,
  sym_attr_boolean = 90,
  sym_element_text = 91,
  sym_doctype = 92,
  sym__doctype_html = 93,
  sym_doctype_html5 = 94,
  sym_doctype_xhtml = 95,
  sym__doctype_xml = 96,
  sym__ruby_block = 97,
  sym_ruby_block_control = 98,
  sym_ruby_block_output = 99,
  sym_ruby_block_output_noescape = 100,
  aux_sym__output_modifiers = 101,
  sym__output_modifier = 102,
  sym_embedded_engine = 103,
  sym_embedded_engine_name = 104,
  sym_verbatim_text = 105,
  sym__text = 106,
  sym__text_nested = 107,
  sym_html_comment_conditional = 108,
  sym_html_comment_condition = 109,
  sym__html_comment_conditional_incomplete = 110,
  sym_html_comment = 111,
  sym_code_comment = 112,
  aux_sym__block_repeat1 = 113,
  aux_sym_attr_shortcuts_repeat1 = 114,
  aux_sym__attrs_plain_repeat1 = 115,
  aux_sym__attrs_delimited_p_repeat1 = 116,
  aux_sym__attrs_delimited_s_repeat1 = 117,
  aux_sym__attrs_delimited_b_repeat1 = 118,
  aux_sym_element_text_repeat1 = 119,
  aux_sym__text_nested_repeat1 = 120,
  alias_sym_attr_splat = 121,
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
  [aux_sym_ruby_block_output_token1] = "ruby_block_output_token1",
  [aux_sym_ruby_block_output_noescape_token1] = "ruby_block_output_noescape_token1",
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
  [sym__attr_value_ruby] = "_attr_value_ruby",
  [sym__attr_value_ruby_p] = "attr_value",
  [sym__attr_value_ruby_s] = "attr_value",
  [sym__attr_value_ruby_b] = "attr_value",
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
  [alias_sym_attr_splat] = "attr_splat",
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
  [aux_sym_ruby_block_output_token1] = aux_sym_ruby_block_output_token1,
  [aux_sym_ruby_block_output_noescape_token1] = aux_sym_ruby_block_output_noescape_token1,
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
  [sym__attr_value_ruby_p] = sym_attr_value,
  [sym__attr_value_ruby_s] = sym_attr_value,
  [sym__attr_value_ruby_b] = sym_attr_value,
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
  [alias_sym_attr_splat] = alias_sym_attr_splat,
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
  [aux_sym_ruby_block_output_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ruby_block_output_noescape_token1] = {
    .visible = false,
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
    .visible = false,
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
  [alias_sym_attr_splat] = {
    .visible = true,
    .named = true,
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
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 26, .length = 3},
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [1] = alias_sym_attr_splat,
  },
  [15] = {
    [2] = sym_attr_value,
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
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 51,
  [65] = 65,
  [66] = 66,
  [67] = 53,
  [68] = 68,
  [69] = 57,
  [70] = 54,
  [71] = 71,
  [72] = 72,
  [73] = 61,
  [74] = 28,
  [75] = 27,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 83,
  [90] = 78,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 86,
  [96] = 26,
  [97] = 77,
  [98] = 98,
  [99] = 85,
  [100] = 80,
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
  [115] = 104,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 38,
  [145] = 145,
  [146] = 36,
  [147] = 147,
  [148] = 148,
  [149] = 39,
  [150] = 150,
  [151] = 40,
  [152] = 152,
  [153] = 131,
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
  [166] = 160,
  [167] = 165,
  [168] = 159,
  [169] = 169,
  [170] = 163,
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
  [181] = 162,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 182,
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
  [202] = 183,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 164,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 172,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 50,
  [233] = 42,
  [234] = 41,
  [235] = 43,
  [236] = 236,
  [237] = 237,
  [238] = 49,
  [239] = 47,
  [240] = 48,
  [241] = 44,
  [242] = 213,
  [243] = 243,
  [244] = 45,
  [245] = 217,
  [246] = 46,
  [247] = 243,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 236,
  [260] = 222,
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
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '0') ADVANCE(210);
      if (lookahead == '5') ADVANCE(215);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == ']') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'h') ADVANCE(199);
      if (lookahead == 'j') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(166);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(241);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == ']') ADVANCE(121);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != '/' &&
          lookahead != '0' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(206);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '0') ADVANCE(210);
      if (lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'j') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '|') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'j') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-') ADVANCE(117);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == ')' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(210);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '5') ADVANCE(215);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == ']') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(36);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(210);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (!sym__attr_name_character_set_1(lookahead)) ADVANCE(206);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(210);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(210);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(216);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
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
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(219);
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
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(221);
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
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(218);
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
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 55:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == '\n' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          lookahead == '0' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__nested_inline_expansion_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__closed_tag);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'w') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'x') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(117);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attr_shortcut_custom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(117);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(183);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(201);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(171);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(134);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(168);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(163);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(189);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 't') ADVANCE(181);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(204);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'b') ADVANCE(156);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(233);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(220);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(197);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(194);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'c') ADVANCE(182);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(174);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(133);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(127);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(234);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(219);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(212);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(232);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(143);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(188);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(195);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'e') ADVANCE(192);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(147);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'f') ADVANCE(151);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(178);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(176);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(136);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(164);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(198);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(138);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'i') ADVANCE(165);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'k') ADVANCE(140);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(222);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(214);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(221);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(144);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'l') ADVANCE(146);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(161);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(162);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'm') ADVANCE(150);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(231);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(130);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'n') ADVANCE(190);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 's') ADVANCE(184);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(137);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(202);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(135);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'o') ADVANCE(170);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(145);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'p') ADVANCE(196);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(160);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(129);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(158);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'r') ADVANCE(153);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(155);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(239);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(235);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(236);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(237);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(185);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(139);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(157);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(186);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(149);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 's') ADVANCE(187);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(217);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(218);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(238);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(205);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(154);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(167);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 't') ADVANCE(159);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'v') ADVANCE(131);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'w') ADVANCE(169);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'x') ADVANCE(200);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(240);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__attr_name);
      if (lookahead == 'y') ADVANCE(177);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__attr_name);
      if (!sym__attr_name_character_set_2(lookahead)) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_attr_assignment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_attr_assignment_noescape);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__element_rest_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_css_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_frameset);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_mobile);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_basic);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_transitional);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_doctype_xml_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_ruby_block_output_token1);
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_ruby_block_output_noescape_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_output_modifier_leading_whitespace);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_output_modifier_trailing_whitespace);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_output_modifier_legacy_trailing_whitespace);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_markdown);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_textile);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_rdoc);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_coffee);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_less);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_sass);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_scss);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_javascript);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_css);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_ruby);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_verbatim_text_modifier_trailing_whitespace);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__html_comment_conditional_marker);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__html_comment_condition);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '!') ADVANCE(246);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__space_or_newline);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
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
  [21] = {.lex_state = 12, .external_lex_state = 4},
  [22] = {.lex_state = 12, .external_lex_state = 4},
  [23] = {.lex_state = 12, .external_lex_state = 4},
  [24] = {.lex_state = 2, .external_lex_state = 4},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 5, .external_lex_state = 4},
  [27] = {.lex_state = 7, .external_lex_state = 4},
  [28] = {.lex_state = 7, .external_lex_state = 4},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 9, .external_lex_state = 4},
  [31] = {.lex_state = 9, .external_lex_state = 4},
  [32] = {.lex_state = 9, .external_lex_state = 4},
  [33] = {.lex_state = 9, .external_lex_state = 4},
  [34] = {.lex_state = 9, .external_lex_state = 4},
  [35] = {.lex_state = 9, .external_lex_state = 4},
  [36] = {.lex_state = 7, .external_lex_state = 4},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7, .external_lex_state = 4},
  [39] = {.lex_state = 7, .external_lex_state = 4},
  [40] = {.lex_state = 7, .external_lex_state = 4},
  [41] = {.lex_state = 12, .external_lex_state = 4},
  [42] = {.lex_state = 12, .external_lex_state = 4},
  [43] = {.lex_state = 12, .external_lex_state = 4},
  [44] = {.lex_state = 12, .external_lex_state = 4},
  [45] = {.lex_state = 12, .external_lex_state = 4},
  [46] = {.lex_state = 12, .external_lex_state = 4},
  [47] = {.lex_state = 12, .external_lex_state = 4},
  [48] = {.lex_state = 12, .external_lex_state = 4},
  [49] = {.lex_state = 12, .external_lex_state = 4},
  [50] = {.lex_state = 12, .external_lex_state = 4},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 14, .external_lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 56, .external_lex_state = 4},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 56, .external_lex_state = 4},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 56, .external_lex_state = 4},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 56, .external_lex_state = 4},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 56, .external_lex_state = 4},
  [72] = {.lex_state = 56, .external_lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 54, .external_lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 54, .external_lex_state = 4},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 54, .external_lex_state = 4},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 54, .external_lex_state = 4},
  [88] = {.lex_state = 16, .external_lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 54, .external_lex_state = 4},
  [93] = {.lex_state = 2, .external_lex_state = 5},
  [94] = {.lex_state = 54, .external_lex_state = 4},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 2, .external_lex_state = 5},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 2, .external_lex_state = 5},
  [102] = {.lex_state = 2, .external_lex_state = 5},
  [103] = {.lex_state = 2, .external_lex_state = 5},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 54, .external_lex_state = 4},
  [107] = {.lex_state = 54, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 54, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 54, .external_lex_state = 4},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 54, .external_lex_state = 4},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 59, .external_lex_state = 6},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 6, .external_lex_state = 4},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 6},
  [159] = {.lex_state = 0, .external_lex_state = 7},
  [160] = {.lex_state = 0, .external_lex_state = 6},
  [161] = {.lex_state = 58, .external_lex_state = 6},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 6},
  [166] = {.lex_state = 0, .external_lex_state = 6},
  [167] = {.lex_state = 0, .external_lex_state = 6},
  [168] = {.lex_state = 0, .external_lex_state = 7},
  [169] = {.lex_state = 0, .external_lex_state = 6},
  [170] = {.lex_state = 0, .external_lex_state = 6},
  [171] = {.lex_state = 0, .external_lex_state = 6},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 0, .external_lex_state = 6},
  [174] = {.lex_state = 0, .external_lex_state = 6},
  [175] = {.lex_state = 0, .external_lex_state = 6},
  [176] = {.lex_state = 0, .external_lex_state = 6},
  [177] = {.lex_state = 0, .external_lex_state = 6},
  [178] = {.lex_state = 0, .external_lex_state = 6},
  [179] = {.lex_state = 0, .external_lex_state = 6},
  [180] = {.lex_state = 0, .external_lex_state = 6},
  [181] = {.lex_state = 0, .external_lex_state = 6},
  [182] = {.lex_state = 59, .external_lex_state = 3},
  [183] = {.lex_state = 59, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 6},
  [185] = {.lex_state = 0, .external_lex_state = 6},
  [186] = {.lex_state = 0, .external_lex_state = 6},
  [187] = {.lex_state = 0, .external_lex_state = 6},
  [188] = {.lex_state = 59, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 6},
  [190] = {.lex_state = 0, .external_lex_state = 6},
  [191] = {.lex_state = 0, .external_lex_state = 6},
  [192] = {.lex_state = 0, .external_lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 6},
  [194] = {.lex_state = 0, .external_lex_state = 6},
  [195] = {.lex_state = 0, .external_lex_state = 6},
  [196] = {.lex_state = 0, .external_lex_state = 6},
  [197] = {.lex_state = 0, .external_lex_state = 6},
  [198] = {.lex_state = 0, .external_lex_state = 6},
  [199] = {.lex_state = 0, .external_lex_state = 6},
  [200] = {.lex_state = 0, .external_lex_state = 6},
  [201] = {.lex_state = 0, .external_lex_state = 6},
  [202] = {.lex_state = 59, .external_lex_state = 3},
  [203] = {.lex_state = 0, .external_lex_state = 6},
  [204] = {.lex_state = 0, .external_lex_state = 6},
  [205] = {.lex_state = 0, .external_lex_state = 6},
  [206] = {.lex_state = 0, .external_lex_state = 6},
  [207] = {.lex_state = 0, .external_lex_state = 6},
  [208] = {.lex_state = 0, .external_lex_state = 6},
  [209] = {.lex_state = 0, .external_lex_state = 6},
  [210] = {.lex_state = 0, .external_lex_state = 8},
  [211] = {.lex_state = 0, .external_lex_state = 6},
  [212] = {.lex_state = 0, .external_lex_state = 6},
  [213] = {.lex_state = 0, .external_lex_state = 6},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0, .external_lex_state = 6},
  [216] = {.lex_state = 0, .external_lex_state = 6},
  [217] = {.lex_state = 0, .external_lex_state = 6},
  [218] = {.lex_state = 0, .external_lex_state = 6},
  [219] = {.lex_state = 0, .external_lex_state = 6},
  [220] = {.lex_state = 0, .external_lex_state = 6},
  [221] = {.lex_state = 0, .external_lex_state = 6},
  [222] = {.lex_state = 0, .external_lex_state = 6},
  [223] = {.lex_state = 0, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 9},
  [225] = {.lex_state = 0, .external_lex_state = 6},
  [226] = {.lex_state = 0, .external_lex_state = 6},
  [227] = {.lex_state = 0, .external_lex_state = 6},
  [228] = {.lex_state = 0, .external_lex_state = 10},
  [229] = {.lex_state = 0, .external_lex_state = 6},
  [230] = {.lex_state = 0, .external_lex_state = 6},
  [231] = {.lex_state = 0, .external_lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 59},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0, .external_lex_state = 11},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 0, .external_lex_state = 11},
  [248] = {.lex_state = 59},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 0, .external_lex_state = 5},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 0, .external_lex_state = 12},
  [255] = {.lex_state = 0, .external_lex_state = 13},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0, .external_lex_state = 14},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 59},
  [260] = {.lex_state = 0},
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
    [aux_sym_ruby_block_output_token1] = ACTIONS(1),
    [aux_sym_ruby_block_output_noescape_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(249),
    [sym__block] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__block_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(33), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(132), 1,
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
    STATE(194), 12,
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
  [82] = 19,
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
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(35), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(132), 1,
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
    STATE(194), 12,
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
  [164] = 19,
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
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(37), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(132), 1,
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
    STATE(194), 12,
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
  [246] = 19,
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
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    ACTIONS(39), 1,
      sym__block_end,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(132), 1,
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
    STATE(194), 12,
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
  [328] = 18,
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
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(132), 1,
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
    STATE(194), 12,
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
  [407] = 18,
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
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(132), 1,
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
    STATE(167), 12,
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
  [486] = 18,
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
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(27), 1,
      sym__html_comment_conditional_marker,
    ACTIONS(29), 1,
      aux_sym_html_comment_token1,
    ACTIONS(31), 1,
      aux_sym_code_comment_token1,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(132), 1,
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
    STATE(165), 12,
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
  [565] = 25,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(43), 1,
      sym__closed_tag,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(57), 1,
      sym__space,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(12), 1,
      sym_attr_shortcuts,
    STATE(22), 1,
      sym_attrs,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(61), 2,
      sym__block_end,
      sym__line_separator,
    STATE(13), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(55), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(16), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    STATE(215), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(46), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [657] = 20,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(63), 1,
      sym__closed_tag,
    ACTIONS(67), 1,
      sym__space,
    STATE(23), 1,
      sym_attrs,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(69), 2,
      sym__block_end,
      sym__line_separator,
    STATE(14), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(65), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(197), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(46), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [731] = 20,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(71), 1,
      sym__closed_tag,
    ACTIONS(75), 1,
      sym__space,
    STATE(19), 1,
      sym_attrs,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(77), 2,
      sym__block_end,
      sym__line_separator,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(73), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(201), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(46), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [805] = 20,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(79), 1,
      sym__closed_tag,
    ACTIONS(83), 1,
      sym__space,
    STATE(18), 1,
      sym_attrs,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(85), 2,
      sym__block_end,
      sym__line_separator,
    STATE(11), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(81), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(203), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(46), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [879] = 20,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(87), 1,
      sym__closed_tag,
    ACTIONS(89), 1,
      sym__space,
    STATE(20), 1,
      sym_attrs,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(91), 2,
      sym__block_end,
      sym__line_separator,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(73), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(171), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(46), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [953] = 20,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(93), 1,
      sym__closed_tag,
    ACTIONS(95), 1,
      sym__space,
    STATE(21), 1,
      sym_attrs,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(97), 2,
      sym__block_end,
      sym__line_separator,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(73), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(192), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
    STATE(46), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1027] = 6,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      sym_attr_shortcut_custom,
    ACTIONS(110), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    STATE(15), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(99), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym_ruby_block_output_noescape_token1,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1063] = 6,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(114), 1,
      sym_attr_shortcut_custom,
    ACTIONS(116), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    STATE(15), 4,
      sym__attr_shortcut,
      sym_attr_shortcut_class,
      sym_attr_shortcut_id,
      aux_sym_attr_shortcuts_repeat1,
    ACTIONS(112), 12,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym_ruby_block_output_noescape_token1,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1099] = 9,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_attr_shortcut_custom,
    STATE(10), 1,
      sym_attr_shortcuts,
    STATE(37), 1,
      sym_embedded_engine_name,
    STATE(193), 2,
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
  [1140] = 13,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(118), 1,
      sym__closed_tag,
    ACTIONS(120), 1,
      sym__space,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(122), 2,
      sym__block_end,
      sym__line_separator,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(169), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1186] = 13,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(124), 1,
      sym__closed_tag,
    ACTIONS(126), 1,
      sym__space,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(128), 2,
      sym__block_end,
      sym__line_separator,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(198), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1232] = 13,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(130), 1,
      sym__closed_tag,
    ACTIONS(132), 1,
      sym__space,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(134), 2,
      sym__block_end,
      sym__line_separator,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(176), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1278] = 13,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(136), 1,
      sym__closed_tag,
    ACTIONS(138), 1,
      sym__space,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(140), 2,
      sym__block_end,
      sym__line_separator,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(186), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1324] = 13,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(142), 1,
      sym__closed_tag,
    ACTIONS(144), 1,
      sym__space,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(146), 2,
      sym__block_end,
      sym__line_separator,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(206), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1370] = 13,
    ACTIONS(19), 1,
      aux_sym_ruby_block_output_token1,
    ACTIONS(21), 1,
      aux_sym_ruby_block_output_noescape_token1,
    ACTIONS(41), 1,
      aux_sym__nested_inline_expansion_token1,
    ACTIONS(51), 1,
      sym__attr_name,
    ACTIONS(53), 1,
      sym__element_rest_text,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(148), 1,
      sym__closed_tag,
    ACTIONS(150), 1,
      sym__space,
    STATE(76), 1,
      aux_sym_element_text_repeat1,
    STATE(212), 1,
      sym__block,
    ACTIONS(152), 2,
      sym__block_end,
      sym__line_separator,
    STATE(200), 3,
      sym__nested_inline_expansion,
      sym_ruby_block_output,
      sym_ruby_block_output_noescape,
    STATE(189), 4,
      sym__inline,
      sym_nested_inline,
      sym_nested,
      sym_element_text,
  [1416] = 2,
    ACTIONS(156), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(154), 14,
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
      aux_sym_ruby_block_output_noescape_token1,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1440] = 2,
    ACTIONS(160), 5,
      sym_attr_shortcut_custom,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(158), 14,
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
      aux_sym_ruby_block_output_noescape_token1,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [1464] = 4,
    STATE(26), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(166), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
    ACTIONS(164), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(162), 9,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      aux_sym_ruby_block_output_noescape_token1,
  [1491] = 7,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym__attr_name,
    ACTIONS(178), 1,
      sym__space,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(176), 2,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
    STATE(28), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(169), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1520] = 7,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(186), 1,
      sym__attr_name,
    ACTIONS(191), 1,
      sym__space,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(189), 2,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
    STATE(28), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
    ACTIONS(181), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1549] = 4,
    ACTIONS(198), 1,
      anon_sym_xml,
    ACTIONS(194), 2,
      anon_sym_html,
      anon_sym_5,
    STATE(223), 4,
      sym__doctype_html,
      sym_doctype_html5,
      sym_doctype_xhtml,
      sym__doctype_xml,
    ACTIONS(196), 6,
      anon_sym_1_DOT1,
      anon_sym_strict,
      anon_sym_frameset,
      anon_sym_mobile,
      anon_sym_basic,
      anon_sym_transitional,
  [1571] = 11,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      sym__attr_name,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(204), 1,
      sym__space,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(196), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(206), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1607] = 11,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      sym__attr_name,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(204), 1,
      sym__space,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(192), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(97), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1643] = 11,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      sym__attr_name,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(204), 1,
      sym__space,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(185), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(208), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1679] = 11,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      sym__attr_name,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(204), 1,
      sym__space,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(171), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(91), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1715] = 11,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      sym__attr_name,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(204), 1,
      sym__space,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(201), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(77), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1751] = 11,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      sym__attr_name,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(204), 1,
      sym__space,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(174), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    STATE(214), 1,
      sym_attr_name,
    ACTIONS(210), 2,
      sym__block_end,
      sym__line_separator,
    STATE(27), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [1787] = 2,
    ACTIONS(214), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(212), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      aux_sym_ruby_block_output_noescape_token1,
  [1803] = 7,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(224), 1,
      sym__space,
    STATE(250), 1,
      sym_attrs,
    STATE(246), 5,
      sym__attrs_plain,
      sym__attrs_delimited,
      sym__attrs_delimited_p,
      sym__attrs_delimited_s,
      sym__attrs_delimited_b,
  [1829] = 2,
    ACTIONS(228), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(226), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      aux_sym_ruby_block_output_noescape_token1,
  [1845] = 2,
    ACTIONS(189), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(181), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      aux_sym_ruby_block_output_noescape_token1,
  [1861] = 2,
    ACTIONS(232), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(230), 7,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      anon_sym_STAR,
      aux_sym_ruby_block_output_noescape_token1,
  [1877] = 2,
    ACTIONS(236), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(234), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1892] = 2,
    ACTIONS(240), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(238), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1907] = 2,
    ACTIONS(244), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(242), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1922] = 2,
    ACTIONS(248), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(246), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1937] = 2,
    ACTIONS(252), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(250), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1952] = 2,
    ACTIONS(256), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(254), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1967] = 2,
    ACTIONS(260), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(258), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1982] = 2,
    ACTIONS(264), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(262), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [1997] = 2,
    ACTIONS(268), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(266), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [2012] = 2,
    ACTIONS(272), 4,
      sym__attr_name,
      sym__element_rest_text,
      aux_sym_ruby_block_output_token1,
      sym__space,
    ACTIONS(270), 6,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
      aux_sym__nested_inline_expansion_token1,
      sym__closed_tag,
      aux_sym_ruby_block_output_noescape_token1,
  [2027] = 8,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(280), 1,
      sym__space_or_newline,
    STATE(73), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(98), 1,
      sym_attr_name,
    STATE(141), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2052] = 7,
    ACTIONS(282), 1,
      sym_attr_assignment,
    ACTIONS(284), 1,
      sym_attr_assignment_noescape,
    ACTIONS(286), 1,
      sym__element_rest_text,
    ACTIONS(288), 1,
      sym__space,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(221), 1,
      sym__text_nested,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [2075] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_STAR,
    ACTIONS(298), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(82), 1,
      sym_attr_name,
    STATE(136), 1,
      sym__attr_delimited_b,
    STATE(142), 1,
      sym_attr_boolean,
  [2100] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(304), 1,
      sym__space_or_newline,
    STATE(55), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(134), 1,
      sym__attr_delimited_p,
  [2125] = 8,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(311), 1,
      sym__attr_name,
    ACTIONS(314), 1,
      sym__space_or_newline,
    STATE(55), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(134), 1,
      sym__attr_delimited_p,
  [2150] = 7,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(317), 1,
      sym__attr_name,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(208), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(319), 2,
      sym__block_end,
      sym__line_separator,
  [2173] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(296), 1,
      anon_sym_STAR,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      sym__space_or_newline,
    STATE(67), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(82), 1,
      sym_attr_name,
    STATE(136), 1,
      sym__attr_delimited_b,
    STATE(142), 1,
      sym_attr_boolean,
  [2198] = 8,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(327), 1,
      anon_sym_STAR,
    ACTIONS(330), 1,
      sym__attr_name,
    ACTIONS(333), 1,
      sym__space_or_newline,
    STATE(58), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(98), 1,
      sym_attr_name,
    STATE(141), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2223] = 7,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(317), 1,
      sym__attr_name,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(195), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(336), 2,
      sym__block_end,
      sym__line_separator,
  [2246] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      sym__space_or_newline,
    STATE(70), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(134), 1,
      sym__attr_delimited_p,
  [2271] = 8,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    ACTIONS(344), 1,
      sym__space_or_newline,
    STATE(58), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(98), 1,
      sym_attr_name,
    STATE(141), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2296] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 1,
      sym__space_or_newline,
    STATE(54), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(134), 1,
      sym__attr_delimited_p,
  [2321] = 8,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      anon_sym_STAR,
    ACTIONS(355), 1,
      sym__attr_name,
    ACTIONS(358), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(82), 1,
      sym_attr_name,
    STATE(136), 1,
      sym__attr_delimited_b,
    STATE(142), 1,
      sym_attr_boolean,
  [2346] = 8,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    ACTIONS(363), 1,
      sym__space_or_newline,
    STATE(61), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(98), 1,
      sym_attr_name,
    STATE(141), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2371] = 2,
    ACTIONS(282), 3,
      sym__attr_name,
      sym_attr_assignment,
      sym__space_or_newline,
    ACTIONS(284), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym_attr_assignment_noescape,
  [2384] = 7,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(317), 1,
      sym__attr_name,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(199), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(365), 2,
      sym__block_end,
      sym__line_separator,
  [2407] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(296), 1,
      anon_sym_STAR,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      sym__space_or_newline,
    STATE(63), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(82), 1,
      sym_attr_name,
    STATE(136), 1,
      sym__attr_delimited_b,
    STATE(142), 1,
      sym_attr_boolean,
  [2432] = 7,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(317), 1,
      sym__attr_name,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(204), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(371), 2,
      sym__block_end,
      sym__line_separator,
  [2455] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(296), 1,
      anon_sym_STAR,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 1,
      sym__space_or_newline,
    STATE(53), 1,
      aux_sym__attrs_delimited_b_repeat1,
    STATE(82), 1,
      sym_attr_name,
    STATE(136), 1,
      sym__attr_delimited_b,
    STATE(142), 1,
      sym_attr_boolean,
  [2480] = 8,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      sym__space_or_newline,
    STATE(55), 1,
      aux_sym__attrs_delimited_p_repeat1,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(134), 1,
      sym__attr_delimited_p,
  [2505] = 7,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(317), 1,
      sym__attr_name,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(173), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(381), 2,
      sym__block_end,
      sym__line_separator,
  [2528] = 7,
    ACTIONS(59), 1,
      sym__block_start,
    ACTIONS(202), 1,
      sym__element_rest_text,
    ACTIONS(317), 1,
      sym__attr_name,
    STATE(94), 1,
      aux_sym_element_text_repeat1,
    STATE(184), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(383), 2,
      sym__block_end,
      sym__line_separator,
  [2551] = 8,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      sym__space_or_newline,
    STATE(58), 1,
      aux_sym__attrs_delimited_s_repeat1,
    STATE(98), 1,
      sym_attr_name,
    STATE(141), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2576] = 6,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(186), 1,
      sym__attr_name,
    ACTIONS(389), 1,
      anon_sym_STAR,
    ACTIONS(392), 1,
      sym__space,
    STATE(172), 1,
      sym_attr_name,
    STATE(74), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2596] = 6,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(395), 1,
      anon_sym_STAR,
    ACTIONS(397), 1,
      sym__space,
    STATE(172), 1,
      sym_attr_name,
    STATE(74), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2616] = 5,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(399), 1,
      sym__element_rest_text,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(175), 1,
      sym__text_nested,
    ACTIONS(401), 2,
      sym__block_end,
      sym__line_separator,
  [2633] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(133), 1,
      sym__attr_delimited_p,
  [2652] = 6,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_attr_name,
    STATE(139), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2671] = 5,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(403), 1,
      sym__element_rest_text,
    ACTIONS(405), 1,
      sym__space,
    STATE(175), 1,
      sym__text_nested,
    ACTIONS(401), 2,
      sym__block_end,
      sym__line_separator,
  [2688] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(296), 1,
      anon_sym_STAR,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_attr_name,
    STATE(142), 1,
      sym_attr_boolean,
    STATE(145), 1,
      sym__attr_delimited_b,
  [2707] = 5,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(407), 1,
      sym__element_rest_text,
    ACTIONS(409), 1,
      sym__space,
    STATE(187), 1,
      sym__text_nested,
    ACTIONS(411), 2,
      sym__block_end,
      sym__line_separator,
  [2724] = 4,
    ACTIONS(417), 1,
      sym_attr_assignment,
    ACTIONS(419), 1,
      sym_attr_assignment_noescape,
    ACTIONS(413), 2,
      anon_sym_RBRACE,
      anon_sym_STAR,
    ACTIONS(415), 2,
      sym__attr_name,
      sym__space_or_newline,
  [2739] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(296), 1,
      anon_sym_STAR,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_attr_name,
    STATE(142), 1,
      sym_attr_boolean,
    STATE(145), 1,
      sym__attr_delimited_b,
  [2758] = 4,
    ACTIONS(423), 1,
      sym_attr_assignment,
    ACTIONS(425), 1,
      sym_attr_assignment_noescape,
    ACTIONS(413), 2,
      anon_sym_RPAREN,
      anon_sym_STAR,
    ACTIONS(415), 2,
      sym__attr_name,
      sym__space_or_newline,
  [2773] = 6,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_attr_name,
    STATE(139), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2792] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(133), 1,
      sym__attr_delimited_p,
  [2811] = 5,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(431), 1,
      sym__element_rest_text,
    ACTIONS(433), 1,
      sym__space,
    STATE(221), 1,
      sym__text_nested,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [2828] = 4,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    ACTIONS(437), 1,
      sym__html_comment_condition,
    STATE(237), 1,
      sym_html_comment_condition,
    ACTIONS(439), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [2843] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(296), 1,
      anon_sym_STAR,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_attr_name,
    STATE(142), 1,
      sym_attr_boolean,
    STATE(145), 1,
      sym__attr_delimited_b,
  [2862] = 6,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_attr_name,
    STATE(139), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [2881] = 5,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(395), 1,
      anon_sym_STAR,
    ACTIONS(397), 1,
      sym__space,
    STATE(172), 1,
      sym_attr_name,
    STATE(75), 2,
      sym_attr,
      aux_sym__attrs_plain_repeat1,
  [2898] = 5,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(443), 1,
      sym__element_rest_text,
    ACTIONS(445), 1,
      sym__space,
    STATE(190), 1,
      sym__text_nested,
    ACTIONS(447), 2,
      sym__block_end,
      sym__line_separator,
  [2915] = 3,
    ACTIONS(451), 1,
      sym_ruby,
    STATE(96), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(449), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [2928] = 5,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(399), 1,
      sym__element_rest_text,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    STATE(221), 1,
      sym__text_nested,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [2945] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(133), 1,
      sym__attr_delimited_p,
  [2964] = 3,
    ACTIONS(162), 1,
      sym_ruby,
    STATE(96), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(455), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [2977] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      anon_sym_STAR,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(133), 1,
      sym__attr_delimited_p,
  [2996] = 4,
    ACTIONS(458), 1,
      sym_attr_assignment,
    ACTIONS(460), 1,
      sym_attr_assignment_noescape,
    ACTIONS(413), 2,
      anon_sym_RBRACK,
      anon_sym_STAR,
    ACTIONS(415), 2,
      sym__attr_name,
      sym__space_or_newline,
  [3011] = 6,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_attr_name,
    STATE(139), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [3030] = 6,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_STAR,
    STATE(82), 1,
      sym_attr_name,
    STATE(142), 1,
      sym_attr_boolean,
    STATE(145), 1,
      sym__attr_delimited_b,
  [3049] = 3,
    ACTIONS(466), 1,
      sym_ruby,
    STATE(93), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(464), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3062] = 3,
    ACTIONS(470), 1,
      sym_ruby,
    STATE(103), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(468), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3075] = 3,
    ACTIONS(472), 1,
      sym_ruby,
    STATE(96), 2,
      aux_sym__output_modifiers,
      sym__output_modifier,
    ACTIONS(449), 3,
      sym_output_modifier_leading_whitespace,
      sym_output_modifier_trailing_whitespace,
      sym_output_modifier_legacy_trailing_whitespace,
  [3088] = 4,
    ACTIONS(474), 1,
      sym__block_start,
    ACTIONS(476), 1,
      sym__block_end,
    ACTIONS(478), 1,
      sym__line_separator,
    STATE(122), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3102] = 4,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(212), 1,
      sym__block,
    STATE(227), 1,
      sym_nested,
    ACTIONS(480), 2,
      sym__block_end,
      sym__line_separator,
  [3116] = 4,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(482), 1,
      sym__element_rest_text,
    STATE(191), 1,
      sym__text_nested,
    ACTIONS(484), 2,
      sym__block_end,
      sym__line_separator,
  [3130] = 3,
    ACTIONS(486), 1,
      sym__element_rest_text,
    STATE(107), 1,
      aux_sym_element_text_repeat1,
    ACTIONS(489), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3142] = 4,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(212), 1,
      sym__block,
    STATE(226), 1,
      sym_nested,
    ACTIONS(491), 2,
      sym__block_end,
      sym__line_separator,
  [3156] = 4,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(212), 1,
      sym__block,
    STATE(225), 1,
      sym_nested,
    ACTIONS(493), 2,
      sym__block_end,
      sym__line_separator,
  [3170] = 5,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(302), 1,
      anon_sym_STAR,
    STATE(84), 1,
      sym_attr_name,
    STATE(127), 1,
      sym_attr_boolean,
    STATE(133), 1,
      sym__attr_delimited_p,
  [3186] = 4,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(178), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(495), 2,
      sym__block_end,
      sym__line_separator,
  [3200] = 4,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(212), 1,
      sym__block,
    STATE(231), 1,
      sym_nested,
    ACTIONS(497), 2,
      sym__block_end,
      sym__line_separator,
  [3214] = 4,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(179), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(499), 2,
      sym__block_end,
      sym__line_separator,
  [3228] = 1,
    ACTIONS(501), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym__space,
  [3236] = 4,
    ACTIONS(474), 1,
      sym__block_start,
    ACTIONS(503), 1,
      sym__block_end,
    ACTIONS(505), 1,
      sym__line_separator,
    STATE(123), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3250] = 4,
    ACTIONS(59), 1,
      sym__block_start,
    STATE(180), 1,
      sym_nested,
    STATE(212), 1,
      sym__block,
    ACTIONS(507), 2,
      sym__block_end,
      sym__line_separator,
  [3264] = 4,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(509), 1,
      sym__element_rest_text,
    STATE(205), 1,
      sym__text_nested,
    ACTIONS(511), 2,
      sym__block_end,
      sym__line_separator,
  [3278] = 4,
    ACTIONS(513), 1,
      sym__block_start,
    ACTIONS(516), 1,
      sym__block_end,
    ACTIONS(518), 1,
      sym__line_separator,
    STATE(118), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3292] = 5,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(296), 1,
      anon_sym_STAR,
    STATE(82), 1,
      sym_attr_name,
    STATE(142), 1,
      sym_attr_boolean,
    STATE(145), 1,
      sym__attr_delimited_b,
  [3308] = 4,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(431), 1,
      sym__element_rest_text,
    STATE(221), 1,
      sym__text_nested,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [3322] = 5,
    ACTIONS(276), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    STATE(98), 1,
      sym_attr_name,
    STATE(139), 1,
      sym__attr_delimited_s,
    STATE(147), 1,
      sym_attr_boolean,
  [3338] = 4,
    ACTIONS(474), 1,
      sym__block_start,
    ACTIONS(521), 1,
      sym__block_end,
    ACTIONS(523), 1,
      sym__line_separator,
    STATE(118), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3352] = 4,
    ACTIONS(474), 1,
      sym__block_start,
    ACTIONS(525), 1,
      sym__block_end,
    ACTIONS(527), 1,
      sym__line_separator,
    STATE(118), 2,
      sym__text_nested,
      aux_sym__text_nested_repeat1,
  [3366] = 4,
    ACTIONS(290), 1,
      sym__block_start,
    ACTIONS(407), 1,
      sym__element_rest_text,
    STATE(187), 1,
      sym__text_nested,
    ACTIONS(411), 2,
      sym__block_end,
      sym__line_separator,
  [3380] = 2,
    ACTIONS(531), 1,
      sym__attr_name,
    ACTIONS(529), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3389] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(207), 1,
      sym__text_nested,
    ACTIONS(533), 2,
      sym__block_end,
      sym__line_separator,
  [3400] = 2,
    ACTIONS(537), 1,
      sym__attr_name,
    ACTIONS(535), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3409] = 3,
    ACTIONS(539), 1,
      sym__text_line,
    STATE(229), 1,
      sym__text,
    ACTIONS(541), 2,
      sym__block_end,
      sym__line_separator,
  [3420] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(187), 1,
      sym__text_nested,
    ACTIONS(411), 2,
      sym__block_end,
      sym__line_separator,
  [3431] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(220), 1,
      sym__text_nested,
    ACTIONS(543), 2,
      sym__block_end,
      sym__line_separator,
  [3442] = 4,
    ACTIONS(278), 1,
      sym__attr_name,
    ACTIONS(395), 1,
      anon_sym_STAR,
    STATE(149), 1,
      sym_attr,
    STATE(172), 1,
      sym_attr_name,
  [3455] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(216), 1,
      sym__text_nested,
    ACTIONS(545), 2,
      sym__block_end,
      sym__line_separator,
  [3466] = 2,
    ACTIONS(549), 1,
      sym__attr_name,
    ACTIONS(547), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3475] = 2,
    ACTIONS(553), 1,
      sym__attr_name,
    ACTIONS(551), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3484] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(230), 1,
      sym__text_nested,
    ACTIONS(555), 2,
      sym__block_end,
      sym__line_separator,
  [3495] = 2,
    ACTIONS(559), 1,
      sym__attr_name,
    ACTIONS(557), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3504] = 2,
    ACTIONS(563), 1,
      sym__attr_name,
    ACTIONS(561), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3513] = 2,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    ACTIONS(567), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3522] = 2,
    ACTIONS(571), 1,
      sym__attr_name,
    ACTIONS(569), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3531] = 2,
    ACTIONS(575), 1,
      sym__attr_name,
    ACTIONS(573), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3540] = 2,
    ACTIONS(579), 1,
      sym__attr_name,
    ACTIONS(577), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3549] = 2,
    ACTIONS(583), 1,
      sym__attr_name,
    ACTIONS(581), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3558] = 2,
    ACTIONS(587), 1,
      sym__attr_name,
    ACTIONS(585), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3567] = 2,
    ACTIONS(228), 1,
      sym__attr_name,
    ACTIONS(226), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3576] = 2,
    ACTIONS(591), 1,
      sym__attr_name,
    ACTIONS(589), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3585] = 2,
    ACTIONS(214), 1,
      sym__attr_name,
    ACTIONS(212), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3594] = 2,
    ACTIONS(595), 1,
      sym__attr_name,
    ACTIONS(593), 3,
      anon_sym_RBRACK,
      anon_sym_STAR,
      sym__space_or_newline,
  [3603] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(221), 1,
      sym__text_nested,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [3614] = 2,
    ACTIONS(189), 1,
      sym__attr_name,
    ACTIONS(181), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3623] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(191), 1,
      sym__text_nested,
    ACTIONS(484), 2,
      sym__block_end,
      sym__line_separator,
  [3634] = 2,
    ACTIONS(232), 1,
      sym__attr_name,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_COLON,
      sym__space,
  [3643] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(211), 1,
      sym__text_nested,
    ACTIONS(597), 2,
      sym__block_end,
      sym__line_separator,
  [3654] = 4,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(278), 1,
      sym__attr_name,
    STATE(39), 1,
      sym_attr,
    STATE(214), 1,
      sym_attr_name,
  [3667] = 2,
    ACTIONS(601), 1,
      sym__attr_name,
    ACTIONS(599), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym__space_or_newline,
  [3676] = 2,
    ACTIONS(605), 1,
      sym__attr_name,
    ACTIONS(603), 3,
      anon_sym_RBRACE,
      anon_sym_STAR,
      sym__space_or_newline,
  [3685] = 3,
    ACTIONS(290), 1,
      sym__block_start,
    STATE(205), 1,
      sym__text_nested,
    ACTIONS(511), 2,
      sym__block_end,
      sym__line_separator,
  [3696] = 1,
    ACTIONS(516), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3702] = 3,
    ACTIONS(607), 1,
      sym__block_end,
    ACTIONS(609), 1,
      sym__line_separator,
    STATE(158), 1,
      aux_sym__block_repeat1,
  [3712] = 2,
    STATE(38), 1,
      sym_attr_value,
    ACTIONS(612), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby,
  [3720] = 3,
    ACTIONS(33), 1,
      sym__block_end,
    ACTIONS(614), 1,
      sym__line_separator,
    STATE(158), 1,
      aux_sym__block_repeat1,
  [3730] = 2,
    ACTIONS(616), 1,
      sym_doctype_xml_encoding,
    ACTIONS(618), 2,
      sym__block_end,
      sym__line_separator,
  [3738] = 1,
    ACTIONS(620), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3744] = 1,
    ACTIONS(622), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3750] = 1,
    ACTIONS(624), 3,
      sym__block_start,
      sym__block_end,
      sym__line_separator,
  [3756] = 3,
    ACTIONS(626), 1,
      sym__block_end,
    ACTIONS(628), 1,
      sym__line_separator,
    STATE(166), 1,
      aux_sym__block_repeat1,
  [3766] = 3,
    ACTIONS(37), 1,
      sym__block_end,
    ACTIONS(630), 1,
      sym__line_separator,
    STATE(158), 1,
      aux_sym__block_repeat1,
  [3776] = 3,
    ACTIONS(632), 1,
      sym__block_end,
    ACTIONS(634), 1,
      sym__line_separator,
    STATE(160), 1,
      aux_sym__block_repeat1,
  [3786] = 2,
    STATE(144), 1,
      sym_attr_value,
    ACTIONS(636), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby,
  [3794] = 1,
    ACTIONS(336), 2,
      sym__block_end,
      sym__line_separator,
  [3799] = 1,
    ACTIONS(622), 2,
      sym__block_end,
      sym__line_separator,
  [3804] = 1,
    ACTIONS(210), 2,
      sym__block_end,
      sym__line_separator,
  [3809] = 2,
    ACTIONS(638), 1,
      sym_attr_assignment,
    ACTIONS(640), 1,
      sym_attr_assignment_noescape,
  [3816] = 1,
    ACTIONS(642), 2,
      sym__block_end,
      sym__line_separator,
  [3821] = 1,
    ACTIONS(644), 2,
      sym__block_end,
      sym__line_separator,
  [3826] = 1,
    ACTIONS(292), 2,
      sym__block_end,
      sym__line_separator,
  [3831] = 1,
    ACTIONS(365), 2,
      sym__block_end,
      sym__line_separator,
  [3836] = 1,
    ACTIONS(646), 2,
      sym__block_end,
      sym__line_separator,
  [3841] = 1,
    ACTIONS(648), 2,
      sym__block_end,
      sym__line_separator,
  [3846] = 1,
    ACTIONS(650), 2,
      sym__block_end,
      sym__line_separator,
  [3851] = 1,
    ACTIONS(652), 2,
      sym__block_end,
      sym__line_separator,
  [3856] = 1,
    ACTIONS(620), 2,
      sym__block_end,
      sym__line_separator,
  [3861] = 2,
    ACTIONS(521), 1,
      sym__block_end,
    ACTIONS(654), 1,
      sym__text_line,
  [3868] = 2,
    ACTIONS(654), 1,
      sym__text_line,
    ACTIONS(656), 1,
      sym__block_end,
  [3875] = 1,
    ACTIONS(658), 2,
      sym__block_end,
      sym__line_separator,
  [3880] = 1,
    ACTIONS(660), 2,
      sym__block_end,
      sym__line_separator,
  [3885] = 1,
    ACTIONS(371), 2,
      sym__block_end,
      sym__line_separator,
  [3890] = 1,
    ACTIONS(511), 2,
      sym__block_end,
      sym__line_separator,
  [3895] = 2,
    ACTIONS(525), 1,
      sym__block_end,
    ACTIONS(654), 1,
      sym__text_line,
  [3902] = 1,
    ACTIONS(383), 2,
      sym__block_end,
      sym__line_separator,
  [3907] = 1,
    ACTIONS(411), 2,
      sym__block_end,
      sym__line_separator,
  [3912] = 1,
    ACTIONS(533), 2,
      sym__block_end,
      sym__line_separator,
  [3917] = 1,
    ACTIONS(208), 2,
      sym__block_end,
      sym__line_separator,
  [3922] = 1,
    ACTIONS(662), 2,
      sym__block_end,
      sym__line_separator,
  [3927] = 1,
    ACTIONS(607), 2,
      sym__block_end,
      sym__line_separator,
  [3932] = 1,
    ACTIONS(664), 2,
      sym__block_end,
      sym__line_separator,
  [3937] = 1,
    ACTIONS(666), 2,
      sym__block_end,
      sym__line_separator,
  [3942] = 1,
    ACTIONS(97), 2,
      sym__block_end,
      sym__line_separator,
  [3947] = 1,
    ACTIONS(319), 2,
      sym__block_end,
      sym__line_separator,
  [3952] = 1,
    ACTIONS(668), 2,
      sym__block_end,
      sym__line_separator,
  [3957] = 1,
    ACTIONS(670), 2,
      sym__block_end,
      sym__line_separator,
  [3962] = 1,
    ACTIONS(206), 2,
      sym__block_end,
      sym__line_separator,
  [3967] = 2,
    ACTIONS(654), 1,
      sym__text_line,
    ACTIONS(672), 1,
      sym__block_end,
  [3974] = 1,
    ACTIONS(77), 2,
      sym__block_end,
      sym__line_separator,
  [3979] = 1,
    ACTIONS(674), 2,
      sym__block_end,
      sym__line_separator,
  [3984] = 1,
    ACTIONS(597), 2,
      sym__block_end,
      sym__line_separator,
  [3989] = 1,
    ACTIONS(381), 2,
      sym__block_end,
      sym__line_separator,
  [3994] = 1,
    ACTIONS(676), 2,
      sym__block_end,
      sym__line_separator,
  [3999] = 1,
    ACTIONS(678), 2,
      sym__block_end,
      sym__line_separator,
  [4004] = 1,
    ACTIONS(624), 2,
      sym__block_end,
      sym__line_separator,
  [4009] = 1,
    ACTIONS(680), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_p,
  [4014] = 1,
    ACTIONS(682), 2,
      sym__block_end,
      sym__line_separator,
  [4019] = 1,
    ACTIONS(684), 2,
      sym__block_end,
      sym__line_separator,
  [4024] = 1,
    ACTIONS(686), 2,
      sym__block_end,
      sym__line_separator,
  [4029] = 2,
    ACTIONS(688), 1,
      sym_attr_assignment,
    ACTIONS(690), 1,
      sym_attr_assignment_noescape,
  [4036] = 1,
    ACTIONS(91), 2,
      sym__block_end,
      sym__line_separator,
  [4041] = 1,
    ACTIONS(692), 2,
      sym__block_end,
      sym__line_separator,
  [4046] = 1,
    ACTIONS(694), 2,
      sym__block_end,
      sym__line_separator,
  [4051] = 1,
    ACTIONS(696), 2,
      sym__block_end,
      sym__line_separator,
  [4056] = 1,
    ACTIONS(698), 2,
      sym__block_end,
      sym__line_separator,
  [4061] = 1,
    ACTIONS(700), 2,
      sym__block_end,
      sym__line_separator,
  [4066] = 1,
    ACTIONS(484), 2,
      sym__block_end,
      sym__line_separator,
  [4071] = 1,
    ACTIONS(702), 2,
      sym__block_end,
      sym__line_separator,
  [4076] = 1,
    ACTIONS(704), 2,
      sym__block_end,
      sym__line_separator,
  [4081] = 1,
    ACTIONS(706), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_b,
  [4086] = 1,
    ACTIONS(708), 2,
      sym__block_end,
      sym__line_separator,
  [4091] = 1,
    ACTIONS(710), 2,
      sym__block_end,
      sym__line_separator,
  [4096] = 1,
    ACTIONS(712), 2,
      sym__block_end,
      sym__line_separator,
  [4101] = 1,
    ACTIONS(714), 2,
      sym__attr_value_quoted,
      sym__attr_value_ruby_s,
  [4106] = 1,
    ACTIONS(716), 2,
      sym__block_end,
      sym__line_separator,
  [4111] = 1,
    ACTIONS(718), 2,
      sym__block_end,
      sym__line_separator,
  [4116] = 1,
    ACTIONS(720), 2,
      sym__block_end,
      sym__line_separator,
  [4121] = 1,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [4125] = 1,
    ACTIONS(238), 1,
      anon_sym_COLON,
  [4129] = 1,
    ACTIONS(234), 1,
      anon_sym_COLON,
  [4133] = 1,
    ACTIONS(242), 1,
      anon_sym_COLON,
  [4137] = 1,
    ACTIONS(722), 1,
      sym__text_line,
  [4141] = 1,
    ACTIONS(724), 1,
      anon_sym_RBRACK,
  [4145] = 1,
    ACTIONS(266), 1,
      anon_sym_COLON,
  [4149] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [4153] = 1,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [4157] = 1,
    ACTIONS(246), 1,
      anon_sym_COLON,
  [4161] = 1,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
  [4165] = 1,
    ACTIONS(726), 1,
      sym__attr_value_ruby,
  [4169] = 1,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [4173] = 1,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
  [4177] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [4181] = 1,
    ACTIONS(728), 1,
      sym__attr_value_ruby,
  [4185] = 1,
    ACTIONS(654), 1,
      sym__text_line,
  [4189] = 1,
    ACTIONS(730), 1,
      ts_builtin_sym_end,
  [4193] = 1,
    ACTIONS(732), 1,
      anon_sym_COLON,
  [4197] = 1,
    ACTIONS(734), 1,
      sym_ruby,
  [4201] = 1,
    ACTIONS(736), 1,
      sym__space,
  [4205] = 1,
    ACTIONS(738), 1,
      sym_css_identifier,
  [4209] = 1,
    ACTIONS(740), 1,
      sym__attr_value_ruby_p,
  [4213] = 1,
    ACTIONS(742), 1,
      sym__attr_value_ruby_s,
  [4217] = 1,
    ACTIONS(744), 1,
      sym_css_identifier,
  [4221] = 1,
    ACTIONS(746), 1,
      sym__attr_value_ruby_b,
  [4225] = 1,
    ACTIONS(748), 1,
      ts_builtin_sym_end,
  [4229] = 1,
    ACTIONS(750), 1,
      sym__text_line,
  [4233] = 1,
    ACTIONS(702), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 657,
  [SMALL_STATE(11)] = 731,
  [SMALL_STATE(12)] = 805,
  [SMALL_STATE(13)] = 879,
  [SMALL_STATE(14)] = 953,
  [SMALL_STATE(15)] = 1027,
  [SMALL_STATE(16)] = 1063,
  [SMALL_STATE(17)] = 1099,
  [SMALL_STATE(18)] = 1140,
  [SMALL_STATE(19)] = 1186,
  [SMALL_STATE(20)] = 1232,
  [SMALL_STATE(21)] = 1278,
  [SMALL_STATE(22)] = 1324,
  [SMALL_STATE(23)] = 1370,
  [SMALL_STATE(24)] = 1416,
  [SMALL_STATE(25)] = 1440,
  [SMALL_STATE(26)] = 1464,
  [SMALL_STATE(27)] = 1491,
  [SMALL_STATE(28)] = 1520,
  [SMALL_STATE(29)] = 1549,
  [SMALL_STATE(30)] = 1571,
  [SMALL_STATE(31)] = 1607,
  [SMALL_STATE(32)] = 1643,
  [SMALL_STATE(33)] = 1679,
  [SMALL_STATE(34)] = 1715,
  [SMALL_STATE(35)] = 1751,
  [SMALL_STATE(36)] = 1787,
  [SMALL_STATE(37)] = 1803,
  [SMALL_STATE(38)] = 1829,
  [SMALL_STATE(39)] = 1845,
  [SMALL_STATE(40)] = 1861,
  [SMALL_STATE(41)] = 1877,
  [SMALL_STATE(42)] = 1892,
  [SMALL_STATE(43)] = 1907,
  [SMALL_STATE(44)] = 1922,
  [SMALL_STATE(45)] = 1937,
  [SMALL_STATE(46)] = 1952,
  [SMALL_STATE(47)] = 1967,
  [SMALL_STATE(48)] = 1982,
  [SMALL_STATE(49)] = 1997,
  [SMALL_STATE(50)] = 2012,
  [SMALL_STATE(51)] = 2027,
  [SMALL_STATE(52)] = 2052,
  [SMALL_STATE(53)] = 2075,
  [SMALL_STATE(54)] = 2100,
  [SMALL_STATE(55)] = 2125,
  [SMALL_STATE(56)] = 2150,
  [SMALL_STATE(57)] = 2173,
  [SMALL_STATE(58)] = 2198,
  [SMALL_STATE(59)] = 2223,
  [SMALL_STATE(60)] = 2246,
  [SMALL_STATE(61)] = 2271,
  [SMALL_STATE(62)] = 2296,
  [SMALL_STATE(63)] = 2321,
  [SMALL_STATE(64)] = 2346,
  [SMALL_STATE(65)] = 2371,
  [SMALL_STATE(66)] = 2384,
  [SMALL_STATE(67)] = 2407,
  [SMALL_STATE(68)] = 2432,
  [SMALL_STATE(69)] = 2455,
  [SMALL_STATE(70)] = 2480,
  [SMALL_STATE(71)] = 2505,
  [SMALL_STATE(72)] = 2528,
  [SMALL_STATE(73)] = 2551,
  [SMALL_STATE(74)] = 2576,
  [SMALL_STATE(75)] = 2596,
  [SMALL_STATE(76)] = 2616,
  [SMALL_STATE(77)] = 2633,
  [SMALL_STATE(78)] = 2652,
  [SMALL_STATE(79)] = 2671,
  [SMALL_STATE(80)] = 2688,
  [SMALL_STATE(81)] = 2707,
  [SMALL_STATE(82)] = 2724,
  [SMALL_STATE(83)] = 2739,
  [SMALL_STATE(84)] = 2758,
  [SMALL_STATE(85)] = 2773,
  [SMALL_STATE(86)] = 2792,
  [SMALL_STATE(87)] = 2811,
  [SMALL_STATE(88)] = 2828,
  [SMALL_STATE(89)] = 2843,
  [SMALL_STATE(90)] = 2862,
  [SMALL_STATE(91)] = 2881,
  [SMALL_STATE(92)] = 2898,
  [SMALL_STATE(93)] = 2915,
  [SMALL_STATE(94)] = 2928,
  [SMALL_STATE(95)] = 2945,
  [SMALL_STATE(96)] = 2964,
  [SMALL_STATE(97)] = 2977,
  [SMALL_STATE(98)] = 2996,
  [SMALL_STATE(99)] = 3011,
  [SMALL_STATE(100)] = 3030,
  [SMALL_STATE(101)] = 3049,
  [SMALL_STATE(102)] = 3062,
  [SMALL_STATE(103)] = 3075,
  [SMALL_STATE(104)] = 3088,
  [SMALL_STATE(105)] = 3102,
  [SMALL_STATE(106)] = 3116,
  [SMALL_STATE(107)] = 3130,
  [SMALL_STATE(108)] = 3142,
  [SMALL_STATE(109)] = 3156,
  [SMALL_STATE(110)] = 3170,
  [SMALL_STATE(111)] = 3186,
  [SMALL_STATE(112)] = 3200,
  [SMALL_STATE(113)] = 3214,
  [SMALL_STATE(114)] = 3228,
  [SMALL_STATE(115)] = 3236,
  [SMALL_STATE(116)] = 3250,
  [SMALL_STATE(117)] = 3264,
  [SMALL_STATE(118)] = 3278,
  [SMALL_STATE(119)] = 3292,
  [SMALL_STATE(120)] = 3308,
  [SMALL_STATE(121)] = 3322,
  [SMALL_STATE(122)] = 3338,
  [SMALL_STATE(123)] = 3352,
  [SMALL_STATE(124)] = 3366,
  [SMALL_STATE(125)] = 3380,
  [SMALL_STATE(126)] = 3389,
  [SMALL_STATE(127)] = 3400,
  [SMALL_STATE(128)] = 3409,
  [SMALL_STATE(129)] = 3420,
  [SMALL_STATE(130)] = 3431,
  [SMALL_STATE(131)] = 3442,
  [SMALL_STATE(132)] = 3455,
  [SMALL_STATE(133)] = 3466,
  [SMALL_STATE(134)] = 3475,
  [SMALL_STATE(135)] = 3484,
  [SMALL_STATE(136)] = 3495,
  [SMALL_STATE(137)] = 3504,
  [SMALL_STATE(138)] = 3513,
  [SMALL_STATE(139)] = 3522,
  [SMALL_STATE(140)] = 3531,
  [SMALL_STATE(141)] = 3540,
  [SMALL_STATE(142)] = 3549,
  [SMALL_STATE(143)] = 3558,
  [SMALL_STATE(144)] = 3567,
  [SMALL_STATE(145)] = 3576,
  [SMALL_STATE(146)] = 3585,
  [SMALL_STATE(147)] = 3594,
  [SMALL_STATE(148)] = 3603,
  [SMALL_STATE(149)] = 3614,
  [SMALL_STATE(150)] = 3623,
  [SMALL_STATE(151)] = 3634,
  [SMALL_STATE(152)] = 3643,
  [SMALL_STATE(153)] = 3654,
  [SMALL_STATE(154)] = 3667,
  [SMALL_STATE(155)] = 3676,
  [SMALL_STATE(156)] = 3685,
  [SMALL_STATE(157)] = 3696,
  [SMALL_STATE(158)] = 3702,
  [SMALL_STATE(159)] = 3712,
  [SMALL_STATE(160)] = 3720,
  [SMALL_STATE(161)] = 3730,
  [SMALL_STATE(162)] = 3738,
  [SMALL_STATE(163)] = 3744,
  [SMALL_STATE(164)] = 3750,
  [SMALL_STATE(165)] = 3756,
  [SMALL_STATE(166)] = 3766,
  [SMALL_STATE(167)] = 3776,
  [SMALL_STATE(168)] = 3786,
  [SMALL_STATE(169)] = 3794,
  [SMALL_STATE(170)] = 3799,
  [SMALL_STATE(171)] = 3804,
  [SMALL_STATE(172)] = 3809,
  [SMALL_STATE(173)] = 3816,
  [SMALL_STATE(174)] = 3821,
  [SMALL_STATE(175)] = 3826,
  [SMALL_STATE(176)] = 3831,
  [SMALL_STATE(177)] = 3836,
  [SMALL_STATE(178)] = 3841,
  [SMALL_STATE(179)] = 3846,
  [SMALL_STATE(180)] = 3851,
  [SMALL_STATE(181)] = 3856,
  [SMALL_STATE(182)] = 3861,
  [SMALL_STATE(183)] = 3868,
  [SMALL_STATE(184)] = 3875,
  [SMALL_STATE(185)] = 3880,
  [SMALL_STATE(186)] = 3885,
  [SMALL_STATE(187)] = 3890,
  [SMALL_STATE(188)] = 3895,
  [SMALL_STATE(189)] = 3902,
  [SMALL_STATE(190)] = 3907,
  [SMALL_STATE(191)] = 3912,
  [SMALL_STATE(192)] = 3917,
  [SMALL_STATE(193)] = 3922,
  [SMALL_STATE(194)] = 3927,
  [SMALL_STATE(195)] = 3932,
  [SMALL_STATE(196)] = 3937,
  [SMALL_STATE(197)] = 3942,
  [SMALL_STATE(198)] = 3947,
  [SMALL_STATE(199)] = 3952,
  [SMALL_STATE(200)] = 3957,
  [SMALL_STATE(201)] = 3962,
  [SMALL_STATE(202)] = 3967,
  [SMALL_STATE(203)] = 3974,
  [SMALL_STATE(204)] = 3979,
  [SMALL_STATE(205)] = 3984,
  [SMALL_STATE(206)] = 3989,
  [SMALL_STATE(207)] = 3994,
  [SMALL_STATE(208)] = 3999,
  [SMALL_STATE(209)] = 4004,
  [SMALL_STATE(210)] = 4009,
  [SMALL_STATE(211)] = 4014,
  [SMALL_STATE(212)] = 4019,
  [SMALL_STATE(213)] = 4024,
  [SMALL_STATE(214)] = 4029,
  [SMALL_STATE(215)] = 4036,
  [SMALL_STATE(216)] = 4041,
  [SMALL_STATE(217)] = 4046,
  [SMALL_STATE(218)] = 4051,
  [SMALL_STATE(219)] = 4056,
  [SMALL_STATE(220)] = 4061,
  [SMALL_STATE(221)] = 4066,
  [SMALL_STATE(222)] = 4071,
  [SMALL_STATE(223)] = 4076,
  [SMALL_STATE(224)] = 4081,
  [SMALL_STATE(225)] = 4086,
  [SMALL_STATE(226)] = 4091,
  [SMALL_STATE(227)] = 4096,
  [SMALL_STATE(228)] = 4101,
  [SMALL_STATE(229)] = 4106,
  [SMALL_STATE(230)] = 4111,
  [SMALL_STATE(231)] = 4116,
  [SMALL_STATE(232)] = 4121,
  [SMALL_STATE(233)] = 4125,
  [SMALL_STATE(234)] = 4129,
  [SMALL_STATE(235)] = 4133,
  [SMALL_STATE(236)] = 4137,
  [SMALL_STATE(237)] = 4141,
  [SMALL_STATE(238)] = 4145,
  [SMALL_STATE(239)] = 4149,
  [SMALL_STATE(240)] = 4153,
  [SMALL_STATE(241)] = 4157,
  [SMALL_STATE(242)] = 4161,
  [SMALL_STATE(243)] = 4165,
  [SMALL_STATE(244)] = 4169,
  [SMALL_STATE(245)] = 4173,
  [SMALL_STATE(246)] = 4177,
  [SMALL_STATE(247)] = 4181,
  [SMALL_STATE(248)] = 4185,
  [SMALL_STATE(249)] = 4189,
  [SMALL_STATE(250)] = 4193,
  [SMALL_STATE(251)] = 4197,
  [SMALL_STATE(252)] = 4201,
  [SMALL_STATE(253)] = 4205,
  [SMALL_STATE(254)] = 4209,
  [SMALL_STATE(255)] = 4213,
  [SMALL_STATE(256)] = 4217,
  [SMALL_STATE(257)] = 4221,
  [SMALL_STATE(258)] = 4225,
  [SMALL_STATE(259)] = 4229,
  [SMALL_STATE(260)] = 4233,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(256),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(253),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2), SHIFT_REPEAT(15),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_shortcuts_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcuts, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcuts, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 13),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_class, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_class, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_shortcut_id, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_shortcut_id, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__output_modifiers, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2), SHIFT_REPEAT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_plain, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2), SHIFT(65),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_plain, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__attrs_plain, 2), SHIFT(153),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(243),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(65),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(153),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_value, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, .production_id = 16),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 3, .production_id = 16),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 2, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 2, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrs, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_s, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_s, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_b, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_b, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrs_delimited_p, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrs_delimited_p, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_name, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(254),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(65),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2), SHIFT_REPEAT(110),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 13),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(255),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(65),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2), SHIFT_REPEAT(121),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 7),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(257),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(65),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2), SHIFT_REPEAT(119),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 8),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 10),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, .production_id = 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(247),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attrs_plain_repeat1, 2), SHIFT_REPEAT(131),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_boolean, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_boolean, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__output_modifiers, 2), SHIFT_REPEAT(96),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 3),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2), SHIFT_REPEAT(107),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_text_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine_name, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 4),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2), SHIFT_REPEAT(259),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_nested_repeat1, 2), SHIFT_REPEAT(248),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 2, .production_id = 11),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 2, .production_id = 11),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, .production_id = 12),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 2, .production_id = 12),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, .production_id = 6),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_p_repeat1, 1, .production_id = 6),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, .production_id = 6),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 1, .production_id = 6),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 2, .production_id = 11),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 2, .production_id = 11),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_condition, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment_conditional_incomplete, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, .production_id = 12),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 2, .production_id = 12),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 3, .production_id = 15),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 3, .production_id = 15),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, .production_id = 6),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_s_repeat1, 1, .production_id = 6),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 2, .production_id = 11),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 2, .production_id = 11),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, .production_id = 12),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attrs_delimited_b_repeat1, 2, .production_id = 12),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_s, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_s, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_p, 3, .production_id = 15),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_p, 3, .production_id = 15),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_delimited_b, 3, .production_id = 15),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attr_delimited_b, 3, .production_id = 15),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(6),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_nested, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype_xml, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 4, .production_id = 14),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 4, .production_id = 14),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 4, .production_id = 14),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 5),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, .production_id = 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nested_inline_expansion, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 7),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 8),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_inline, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, .production_id = 10),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_text, 5),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 6, .production_id = 13),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_engine, 6),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_comment, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_html5, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_xhtml, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_control, 3, .production_id = 9),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output, 3, .production_id = 9),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block_output_noescape, 3, .production_id = 9),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_text, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment_conditional, 3, .production_id = 9),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [730] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
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
    [ts_external_token__attr_value_ruby] = true,
  },
  [8] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [9] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_b] = true,
  },
  [10] = {
    [ts_external_token__attr_value_quoted] = true,
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [11] = {
    [ts_external_token__attr_value_ruby] = true,
  },
  [12] = {
    [ts_external_token__attr_value_ruby_p] = true,
  },
  [13] = {
    [ts_external_token__attr_value_ruby_s] = true,
  },
  [14] = {
    [ts_external_token__attr_value_ruby_b] = true,
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
