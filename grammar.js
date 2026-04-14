const MODIFIERS = [
  "fn",

  "cmd",
  "lcmd",
  "rcmd",

  "shift",
  "lshift",
  "rshift",

  "alt",
  "lalt",
  "ralt",

  "ctrl",
  "lctrl",
  "rctrl",

  "hyper", // (cmd + shift + alt + ctrl)

  "meh", // (shift + alt + ctrl)
];

const KEYCODES = [
  "return",    // kVK_Return
  "tab",       // kVK_Tab
  "space",     // kVK_Space
  "backspace", // kVK_Delete
  "escape",    // kVK_Escape
  "backtick",  // skhd.zig

  // The following keys can not be used with the fn-modifier:

  "delete",   // kVK_ForwardDelete
  "home",     // kVK_Home
  "end",      // kVK_End
  "pageup",   // kVK_PageUp
  "pagedown", // kVK_PageDown
  "insert",   // kVK_Help
  "left",     // kVK_LeftArrow
  "right",    // kVK_RightArrow
  "up",       // kVK_UpArrow
  "down",     // kVK_DownArrow
  "f1",  "f2",  "f3",  "f4",  "f5",
  "f6",  "f7",  "f8",  "f9",  "f10",
  "f11", "f12", "f13", "f14", "f15",
  "f16", "f17", "f18", "f19", "f20",

  "sound_up",          // NX_KEYTYPE_SOUND_UP
  "sound_down",        // NX_KEYTYPE_SOUND_DOWN
  "mute",              // NX_KEYTYPE_MUTE
  "play",              // NX_KEYTYPE_PLAY
  "previous",          // NX_KEYTYPE_PREVIOUS
  "next",              // NX_KEYTYPE_NEXT
  "rewind",            // NX_KEYTYPE_REWIND
  "fast",              // NX_KEYTYPE_FAST
  "brightness_up",     // NX_KEYTYPE_BRIGHTNESS_UP
  "brightness_down",   // NX_KEYTYPE_BRIGHTNESS_DOWN
  "illumination_up",   // NX_KEYTYPE_ILLUMINATION_UP
  "illumination_down", // NX_KEYTYPE_ILLUMINATION_DOWN
];

module.exports = grammar({
  name: "skhdrc",

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $._macro,
      $.hotkey,
      $.mode_decl,
    ),

    comment: $ => /#[^\n]*/,

    _macro: $ => choice(
      $.load,
      $.shell,
      $.blacklist,
      $.define,
    ),

    load: $ => seq(".load", field("path", $.string)),

    shell: $ => seq(".shell", field("path", $.string)),

    blacklist: $ => seq(
      ".blacklist",
      "[",
      repeat(field("item", $.string)),
      "]",
    ),

    define: $ => choice(
      seq(
        ".define",
        field("name", $.identifier),
        ":",
        field("template", $.command),
      ),
      seq(
        ".define",
        field("name", $.identifier),
        "[",
        repeat(field("item", $.string)),
        "]",
      ),
    ),

    hotkey: $ => choice(
      seq($.modes, "<", $.action),
      $.action,
    ),

    modes: $ => seq(
      $.mode,
      repeat(seq(",", $.mode)),
    ),

    mode: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    action: $ => choice(
      seq($.keysym, "[", $.proc_map_lst, "]"),
      seq($.keysym, "->", "[", $.proc_map_lst, "]"),
      seq($.keysym, ":", $._command_or_ref),
      seq($.keysym, "->", ":", $._command_or_ref),
      seq($.keysym, ";", $.mode, optional(seq(":", $._command_or_ref))),
      seq($.keysym, "->", ";", $.mode, optional(seq(":", $._command_or_ref))),
      seq($.keysym, "|", $.keysym),
      seq($.keysym, "->", "|", $.keysym),
      seq($.keysym, "~"),
      seq($.keysym, "->", "~"),
    ),

    _command_or_ref: $ => choice(
      $.command_ref,
      $.command,
    ),

    keysym: $ => choice(
      seq($.mod, "-", $.key),
      $.key,
    ),

    mod: $ => prec.right(choice(
      $.modifier_keyword,
      seq($.mod, "+", $.mod),
    )),

    key: $ => choice(
      $.literal,
      $.keycode,
    ),

    literal: $ => /[A-Za-z0-9]/,

    keycode: $ => choice(
      /0x[0-9A-Fa-f]{1,3}/,
      ...KEYCODES,
    ),

    proc_map_lst: $ => repeat1($.proc_map),

    proc_map: $ => choice(
      seq($._proc_target, ":", $._command_or_ref),
      seq($._proc_target, "~"),
    ),

    _proc_target: $ => choice(
      $.string,
      $.group_ref,
      $.wildcard,
    ),

    wildcard: $ => "*",

    at_ident: $ => token(prec(2, /@[A-Za-z_][A-Za-z0-9_]*/)),

    group_ref: $ => $.at_ident,

    command_ref: $ => seq(
      field("name", $.at_ident),
      optional(seq(
        "(",
        optional(seq(
          $._ref_arg,
          repeat(seq(",", $._ref_arg)),
        )),
        ")",
      )),
    ),

    _ref_arg: $ => choice($.string, $.identifier, /[0-9]+/),

    string: $ => token(seq("\"", /[^"]*/, "\"")),

    command: $ => prec(1, seq(
      repeat(seq(/[^\n]*\\/, /\r?\n/)),
      /[^\n@][^\n]*/,
    )),

    mode_decl: $ => choice(
      seq("::", $.mode, "@", ":", $._command_or_ref),
      seq("::", $.mode, ":", $._command_or_ref),
      seq("::", $.mode, "@"),
      seq("::", $.mode),
    ),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    modifier_keyword: $ => choice(...MODIFIERS),
  },

});
