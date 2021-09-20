// See: https://github.com/slim-template/slim/blob/master/lib/slim/parser.rb
// Also: https://rdoc.info/gems/slim/frames
module.exports = grammar({
  name: 'slim',

  externals: $ => [
    $._indent,
    $._dedent,
    $._newline,
    $.ruby,
  ],

  rules: {
    source_file: $ => repeat($._block),

    // TODO: make newline not a part of block itself
    _block: $ => choice(
      $.element,
      $.doctype,
      $._ruby_block,
    ),

    _block_nonterminated: $ => choice(
      alias($._tag, $.element),
      alias($._ruby_block_itself, $.ruby_block)
    ),

    element: $ => seq(
      $._tag,
      $._newline_or_nested,
    ),

    _tag: $ => seq(
      $._tag_name_and_shortcuts,
      optional($._output_modifiers),
      optional($.tag_attributes),
      optional($.element_text),
    ),
    _tag_name_and_shortcuts: $ => choice(
      seq(field('name', $.tag_name), field('shortcuts', optional($.tag_shortcuts))),
      field('shortcuts', $.tag_shortcuts),
    ),
    tag_shortcuts: $ => repeat1($._tag_shortcut),

    // TODO: disallow spaces between shortcuts
    tag_name: $ => /\w+/,
    _tag_shortcut: $ => choice(
      $.tag_class,
      $.tag_id
    ),
    tag_class: $ => seq('.', $.css_identifier),
    tag_id: $ => seq('#', $.css_identifier),

    _newline_or_nested: $ => choice($._newline, $._nested),
    _nested: $ => seq(
      $._indent,
      repeat($._block),
      choice($._block, $._block_nonterminated),
      $._dedent
    ),

    // TODO: wrapped
    tag_attributes: $ => repeat1($.tag_attribute),
    tag_attribute: $ => seq(
      field('name', $.tag_attribute_name),
      '=',
      field('value', $.tag_attribute_value),
    ),
    tag_attribute_name: $ => /[a-zA-Z0-9_-]+/, // TODO: very wrong
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
    // Slim uses other, \p{Word} - based regexp
    css_identifier: $ => /(--|-?[a-zA-Z_])[a-zA-Z0-9-_]*/,

    // From doc, mostly unclear, which means which
    doctype: $ => seq(
      'doctype',
      choice(
        $._doctype_html,
        $._doctype_xml,
      ),
      $._newline
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
      $._newline_or_nested
    ),

    _ruby_block_itself: $ => choice(
      $.ruby_block_control,
      $.ruby_block_output,
      $.ruby_block_output_no_html_escaping,
    ),
    ruby_block_control: $ => seq('-', $._space, $.ruby),
    ruby_block_output: $ => seq('=', optional($._output_modifiers), $._space, $.ruby),
    ruby_block_output_no_html_escaping: $ => seq('==', optional($._output_modifiers), $._space, $.ruby),

    _output_modifiers: $ => repeat1($._output_modifier),
    _output_modifier: $ => choice(
      $.output_modifier_leading_whitespace,
      $.output_modifier_trailing_whitespace,
    ),
    output_modifier_leading_whitespace: $ => token.immediate('<'),
    output_modifier_trailing_whitespace: $ => token.immediate('>'),

    _space: $ => /[\s]+/,
  }
});
