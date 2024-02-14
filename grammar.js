// See: https://github.com/slim-template/slim/blob/master/lib/slim/parser.rb
// Also: https://rdoc.info/gems/slim/frames

const make_attr_delimited = (token_suffix) => {
  return ($) => seq(
    field('name', $.attr_name),
    field('assignment', choice($.attr_assignment, $.attr_assignment_noescape)),
    field('value', choice(
      alias($._attr_value_quoted, $.attr_value),
      alias($[`_attr_value_ruby_${token_suffix}`], $.attr_value)
    ))
  )
}

const make_attrs_delimited = (delim_open, delim_close, token_suffix) => {
  return ($) => seq(
    delim_open,
    optional($._space),
    optional(
      seq(
        alias($[`_attr_delimited_${token_suffix}`], $.attr),
        repeat(seq($._space, alias($[`_attr_delimited_${token_suffix}`], $.attr))),
      )
    ),
    delim_close
  )
};

module.exports = grammar({
  name: 'slim',

  externals: $ => [
    $._block_start,
    $._block_end,
    $._line_separator,

    $._attr_value_quoted,
    $._attr_value_ruby,
    $._attr_value_ruby_p, // ()
    $._attr_value_ruby_s, // []
    $._attr_value_ruby_b, // {}
    $.ruby,

    $._error_sentinel
  ],

  rules: {
    source_file: $ => seq($._block),

    _block: $ => seq(
      $._block_start,
      seq(
        $._line,
        repeat(seq($._line_separator, $._line)),
        // TODO: don't generate _line_separator token here if possible
        optional($._line_separator)
      ),
      $._block_end
    ),

    _line: $ => choice(
      $._ruby_block,
      $.element,
      $.doctype,
      $.embedded_engine,
      $.verbatim_text,
      $.code_comment,
      $.html_comment,
      $.html_comment_conditional,
    ),

    element: $ => prec.left(seq(
      choice(
        seq(
          field('name', $.tag_name),
          field('attr_shortcuts', optional($.attr_shortcuts)),
        ),
        seq(
          field('name', optional($.tag_name)),
          field('attr_shortcuts', $.attr_shortcuts),
        )
      ),
      optional(field('attrs', $.attrs)),
      optional($._output_modifiers),
      choice(
        $._inline,
        seq(
          optional($._space),
          optional($.nested)
        )
      )
    )),

    _inline: $ => choice(
      $.element_text,
      $.nested_inline,
      $._closed_tag
    ),

    nested_inline: $ => choice(
      $._nested_inline_expansion,
      $.ruby_block_output,
      $.ruby_block_output_noescape
    ),

    _nested_inline_expansion: $ => seq(
      /[ \t]*:[ \t]*/,
      choice(
        $.element,
        $.embedded_engine,
      )
    ),

    _closed_tag: $ => /[ \t]*\/[ \t]*/,

    attr_shortcuts: $ => prec.right(repeat1($._attr_shortcut)),

    tag_name: $ => /(\w+|\w[\w:-]+\w)/,
    _attr_shortcut: $ => choice(
      $.shortcut_class,
      $.shortcut_id
    ),
    shortcut_class: $ => seq('.', $.css_identifier),
    shortcut_id: $ => seq('#', $.css_identifier),

    nested: $ => $._block,

    attrs: $ => choice(
      $._attrs_plain,
      $._attrs_delimited
    ),
    _attrs_plain: $ => repeat1($._attr_with_space),
    _attrs_delimited: $ => choice(
      $._attrs_delimited_p,
      $._attrs_delimited_s,
      $._attrs_delimited_b,
    ),
    _attrs_delimited_p: make_attrs_delimited('(', ')', 'p'),
    _attrs_delimited_s: make_attrs_delimited('[', ']', 's'),
    _attrs_delimited_b: make_attrs_delimited('{', '}', 'b'),
    _attr_delimited_p: make_attr_delimited('p'),
    _attr_delimited_s: make_attr_delimited('s'),
    _attr_delimited_b: make_attr_delimited('b'),

    attr: $ => seq(
      field('name', $.attr_name),
      field('assignment', choice($.attr_assignment, $.attr_assignment_noescape)),
      field('value', $.attr_value),
    ),
    _attr_with_space: $ => seq($._space, $.attr),
    attr_name: $ => $._attr_name,
    _attr_name: $ => /[a-zA-Z0-9_-]+/, // TODO: very wrong
    attr_assignment: $ => /[ \t]*=[ \t]*/,
    attr_assignment_noescape: $ => /[ \t]*==[ \t]*/,
    attr_value: $ => choice(
      $._attr_value_quoted,
      $._attr_value_ruby
      // TODO: many more
    ),

    element_text: $ => seq(
      optional($._space),
      choice(
        // Allow to match attribute token expected at this point
        seq($._attr_name, optional($._space), optional($._element_rest_text)),
        repeat1($._element_rest_text)
      ),
      optional($._text_nested)
    ),

    _element_rest_text: $ => token(prec(-1, /[^ \t][^\n]*/)),

    // From css grammar https://github.com/tree-sitter/tree-sitter-css/blob/master/grammar.js
    // Originally: /\A(#{keys}+)((?:\p{Word}|-|\/\d+|:(\w|-)+)*)/
    css_identifier: $ => /(--|-?[a-zA-Z_])[a-zA-Z0-9-_]*/,

    // From doc, mostly unclear, which means which
    doctype: $ => seq(
      'doctype',
      $._space,
      choice(
        $._doctype_html,
        $._doctype_xml,
      ),
    ),
    _doctype_html: $ => choice(
      $.doctype_html5,
      $.doctype_xhtml
    ),
    doctype_html5: $ => choice('html', '5'),
    doctype_xhtml: $ => choice('1.1', 'strict', 'frameset', 'mobile', 'basic', 'transitional'),
    _doctype_xml: $ => seq('xml', optional($.doctype_xml_encoding)),
    doctype_xml_encoding: $ => /\w+/, // Not sure which chars

    _ruby_block: $ => choice(
      $.ruby_block_control,
      $.ruby_block_output,
      $.ruby_block_output_noescape
    ),

    ruby_block_control: $ => seq(
      '-',
      $.ruby,
      optional(field('nested', $.nested))
    ),

    ruby_block_output: $ => seq(
      /[ \t]*=/,
      optional($._output_modifiers),
      $.ruby,
      optional(field('nested', $.nested))
    ),

    ruby_block_output_noescape: $ => seq(
      /[ \t]*==/,
      optional($._output_modifiers),
      $.ruby,
      optional(field('nested', $.nested))
    ),

    _output_modifiers: $ => repeat1($._output_modifier),
    _output_modifier: $ => choice(
      $.output_modifier_leading_whitespace,
      $.output_modifier_trailing_whitespace,
      $.output_modifier_legacy_trailing_whitespace
    ),
    output_modifier_leading_whitespace: $ => token.immediate('<'),
    output_modifier_trailing_whitespace: $ => token.immediate('>'),
    output_modifier_legacy_trailing_whitespace: $ => token.immediate("'"),

    embedded_engine: $ => seq(
      $.embedded_engine_name,
      optional($.attrs),
      ':',
      $._text_nested
    ),

    embedded_engine_name: $ => choice(
      'markdown', 'textile', 'rdoc', 'coffee', 'less', 'sass', 'scss', 'javascript', 'css', 'ruby'
    ),

    verbatim_text: $ => seq(
      choice('|', $.verbatim_text_modifier_trailing_whitespace),
      $._text
    ),

    verbatim_text_modifier_trailing_whitespace: $ => "'",

    _text: $ => seq(
      $._text_line,
      optional($._text_nested)
    ),

    _text_line: $ => /[^\n]+/,

    _text_nested: $ => seq(
      $._block_start,
      $._text_line,
      repeat(choice(
        seq($._line_separator, $._text_line),
        $._text_nested
      )),
      // TODO: don't generate _line_separator token here if possible
      optional($._line_separator),
      $._block_end
    ),

    html_comment_conditional: $ => seq(
      $._html_comment_conditional_marker,
      optional($.html_comment_condition),
      ']',
      optional(field('nested', $.nested))
    ),

    _html_comment_conditional_marker: $ => token(prec(1, '/[')),

    html_comment_condition: $ => $._html_comment_condition,
    _html_comment_condition: $ => /[^\]\n]+/,

    _html_comment_conditional_incomplete: $ => seq(
      $._html_comment_conditional_marker,
      optional($._html_comment_condition)
    ),

    html_comment: $ => seq(
      /\/![^\n]*/,
      optional($._text_nested)
    ),

    code_comment: $ => seq(
      choice(
        $._html_comment_conditional_incomplete,
        /\/[^\n]*/
      ),
      optional($._text_nested)
    ),

    _space: $ => token(prec(-1, /[ \t]+/))
  },

  conflicts: $ => [
    [$.attrs],
  ],

  extras: $ => []
});
