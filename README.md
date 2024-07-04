# tree-sitter-slim

[Slim](http://slim-lang.com/) template grammar for
[tree-sitter](https://tree-sitter.github.io/).

Alpha-stage, parses most cases, but syntax tree structure isn't
stabilized yet, prone to changes.

## Limitations

Slim is [highly
configurable](https://rubydoc.info/gems/slim/frames#configuring-slim)
and some of configuration parameters change syntax. Tree-sitter does
not support dynamically generated syntax, so this grammar is not
configurable. It should work for default settings and some subset of
customized settings.

- `tabsize`: always 4, should work with other values if you don't mix spaces and tabs in the same file
- `encoding`: always utf-8 (some unicode features don't work yet)
- `shortcut`: some of shortcuts work `TODO: describe`
- `code_attr_delims`: only default is supported, `() [] {}`
- `attr_list_delims`: only default is supported, `() [] {}`
- `enable_engines`: TODO
- `disable_engines`: TODO
- `splat_prefix`: only default is supported, `*`

## Grammar references

- [Slim parser source code](https://github.com/slim-template/slim/blob/main/lib/slim/parser.rb)
- [Slim docs](https://rubydoc.info/gems/slim/frames)
