// See: https://github.com/slim-template/slim/blob/master/lib/slim/parser.rb
// Also: https://rdoc.info/gems/slim/frames

const each_token_suffix = (suffixes, template) => {
  return suffixes.reduce((tokens, suffix) => {
    return {...tokens, ...template(suffix)}
  }, {})
}

module.exports = grammar({
  name: 'slim',

  externals: $ => [
    $._block_start,
    $._block_end,
    $._line_separator,

    $.attr_value_quoted,
    $._attr_value_ruby,
    $._attr_value_ruby_p, // ()
    $._attr_value_ruby_s, // []
    $._attr_value_ruby_b, // {}
    $.ruby,

    $._error_sentinel
  ],

  rules: {
    source_file: $ => optional($._block),

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
      optional($._output_modifiers),
      optional(field('attrs', $.attrs)),
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
      $.attr_shortcut_class,
      $.attr_shortcut_id,
      $.attr_shortcut_custom
    ),
    attr_shortcut_class: $ => seq('.', optional($.css_identifier)),
    attr_shortcut_id: $ => seq('#', $.css_identifier),
    // In real slim, custom shortcuts only parsed if prefix is
    // configured, otherwise parsed as inline text
    attr_shortcut_custom: $ => token(prec(-1, /[^ \t\na-zA-Z0-9_-]+[a-zA-Z0-9_-]*/)),

    nested: $ => $._block,

    attrs: $ => choice(
      $._attrs_plain,
      $._attrs_delimited
    ),
    _attrs_plain: $ => seq($._space, repeat1(seq(optional($._space), $.attr))),
    _attrs_delimited: $ => choice(
      $._attrs_delimited_p,
      $._attrs_delimited_s,
      $._attrs_delimited_b,
    ),

    ...each_token_suffix(
      ['p', 's', 'b'],
      (suffix) => {
        const delim_open = { p: '(', s: '[', b: '{' }[suffix];
        const delim_close = { p: ')', s: ']', b: '}' }[suffix];

        return {
          [`_attr_delimited_value_${suffix}`]: $ => choice(
            $.attr_value_quoted,
            alias($[`_attr_value_ruby_${suffix}`], $.attr_value_ruby)
          ),

          [`_attr_delimited_splat_${suffix}`]: $ => seq(
            '*',
            $[`_attr_value_ruby_${suffix}`]
          ),

          [`_attr_delimited_${suffix}`]: $ => choice(
            alias($[`_attr_delimited_splat_${suffix}`], $.attr_splat),
            $.attr_boolean,
            seq(
              field('name', $.attr_name),
              field('assignment', choice($.attr_assignment, $.attr_assignment_noescape)),
              field('value', $[`_attr_delimited_value_${suffix}`])
            )
          ),

          [`_attrs_delimited_${suffix}`]: $ => seq(
            optional($._space),
            delim_open,
            repeat(seq(
              optional($._space_or_newline), alias($[`_attr_delimited_${suffix}`], $.attr)
            )),
            optional($._space_or_newline),
            delim_close
          ),
        }
      }
    ),

    attr: $ => choice(
      seq('*', alias($._attr_value_ruby, $.attr_splat)),
      seq(
        field('name', $.attr_name),
        field('assignment', choice($.attr_assignment, $.attr_assignment_noescape)),
        field('value', $._attr_value),
      ),
    ),
    attr_name: $ => $._attr_name,
    _attr_name: $ => token(prec(-2, /[^ \t\n\\0\"\'></=()\[\]{}]+/)),
    attr_assignment: $ => /[ \t]*=[ \t]*/,
    attr_assignment_noescape: $ => /[ \t]*==[ \t]*/,
    _attr_value: $ => choice(
      $.attr_value_quoted,
      alias($._attr_value_ruby, $.attr_value_ruby)
      // TODO: many more
    ),
    attr_boolean: $ => $.attr_name,

    element_text: $ => seq(
      optional($._space),
      choice(
        // Allow to match attribute token expected at this point
        seq($._attr_name, optional($._space), optional($._element_rest_text)),
        repeat1($._element_rest_text)
      ),
      optional($._text_nested)
    ),

    _element_rest_text: $ => token(prec(-3, /[^ =\t][^\n]*/)),

    // From css grammar https://github.com/tree-sitter/tree-sitter-css/blob/master/grammar.js
    // Originally from Slim: /\A(#{keys}+)((?:\p{Word}|-|\/\d+|:(\w|-)+)*)/
    // With added support for `:` and `/`
    css_identifier: $ => /(--|-?[a-zA-Z_])[a-zA-Z0-9-_:\/]*/,

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
      optional($._space),
      '=',
      optional($._output_modifiers),
      $.ruby,
      optional(field('nested', $.nested))
    ),

    ruby_block_output_noescape: $ => seq(
      optional($._space),
      '==',
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
      optional($._space),
      optional($._element_rest_text),
      optional($._text_nested)
    ),

    embedded_engine_name: $ => choice(
      // These keywords are not supported as tag names for now
      token(prec(1, 'markdown')),
      token(prec(1, 'textile')),
      token(prec(1, 'rdoc')),
      token(prec(1, 'coffee')),
      token(prec(1, 'less')),
      token(prec(1, 'sass')),
      token(prec(1, 'scss')),
      token(prec(1, 'javascript')),
      token(prec(1, 'css')),
      token(prec(1, 'ruby'))
    ),

    verbatim_text: $ => seq(
      choice('|', $.verbatim_text_modifier_trailing_whitespace),
      optional($._text)
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

    _space_or_newline: $ => /[ \t\n]+/,
    _space: $ => token(prec(-1, /[ \t]+/))
  },

  conflicts: $ => [
    [$._attrs_plain],
  ],

  extras: $ => [],

  supertypes: $ => [
    $._line,
    $._ruby_block,
    $._attr_shortcut,
    $._output_modifier
  ]
});
