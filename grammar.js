// See: https://github.com/slim-template/slim/blob/master/lib/slim/parser.rb
// Also: https://rdoc.info/gems/slim/frames
module.exports = grammar({
  name: 'slim',

  externals: $ => [
    $.indent,
    $.dedent,
    $.start_of_line,
    $.end_of_line,
    $._ruby,
    $.error_sentinel
  ],

  rules: {
    source_file: $ => repeat(choice($._block, $.empty_line)),

    // TODO: make newline not a part of block itself
    _block: $ => seq(
      $.start_of_line,
      choice(
        $.element,
        //$.doctype
        //$._ruby_block
      ),
    ),

    empty_line: $ => prec(1, seq(
      $.start_of_line,
      optional($._space),
      $.end_of_line
    )),

    element: $ => prec.left(seq(
      choice(
        seq(
          field('name', $.tag_name),
          field('shortcuts', optional($.attr_shortcuts)),
        ),
        seq(
          field('name', optional($.tag_name)),
          field('shortcuts', $.attr_shortcuts),
        )
      ),
      optional(seq($._space, $.tag_attributes)),
      optional(seq($._space, $.element_text)),
      $.end_of_line,
      optional($.nested)
    )),

    attr_shortcuts: $ => prec.right(repeat1($._attr_shortcut)),

    tag_name: $ => /(\w+|\w[\w:-]+\w)/,
    _attr_shortcut: $ => choice(
      $.tag_class,
      $.tag_id
    ),
    tag_class: $ => seq('.', $.css_identifier),
    tag_id: $ => seq('#', $.css_identifier),

    nested: $ => seq(
      $.indent,
      repeat1($._block),
      $.dedent
    ),

    // TODO: wrapped
    tag_attributes: $ => repeat1($.tag_attribute),
    tag_attribute: $ => seq(
      field('name', $.tag_attribute_name),
      '=',
      field('value', $.tag_attribute_value),
    ),
    tag_attribute_name: $ => token(prec(1, /[a-zA-Z0-9_-]+/)), // TODO: very wrong
    tag_attribute_value: $ => choice(
      $._tag_attribute_value_quoted
      // TODO: many more
    ),
    _tag_attribute_value_quoted: $ => choice(
      /"[^"]*"/, // TODO: support escape
      /'[^']*'/
    ),

    element_text: $ => /.+/, // TODO: very wrong

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
      $.end_of_line
    ),
    _doctype_html: $ => choice(
      $.doctype_html5,
      $.doctype_xhtml
    ),
    doctype_html5: $ => choice('html', '5'),
    doctype_xhtml: $ => choice('1.1', 'strict', 'frameset', 'mobile', 'basic', 'transitional'),
    _doctype_xml: $ => seq('xml', optional($.doctype_xml_encoding)),
    doctype_xml_encoding: $ => /\w+/, // Not sure which chars

    _ruby_block: $ => seq(
      $._ruby_block_itself,
      $.end_of_line,
      optional($.nested)
    ),

    _ruby_block_itself: $ => choice(
      $.ruby_block_control,
      $.ruby_block_output,
      $.ruby_block_output_no_html_escaping,
    ),
    ruby_block_control: $ => seq('-', $._space, $._ruby),
    ruby_block_output: $ => seq('=', optional($._output_modifiers), $._space, $._ruby),
    ruby_block_output_no_html_escaping: $ => seq('==', optional($._output_modifiers), $._space, $._ruby),

    _output_modifiers: $ => repeat1($._output_modifier),
    _output_modifier: $ => choice(
      $.output_modifier_leading_whitespace,
      $.output_modifier_trailing_whitespace,
      $.output_modifier_single_trailing_whitespace
    ),
    output_modifier_leading_whitespace: $ => token.immediate('<'),
    output_modifier_trailing_whitespace: $ => token.immediate('>'),
    output_modifier_single_trailing_whitespace: $ => token.immediate("'"),

    _space: $ => /[ \t]+/
  },

  extras: $ => []
});
