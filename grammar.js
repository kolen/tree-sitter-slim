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
    ruby_block_control: $ => seq('-', $.ruby),
    ruby_block_output: $ => seq('=', $._output_modifiers, $.ruby),
    ruby_block_output_no_html_escaping: $ => seq('==', $._output_modifiers, $.ruby),

    _output_modifiers: $ => repeat1($._output_modifier),
    _output_modifier: $ => choice(
      $.output_modifier_leading_whitespace,
      $.output_modifier_trailing_whitespace,
    ),
    output_modifier_leading_whitespace: $ => token.immediate('<'),
    output_modifier_trailing_whitespace: $ => token.immediate('>'),
  }
});
