; Comments & literals

(comment) @comment

(string) @string

; Modifiers and key constants

(modifier_keyword) @keyword

(key) @constant

(keycode) @constant.builtin

; Operators

[
  "-"
  "+"
  "|"
] @operator

[
  ","
  ":"
  ";"
] @punctuation.delimiter

"->" @operator

[
  "::"
  "<"
] @punctuation.special

"~" @variable.builtin

(wildcard) @variable.builtin

; Modes

(mode) @module.builtin

(mode_decl
  "::" @punctuation.special
  (mode) @module)

(mode_decl
  "@" @attribute)

; Macros / directives

(load ".load" @keyword.directive)
(shell ".shell" @keyword.directive)
(blacklist ".blacklist" @keyword.directive)
(define ".define" @keyword.directive)

(define
  name: (identifier) @function)

; @-references

(command_ref
  name: (at_ident) @function.call)

(group_ref
  (at_ident) @type)

; Identifiers in argument lists default to constants

(command_ref
  (identifier) @constant)
