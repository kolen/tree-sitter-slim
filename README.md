# tree-sitter-slim

[Slim](http://slim-lang.com/) template grammar for
[tree-sitter](https://tree-sitter.github.io/).

There's no description of slim grammar. What should be source of
truth? Either
[implementation](https://github.com/slim-template/slim/blob/master/lib/slim/parser.rb)
(too hard to understand at this stage of development, may contain
bugs) or [docs](https://rdoc.info/gems/slim/frames) (not too strict,
also lots of features). So this parser is mostly based on guesswork
and personal conception of "true Slim grammar".

Slim grammar is complex, context-specific and very configurable, so
it's probably not practical to cover all cases (even with default
configuration). The goal is to make it suitable for syntax highligting
and code folding (for basic subset of Slim), not to make it suitable
for alternative slim compiler implementation.

**Completeness**: just started, nothing works.
