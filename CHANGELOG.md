# Changelog

## [0.1.1] - 2026-01-24

- Fixed crash when some line has indentation that is less than first
  line indentation

## [0.1.0] - 2025-08-10

- Added parsing of string interpolation in attribute values. Now
  `attr_value_quoted` nodes contain `attr_value_content` and
  `attr_value_interpolation` fragments, see
  `test/corpus/interpolation.txt` for examples. (breaking change)

## [0.0.1] - 2025-08-06

Initial tagged version
