#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_DOTload = 2,
  anon_sym_DOTshell = 3,
  anon_sym_DOTblacklist = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DOTdefine = 7,
  anon_sym_COLON = 8,
  anon_sym_LT = 9,
  anon_sym_COMMA = 10,
  aux_sym_mode_token1 = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_SEMI = 13,
  anon_sym_PIPE = 14,
  anon_sym_TILDE = 15,
  anon_sym_DASH = 16,
  anon_sym_PLUS = 17,
  sym_literal = 18,
  aux_sym_keycode_token1 = 19,
  anon_sym_return = 20,
  anon_sym_tab = 21,
  anon_sym_space = 22,
  anon_sym_backspace = 23,
  anon_sym_escape = 24,
  anon_sym_backtick = 25,
  anon_sym_delete = 26,
  anon_sym_home = 27,
  anon_sym_end = 28,
  anon_sym_pageup = 29,
  anon_sym_pagedown = 30,
  anon_sym_insert = 31,
  anon_sym_left = 32,
  anon_sym_right = 33,
  anon_sym_up = 34,
  anon_sym_down = 35,
  anon_sym_f1 = 36,
  anon_sym_f2 = 37,
  anon_sym_f3 = 38,
  anon_sym_f4 = 39,
  anon_sym_f5 = 40,
  anon_sym_f6 = 41,
  anon_sym_f7 = 42,
  anon_sym_f8 = 43,
  anon_sym_f9 = 44,
  anon_sym_f10 = 45,
  anon_sym_f11 = 46,
  anon_sym_f12 = 47,
  anon_sym_f13 = 48,
  anon_sym_f14 = 49,
  anon_sym_f15 = 50,
  anon_sym_f16 = 51,
  anon_sym_f17 = 52,
  anon_sym_f18 = 53,
  anon_sym_f19 = 54,
  anon_sym_f20 = 55,
  anon_sym_sound_up = 56,
  anon_sym_sound_down = 57,
  anon_sym_mute = 58,
  anon_sym_play = 59,
  anon_sym_previous = 60,
  anon_sym_next = 61,
  anon_sym_rewind = 62,
  anon_sym_fast = 63,
  anon_sym_brightness_up = 64,
  anon_sym_brightness_down = 65,
  anon_sym_illumination_up = 66,
  anon_sym_illumination_down = 67,
  sym_wildcard = 68,
  sym_at_ident = 69,
  anon_sym_LPAREN = 70,
  anon_sym_RPAREN = 71,
  aux_sym__ref_arg_token1 = 72,
  sym_string = 73,
  aux_sym_command_token1 = 74,
  aux_sym_command_token2 = 75,
  aux_sym_command_token3 = 76,
  anon_sym_COLON_COLON = 77,
  anon_sym_AT = 78,
  anon_sym_fn = 79,
  anon_sym_cmd = 80,
  anon_sym_lcmd = 81,
  anon_sym_rcmd = 82,
  anon_sym_shift = 83,
  anon_sym_lshift = 84,
  anon_sym_rshift = 85,
  anon_sym_alt = 86,
  anon_sym_lalt = 87,
  anon_sym_ralt = 88,
  anon_sym_ctrl = 89,
  anon_sym_lctrl = 90,
  anon_sym_rctrl = 91,
  anon_sym_hyper = 92,
  anon_sym_meh = 93,
  sym_source_file = 94,
  sym__statement = 95,
  sym__macro = 96,
  sym_load = 97,
  sym_shell = 98,
  sym_blacklist = 99,
  sym_define = 100,
  sym_hotkey = 101,
  sym_modes = 102,
  sym_mode = 103,
  sym_action = 104,
  sym__command_or_ref = 105,
  sym_keysym = 106,
  sym_mod = 107,
  sym_key = 108,
  sym_keycode = 109,
  sym_proc_map_lst = 110,
  sym_proc_map = 111,
  sym__proc_target = 112,
  sym_group_ref = 113,
  sym_command_ref = 114,
  sym__ref_arg = 115,
  sym_command = 116,
  sym_mode_decl = 117,
  sym_identifier = 118,
  sym_modifier_keyword = 119,
  aux_sym_source_file_repeat1 = 120,
  aux_sym_blacklist_repeat1 = 121,
  aux_sym_modes_repeat1 = 122,
  aux_sym_proc_map_lst_repeat1 = 123,
  aux_sym_command_ref_repeat1 = 124,
  aux_sym_command_repeat1 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DOTload] = ".load",
  [anon_sym_DOTshell] = ".shell",
  [anon_sym_DOTblacklist] = ".blacklist",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOTdefine] = ".define",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [aux_sym_mode_token1] = "mode_token1",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_SEMI] = ";",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [sym_literal] = "literal",
  [aux_sym_keycode_token1] = "keycode_token1",
  [anon_sym_return] = "return",
  [anon_sym_tab] = "tab",
  [anon_sym_space] = "space",
  [anon_sym_backspace] = "backspace",
  [anon_sym_escape] = "escape",
  [anon_sym_backtick] = "backtick",
  [anon_sym_delete] = "delete",
  [anon_sym_home] = "home",
  [anon_sym_end] = "end",
  [anon_sym_pageup] = "pageup",
  [anon_sym_pagedown] = "pagedown",
  [anon_sym_insert] = "insert",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_f1] = "f1",
  [anon_sym_f2] = "f2",
  [anon_sym_f3] = "f3",
  [anon_sym_f4] = "f4",
  [anon_sym_f5] = "f5",
  [anon_sym_f6] = "f6",
  [anon_sym_f7] = "f7",
  [anon_sym_f8] = "f8",
  [anon_sym_f9] = "f9",
  [anon_sym_f10] = "f10",
  [anon_sym_f11] = "f11",
  [anon_sym_f12] = "f12",
  [anon_sym_f13] = "f13",
  [anon_sym_f14] = "f14",
  [anon_sym_f15] = "f15",
  [anon_sym_f16] = "f16",
  [anon_sym_f17] = "f17",
  [anon_sym_f18] = "f18",
  [anon_sym_f19] = "f19",
  [anon_sym_f20] = "f20",
  [anon_sym_sound_up] = "sound_up",
  [anon_sym_sound_down] = "sound_down",
  [anon_sym_mute] = "mute",
  [anon_sym_play] = "play",
  [anon_sym_previous] = "previous",
  [anon_sym_next] = "next",
  [anon_sym_rewind] = "rewind",
  [anon_sym_fast] = "fast",
  [anon_sym_brightness_up] = "brightness_up",
  [anon_sym_brightness_down] = "brightness_down",
  [anon_sym_illumination_up] = "illumination_up",
  [anon_sym_illumination_down] = "illumination_down",
  [sym_wildcard] = "wildcard",
  [sym_at_ident] = "at_ident",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym__ref_arg_token1] = "_ref_arg_token1",
  [sym_string] = "string",
  [aux_sym_command_token1] = "command_token1",
  [aux_sym_command_token2] = "command_token2",
  [aux_sym_command_token3] = "command_token3",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_AT] = "@",
  [anon_sym_fn] = "fn",
  [anon_sym_cmd] = "cmd",
  [anon_sym_lcmd] = "lcmd",
  [anon_sym_rcmd] = "rcmd",
  [anon_sym_shift] = "shift",
  [anon_sym_lshift] = "lshift",
  [anon_sym_rshift] = "rshift",
  [anon_sym_alt] = "alt",
  [anon_sym_lalt] = "lalt",
  [anon_sym_ralt] = "ralt",
  [anon_sym_ctrl] = "ctrl",
  [anon_sym_lctrl] = "lctrl",
  [anon_sym_rctrl] = "rctrl",
  [anon_sym_hyper] = "hyper",
  [anon_sym_meh] = "meh",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__macro] = "_macro",
  [sym_load] = "load",
  [sym_shell] = "shell",
  [sym_blacklist] = "blacklist",
  [sym_define] = "define",
  [sym_hotkey] = "hotkey",
  [sym_modes] = "modes",
  [sym_mode] = "mode",
  [sym_action] = "action",
  [sym__command_or_ref] = "_command_or_ref",
  [sym_keysym] = "keysym",
  [sym_mod] = "mod",
  [sym_key] = "key",
  [sym_keycode] = "keycode",
  [sym_proc_map_lst] = "proc_map_lst",
  [sym_proc_map] = "proc_map",
  [sym__proc_target] = "_proc_target",
  [sym_group_ref] = "group_ref",
  [sym_command_ref] = "command_ref",
  [sym__ref_arg] = "_ref_arg",
  [sym_command] = "command",
  [sym_mode_decl] = "mode_decl",
  [sym_identifier] = "identifier",
  [sym_modifier_keyword] = "modifier_keyword",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_blacklist_repeat1] = "blacklist_repeat1",
  [aux_sym_modes_repeat1] = "modes_repeat1",
  [aux_sym_proc_map_lst_repeat1] = "proc_map_lst_repeat1",
  [aux_sym_command_ref_repeat1] = "command_ref_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DOTload] = anon_sym_DOTload,
  [anon_sym_DOTshell] = anon_sym_DOTshell,
  [anon_sym_DOTblacklist] = anon_sym_DOTblacklist,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOTdefine] = anon_sym_DOTdefine,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mode_token1] = aux_sym_mode_token1,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_literal] = sym_literal,
  [aux_sym_keycode_token1] = aux_sym_keycode_token1,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_tab] = anon_sym_tab,
  [anon_sym_space] = anon_sym_space,
  [anon_sym_backspace] = anon_sym_backspace,
  [anon_sym_escape] = anon_sym_escape,
  [anon_sym_backtick] = anon_sym_backtick,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_home] = anon_sym_home,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_pageup] = anon_sym_pageup,
  [anon_sym_pagedown] = anon_sym_pagedown,
  [anon_sym_insert] = anon_sym_insert,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_f1] = anon_sym_f1,
  [anon_sym_f2] = anon_sym_f2,
  [anon_sym_f3] = anon_sym_f3,
  [anon_sym_f4] = anon_sym_f4,
  [anon_sym_f5] = anon_sym_f5,
  [anon_sym_f6] = anon_sym_f6,
  [anon_sym_f7] = anon_sym_f7,
  [anon_sym_f8] = anon_sym_f8,
  [anon_sym_f9] = anon_sym_f9,
  [anon_sym_f10] = anon_sym_f10,
  [anon_sym_f11] = anon_sym_f11,
  [anon_sym_f12] = anon_sym_f12,
  [anon_sym_f13] = anon_sym_f13,
  [anon_sym_f14] = anon_sym_f14,
  [anon_sym_f15] = anon_sym_f15,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f17] = anon_sym_f17,
  [anon_sym_f18] = anon_sym_f18,
  [anon_sym_f19] = anon_sym_f19,
  [anon_sym_f20] = anon_sym_f20,
  [anon_sym_sound_up] = anon_sym_sound_up,
  [anon_sym_sound_down] = anon_sym_sound_down,
  [anon_sym_mute] = anon_sym_mute,
  [anon_sym_play] = anon_sym_play,
  [anon_sym_previous] = anon_sym_previous,
  [anon_sym_next] = anon_sym_next,
  [anon_sym_rewind] = anon_sym_rewind,
  [anon_sym_fast] = anon_sym_fast,
  [anon_sym_brightness_up] = anon_sym_brightness_up,
  [anon_sym_brightness_down] = anon_sym_brightness_down,
  [anon_sym_illumination_up] = anon_sym_illumination_up,
  [anon_sym_illumination_down] = anon_sym_illumination_down,
  [sym_wildcard] = sym_wildcard,
  [sym_at_ident] = sym_at_ident,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__ref_arg_token1] = aux_sym__ref_arg_token1,
  [sym_string] = sym_string,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [aux_sym_command_token2] = aux_sym_command_token2,
  [aux_sym_command_token3] = aux_sym_command_token3,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_lcmd] = anon_sym_lcmd,
  [anon_sym_rcmd] = anon_sym_rcmd,
  [anon_sym_shift] = anon_sym_shift,
  [anon_sym_lshift] = anon_sym_lshift,
  [anon_sym_rshift] = anon_sym_rshift,
  [anon_sym_alt] = anon_sym_alt,
  [anon_sym_lalt] = anon_sym_lalt,
  [anon_sym_ralt] = anon_sym_ralt,
  [anon_sym_ctrl] = anon_sym_ctrl,
  [anon_sym_lctrl] = anon_sym_lctrl,
  [anon_sym_rctrl] = anon_sym_rctrl,
  [anon_sym_hyper] = anon_sym_hyper,
  [anon_sym_meh] = anon_sym_meh,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__macro] = sym__macro,
  [sym_load] = sym_load,
  [sym_shell] = sym_shell,
  [sym_blacklist] = sym_blacklist,
  [sym_define] = sym_define,
  [sym_hotkey] = sym_hotkey,
  [sym_modes] = sym_modes,
  [sym_mode] = sym_mode,
  [sym_action] = sym_action,
  [sym__command_or_ref] = sym__command_or_ref,
  [sym_keysym] = sym_keysym,
  [sym_mod] = sym_mod,
  [sym_key] = sym_key,
  [sym_keycode] = sym_keycode,
  [sym_proc_map_lst] = sym_proc_map_lst,
  [sym_proc_map] = sym_proc_map,
  [sym__proc_target] = sym__proc_target,
  [sym_group_ref] = sym_group_ref,
  [sym_command_ref] = sym_command_ref,
  [sym__ref_arg] = sym__ref_arg,
  [sym_command] = sym_command,
  [sym_mode_decl] = sym_mode_decl,
  [sym_identifier] = sym_identifier,
  [sym_modifier_keyword] = sym_modifier_keyword,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_blacklist_repeat1] = aux_sym_blacklist_repeat1,
  [aux_sym_modes_repeat1] = aux_sym_modes_repeat1,
  [aux_sym_proc_map_lst_repeat1] = aux_sym_proc_map_lst_repeat1,
  [aux_sym_command_ref_repeat1] = aux_sym_command_ref_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTshell] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTblacklist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_keycode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_backtick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_home] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pageup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pagedown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sound_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sound_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_play] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_previous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightness_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightness_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illumination_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_illumination_down] = {
    .visible = true,
    .named = false,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_at_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ref_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lcmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rcmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lalt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ralt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rctrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meh] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__macro] = {
    .visible = false,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_shell] = {
    .visible = true,
    .named = true,
  },
  [sym_blacklist] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_hotkey] = {
    .visible = true,
    .named = true,
  },
  [sym_modes] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__command_or_ref] = {
    .visible = false,
    .named = true,
  },
  [sym_keysym] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_keycode] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_map_lst] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_map] = {
    .visible = true,
    .named = true,
  },
  [sym__proc_target] = {
    .visible = false,
    .named = true,
  },
  [sym_group_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_command_ref] = {
    .visible = true,
    .named = true,
  },
  [sym__ref_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blacklist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_map_lst_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_ref_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_item = 1,
  field_name = 2,
  field_path = 3,
  field_template = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_item] = "item",
  [field_name] = "name",
  [field_path] = "path",
  [field_template] = "template",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_item, 0},
  [2] =
    {field_name, 0},
  [3] =
    {field_item, 2, .inherited = true},
  [4] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [6] =
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_template, 3},
  [9] =
    {field_item, 3, .inherited = true},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 33,
  [54] = 26,
  [55] = 31,
  [56] = 56,
  [57] = 30,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 79,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(170);
      ADVANCE_MAP(
        '"', 5,
        '#', 172,
        '(', 466,
        ')', 467,
        '*', 464,
        '+', 340,
        ',', 182,
        '-', 339,
        '.', 22,
        '0', 364,
        ':', 180,
        ';', 335,
        '<', 181,
        '@', 478,
        '[', 176,
        ']', 177,
        '_', 333,
        'a', 252,
        'b', 187,
        'c', 261,
        'd', 222,
        'e', 272,
        'f', 183,
        'h', 278,
        'i', 257,
        'l', 193,
        'm', 224,
        'n', 213,
        'p', 188,
        'r', 196,
        's', 236,
        't', 189,
        'u', 285,
        '|', 336,
        '~', 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(470);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(472);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(470);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == ')') ADVANCE(467);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '#', 172,
        ')', 467,
        ',', 182,
        '-', 9,
        '0', 364,
        ':', 179,
        ';', 335,
        '[', 176,
        'a', 355,
        'b', 348,
        'c', 357,
        'd', 353,
        'e', 358,
        'f', 343,
        'h', 360,
        'i', 356,
        'l', 346,
        'm', 352,
        'n', 349,
        'p', 344,
        'r', 347,
        's', 354,
        't', 345,
        'u', 362,
        '|', 336,
        '~', 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '#', 172,
        '0', 364,
        'b', 348,
        'd', 353,
        'e', 358,
        'f', 342,
        'h', 359,
        'i', 356,
        'l', 351,
        'm', 363,
        'n', 349,
        'p', 344,
        'r', 350,
        's', 361,
        't', 345,
        'u', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(477);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(334);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(370);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(507);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(133);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(378);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 159:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 160:
      if (lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == 'w') ADVANCE(102);
      END_STATE();
    case 163:
      if (lookahead == 'w') ADVANCE(103);
      END_STATE();
    case 164:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 165:
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(446);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 168:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 169:
      if (eof) ADVANCE(170);
      ADVANCE_MAP(
        '"', 5,
        '#', 172,
        '(', 466,
        '*', 464,
        '+', 340,
        '-', 338,
        '.', 22,
        '0', 364,
        ':', 8,
        '@', 168,
        ']', 177,
        '_', 333,
        'a', 252,
        'b', 187,
        'c', 261,
        'd', 222,
        'e', 272,
        'f', 183,
        'h', 278,
        'i', 257,
        'l', 193,
        'm', 224,
        'n', 213,
        'p', 188,
        'r', 196,
        's', 236,
        't', 189,
        'u', 285,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(169);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTload);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTshell);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTblacklist);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTdefine);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(477);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      ADVANCE_MAP(
        '1', 400,
        '2', 402,
        '3', 405,
        '4', 407,
        '5', 409,
        '6', 411,
        '7', 413,
        '8', 415,
        '9', 417,
        'a', 301,
        'n', 480,
      );
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == '_') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == '_') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == '_') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'b') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'c') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'c') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'c') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'c') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'c') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'u') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'f') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'f') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'f') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'f') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'g') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'g') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'g') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'h') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'h') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'h') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'h') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'h') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'k') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'k') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'm') ADVANCE(205);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'm') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'm') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'y') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'o') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'p') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'r') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 's') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 's') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 's') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == 'w') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'u') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'v') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'w') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'w') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'w') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'w') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'w') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'x') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (lookahead == 'y') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_mode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(334);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_literal);
      ADVANCE_MAP(
        '1', 401,
        '2', 403,
        '3', 404,
        '4', 406,
        '5', 408,
        '6', 410,
        '7', 412,
        '8', 414,
        '9', 416,
        'a', 134,
      );
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_literal);
      ADVANCE_MAP(
        '1', 401,
        '2', 403,
        '3', 404,
        '4', 406,
        '5', 408,
        '6', 410,
        '7', 412,
        '8', 414,
        '9', 416,
        'a', 134,
        'n', 479,
      );
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'p') ADVANCE(396);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'x') ADVANCE(167);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_tab);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_tab);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_space);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_backspace);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_backspace);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_escape);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_escape);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_backtick);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_backtick);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_home);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_home);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_pageup);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_pageup);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_pagedown);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_pagedown);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_insert);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_insert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_f1);
      ADVANCE_MAP(
        '0', 419,
        '1', 421,
        '2', 423,
        '3', 425,
        '4', 427,
        '5', 429,
        '6', 431,
        '7', 433,
        '8', 435,
        '9', 437,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_f1);
      ADVANCE_MAP(
        '0', 418,
        '1', 420,
        '2', 422,
        '3', 424,
        '4', 426,
        '5', 428,
        '6', 430,
        '7', 432,
        '8', 434,
        '9', 436,
      );
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_f2);
      if (lookahead == '0') ADVANCE(439);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_f2);
      if (lookahead == '0') ADVANCE(438);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_f3);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_f3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_f4);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_f4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_f5);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_f5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_f6);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_f6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_f7);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_f7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_f8);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_f8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_f9);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_f9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_f10);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_f10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_f11);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_f11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_f12);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_f12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_f13);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_f13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_f14);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_f14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_f15);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_f15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_f17);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_f17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_f18);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_f18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_f19);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_f19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_f20);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_f20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_sound_up);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_sound_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_sound_down);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_sound_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_mute);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_mute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_play);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_play);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_previous);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_previous);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_next);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_next);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_rewind);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_rewind);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_fast);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_fast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_brightness_up);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_brightness_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_brightness_down);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_brightness_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_illumination_up);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_illumination_up);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_illumination_down);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_illumination_down);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__ref_arg_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\\') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(476);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_command_token2);
      if (lookahead == '\n') ADVANCE(472);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_command_token3);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '@') ADVANCE(476);
      if (lookahead == '\\') ADVANCE(470);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_command_token3);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '@') ADVANCE(475);
      if (lookahead == '\\') ADVANCE(470);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_command_token3);
      if (lookahead == '\\') ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_command_token3);
      if (lookahead == '\\') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_lcmd);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_lcmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_rcmd);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_rcmd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_shift);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_rshift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_alt);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_alt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_lalt);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_lalt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ralt);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ralt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_ctrl);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_lctrl);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_lctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_rctrl);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_rctrl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_hyper);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_hyper);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_meh);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_meh);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 169},
  [8] = {.lex_state = 169},
  [9] = {.lex_state = 169},
  [10] = {.lex_state = 169},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 169},
  [42] = {.lex_state = 169},
  [43] = {.lex_state = 169},
  [44] = {.lex_state = 169},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 169},
  [63] = {.lex_state = 169},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 169},
  [79] = {.lex_state = 169},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 169},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 169},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 169},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(1),
    [anon_sym_DOTshell] = ACTIONS(1),
    [anon_sym_DOTblacklist] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOTdefine] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_mode_token1] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_tab] = ACTIONS(1),
    [anon_sym_space] = ACTIONS(1),
    [anon_sym_backspace] = ACTIONS(1),
    [anon_sym_escape] = ACTIONS(1),
    [anon_sym_backtick] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_home] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_pageup] = ACTIONS(1),
    [anon_sym_pagedown] = ACTIONS(1),
    [anon_sym_insert] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_f1] = ACTIONS(1),
    [anon_sym_f2] = ACTIONS(1),
    [anon_sym_f3] = ACTIONS(1),
    [anon_sym_f4] = ACTIONS(1),
    [anon_sym_f5] = ACTIONS(1),
    [anon_sym_f6] = ACTIONS(1),
    [anon_sym_f7] = ACTIONS(1),
    [anon_sym_f8] = ACTIONS(1),
    [anon_sym_f9] = ACTIONS(1),
    [anon_sym_f10] = ACTIONS(1),
    [anon_sym_f11] = ACTIONS(1),
    [anon_sym_f12] = ACTIONS(1),
    [anon_sym_f13] = ACTIONS(1),
    [anon_sym_f14] = ACTIONS(1),
    [anon_sym_f15] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f17] = ACTIONS(1),
    [anon_sym_f18] = ACTIONS(1),
    [anon_sym_f19] = ACTIONS(1),
    [anon_sym_f20] = ACTIONS(1),
    [anon_sym_sound_up] = ACTIONS(1),
    [anon_sym_sound_down] = ACTIONS(1),
    [anon_sym_mute] = ACTIONS(1),
    [anon_sym_play] = ACTIONS(1),
    [anon_sym_previous] = ACTIONS(1),
    [anon_sym_next] = ACTIONS(1),
    [anon_sym_rewind] = ACTIONS(1),
    [anon_sym_fast] = ACTIONS(1),
    [anon_sym_brightness_up] = ACTIONS(1),
    [anon_sym_brightness_down] = ACTIONS(1),
    [anon_sym_illumination_up] = ACTIONS(1),
    [anon_sym_illumination_down] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_lcmd] = ACTIONS(1),
    [anon_sym_rcmd] = ACTIONS(1),
    [anon_sym_shift] = ACTIONS(1),
    [anon_sym_lshift] = ACTIONS(1),
    [anon_sym_rshift] = ACTIONS(1),
    [anon_sym_alt] = ACTIONS(1),
    [anon_sym_lalt] = ACTIONS(1),
    [anon_sym_ralt] = ACTIONS(1),
    [anon_sym_ctrl] = ACTIONS(1),
    [anon_sym_lctrl] = ACTIONS(1),
    [anon_sym_rctrl] = ACTIONS(1),
    [anon_sym_hyper] = ACTIONS(1),
    [anon_sym_meh] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym__statement] = STATE(3),
    [sym__macro] = STATE(3),
    [sym_load] = STATE(3),
    [sym_shell] = STATE(3),
    [sym_blacklist] = STATE(3),
    [sym_define] = STATE(3),
    [sym_hotkey] = STATE(3),
    [sym_modes] = STATE(97),
    [sym_mode] = STATE(73),
    [sym_action] = STATE(19),
    [sym_keysym] = STATE(56),
    [sym_mod] = STATE(83),
    [sym_key] = STATE(57),
    [sym_keycode] = STATE(54),
    [sym_mode_decl] = STATE(3),
    [sym_modifier_keyword] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(7),
    [anon_sym_DOTshell] = ACTIONS(9),
    [anon_sym_DOTblacklist] = ACTIONS(11),
    [anon_sym_DOTdefine] = ACTIONS(13),
    [aux_sym_mode_token1] = ACTIONS(15),
    [sym_literal] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_tab] = ACTIONS(21),
    [anon_sym_space] = ACTIONS(21),
    [anon_sym_backspace] = ACTIONS(21),
    [anon_sym_escape] = ACTIONS(21),
    [anon_sym_backtick] = ACTIONS(21),
    [anon_sym_delete] = ACTIONS(21),
    [anon_sym_home] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_pageup] = ACTIONS(21),
    [anon_sym_pagedown] = ACTIONS(21),
    [anon_sym_insert] = ACTIONS(21),
    [anon_sym_left] = ACTIONS(21),
    [anon_sym_right] = ACTIONS(21),
    [anon_sym_up] = ACTIONS(21),
    [anon_sym_down] = ACTIONS(21),
    [anon_sym_f1] = ACTIONS(21),
    [anon_sym_f2] = ACTIONS(21),
    [anon_sym_f3] = ACTIONS(21),
    [anon_sym_f4] = ACTIONS(21),
    [anon_sym_f5] = ACTIONS(21),
    [anon_sym_f6] = ACTIONS(21),
    [anon_sym_f7] = ACTIONS(21),
    [anon_sym_f8] = ACTIONS(21),
    [anon_sym_f9] = ACTIONS(21),
    [anon_sym_f10] = ACTIONS(21),
    [anon_sym_f11] = ACTIONS(21),
    [anon_sym_f12] = ACTIONS(21),
    [anon_sym_f13] = ACTIONS(21),
    [anon_sym_f14] = ACTIONS(21),
    [anon_sym_f15] = ACTIONS(21),
    [anon_sym_f16] = ACTIONS(21),
    [anon_sym_f17] = ACTIONS(21),
    [anon_sym_f18] = ACTIONS(21),
    [anon_sym_f19] = ACTIONS(21),
    [anon_sym_f20] = ACTIONS(21),
    [anon_sym_sound_up] = ACTIONS(21),
    [anon_sym_sound_down] = ACTIONS(21),
    [anon_sym_mute] = ACTIONS(21),
    [anon_sym_play] = ACTIONS(21),
    [anon_sym_previous] = ACTIONS(21),
    [anon_sym_next] = ACTIONS(21),
    [anon_sym_rewind] = ACTIONS(21),
    [anon_sym_fast] = ACTIONS(21),
    [anon_sym_brightness_up] = ACTIONS(21),
    [anon_sym_brightness_down] = ACTIONS(21),
    [anon_sym_illumination_up] = ACTIONS(21),
    [anon_sym_illumination_down] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_cmd] = ACTIONS(25),
    [anon_sym_lcmd] = ACTIONS(25),
    [anon_sym_rcmd] = ACTIONS(25),
    [anon_sym_shift] = ACTIONS(25),
    [anon_sym_lshift] = ACTIONS(25),
    [anon_sym_rshift] = ACTIONS(25),
    [anon_sym_alt] = ACTIONS(25),
    [anon_sym_lalt] = ACTIONS(25),
    [anon_sym_ralt] = ACTIONS(25),
    [anon_sym_ctrl] = ACTIONS(25),
    [anon_sym_lctrl] = ACTIONS(25),
    [anon_sym_rctrl] = ACTIONS(25),
    [anon_sym_hyper] = ACTIONS(25),
    [anon_sym_meh] = ACTIONS(25),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__macro] = STATE(2),
    [sym_load] = STATE(2),
    [sym_shell] = STATE(2),
    [sym_blacklist] = STATE(2),
    [sym_define] = STATE(2),
    [sym_hotkey] = STATE(2),
    [sym_modes] = STATE(97),
    [sym_mode] = STATE(73),
    [sym_action] = STATE(19),
    [sym_keysym] = STATE(56),
    [sym_mod] = STATE(83),
    [sym_key] = STATE(57),
    [sym_keycode] = STATE(54),
    [sym_mode_decl] = STATE(2),
    [sym_modifier_keyword] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(29),
    [anon_sym_DOTshell] = ACTIONS(32),
    [anon_sym_DOTblacklist] = ACTIONS(35),
    [anon_sym_DOTdefine] = ACTIONS(38),
    [aux_sym_mode_token1] = ACTIONS(41),
    [sym_literal] = ACTIONS(44),
    [aux_sym_keycode_token1] = ACTIONS(47),
    [anon_sym_return] = ACTIONS(50),
    [anon_sym_tab] = ACTIONS(50),
    [anon_sym_space] = ACTIONS(50),
    [anon_sym_backspace] = ACTIONS(50),
    [anon_sym_escape] = ACTIONS(50),
    [anon_sym_backtick] = ACTIONS(50),
    [anon_sym_delete] = ACTIONS(50),
    [anon_sym_home] = ACTIONS(50),
    [anon_sym_end] = ACTIONS(50),
    [anon_sym_pageup] = ACTIONS(50),
    [anon_sym_pagedown] = ACTIONS(50),
    [anon_sym_insert] = ACTIONS(50),
    [anon_sym_left] = ACTIONS(50),
    [anon_sym_right] = ACTIONS(50),
    [anon_sym_up] = ACTIONS(50),
    [anon_sym_down] = ACTIONS(50),
    [anon_sym_f1] = ACTIONS(50),
    [anon_sym_f2] = ACTIONS(50),
    [anon_sym_f3] = ACTIONS(50),
    [anon_sym_f4] = ACTIONS(50),
    [anon_sym_f5] = ACTIONS(50),
    [anon_sym_f6] = ACTIONS(50),
    [anon_sym_f7] = ACTIONS(50),
    [anon_sym_f8] = ACTIONS(50),
    [anon_sym_f9] = ACTIONS(50),
    [anon_sym_f10] = ACTIONS(50),
    [anon_sym_f11] = ACTIONS(50),
    [anon_sym_f12] = ACTIONS(50),
    [anon_sym_f13] = ACTIONS(50),
    [anon_sym_f14] = ACTIONS(50),
    [anon_sym_f15] = ACTIONS(50),
    [anon_sym_f16] = ACTIONS(50),
    [anon_sym_f17] = ACTIONS(50),
    [anon_sym_f18] = ACTIONS(50),
    [anon_sym_f19] = ACTIONS(50),
    [anon_sym_f20] = ACTIONS(50),
    [anon_sym_sound_up] = ACTIONS(50),
    [anon_sym_sound_down] = ACTIONS(50),
    [anon_sym_mute] = ACTIONS(50),
    [anon_sym_play] = ACTIONS(50),
    [anon_sym_previous] = ACTIONS(50),
    [anon_sym_next] = ACTIONS(50),
    [anon_sym_rewind] = ACTIONS(50),
    [anon_sym_fast] = ACTIONS(50),
    [anon_sym_brightness_up] = ACTIONS(50),
    [anon_sym_brightness_down] = ACTIONS(50),
    [anon_sym_illumination_up] = ACTIONS(50),
    [anon_sym_illumination_down] = ACTIONS(50),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_fn] = ACTIONS(56),
    [anon_sym_cmd] = ACTIONS(56),
    [anon_sym_lcmd] = ACTIONS(56),
    [anon_sym_rcmd] = ACTIONS(56),
    [anon_sym_shift] = ACTIONS(56),
    [anon_sym_lshift] = ACTIONS(56),
    [anon_sym_rshift] = ACTIONS(56),
    [anon_sym_alt] = ACTIONS(56),
    [anon_sym_lalt] = ACTIONS(56),
    [anon_sym_ralt] = ACTIONS(56),
    [anon_sym_ctrl] = ACTIONS(56),
    [anon_sym_lctrl] = ACTIONS(56),
    [anon_sym_rctrl] = ACTIONS(56),
    [anon_sym_hyper] = ACTIONS(56),
    [anon_sym_meh] = ACTIONS(56),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__macro] = STATE(2),
    [sym_load] = STATE(2),
    [sym_shell] = STATE(2),
    [sym_blacklist] = STATE(2),
    [sym_define] = STATE(2),
    [sym_hotkey] = STATE(2),
    [sym_modes] = STATE(97),
    [sym_mode] = STATE(73),
    [sym_action] = STATE(19),
    [sym_keysym] = STATE(56),
    [sym_mod] = STATE(83),
    [sym_key] = STATE(57),
    [sym_keycode] = STATE(54),
    [sym_mode_decl] = STATE(2),
    [sym_modifier_keyword] = STATE(81),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(7),
    [anon_sym_DOTshell] = ACTIONS(9),
    [anon_sym_DOTblacklist] = ACTIONS(11),
    [anon_sym_DOTdefine] = ACTIONS(13),
    [aux_sym_mode_token1] = ACTIONS(15),
    [sym_literal] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_tab] = ACTIONS(21),
    [anon_sym_space] = ACTIONS(21),
    [anon_sym_backspace] = ACTIONS(21),
    [anon_sym_escape] = ACTIONS(21),
    [anon_sym_backtick] = ACTIONS(21),
    [anon_sym_delete] = ACTIONS(21),
    [anon_sym_home] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(21),
    [anon_sym_pageup] = ACTIONS(21),
    [anon_sym_pagedown] = ACTIONS(21),
    [anon_sym_insert] = ACTIONS(21),
    [anon_sym_left] = ACTIONS(21),
    [anon_sym_right] = ACTIONS(21),
    [anon_sym_up] = ACTIONS(21),
    [anon_sym_down] = ACTIONS(21),
    [anon_sym_f1] = ACTIONS(21),
    [anon_sym_f2] = ACTIONS(21),
    [anon_sym_f3] = ACTIONS(21),
    [anon_sym_f4] = ACTIONS(21),
    [anon_sym_f5] = ACTIONS(21),
    [anon_sym_f6] = ACTIONS(21),
    [anon_sym_f7] = ACTIONS(21),
    [anon_sym_f8] = ACTIONS(21),
    [anon_sym_f9] = ACTIONS(21),
    [anon_sym_f10] = ACTIONS(21),
    [anon_sym_f11] = ACTIONS(21),
    [anon_sym_f12] = ACTIONS(21),
    [anon_sym_f13] = ACTIONS(21),
    [anon_sym_f14] = ACTIONS(21),
    [anon_sym_f15] = ACTIONS(21),
    [anon_sym_f16] = ACTIONS(21),
    [anon_sym_f17] = ACTIONS(21),
    [anon_sym_f18] = ACTIONS(21),
    [anon_sym_f19] = ACTIONS(21),
    [anon_sym_f20] = ACTIONS(21),
    [anon_sym_sound_up] = ACTIONS(21),
    [anon_sym_sound_down] = ACTIONS(21),
    [anon_sym_mute] = ACTIONS(21),
    [anon_sym_play] = ACTIONS(21),
    [anon_sym_previous] = ACTIONS(21),
    [anon_sym_next] = ACTIONS(21),
    [anon_sym_rewind] = ACTIONS(21),
    [anon_sym_fast] = ACTIONS(21),
    [anon_sym_brightness_up] = ACTIONS(21),
    [anon_sym_brightness_down] = ACTIONS(21),
    [anon_sym_illumination_up] = ACTIONS(21),
    [anon_sym_illumination_down] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_cmd] = ACTIONS(25),
    [anon_sym_lcmd] = ACTIONS(25),
    [anon_sym_rcmd] = ACTIONS(25),
    [anon_sym_shift] = ACTIONS(25),
    [anon_sym_lshift] = ACTIONS(25),
    [anon_sym_rshift] = ACTIONS(25),
    [anon_sym_alt] = ACTIONS(25),
    [anon_sym_lalt] = ACTIONS(25),
    [anon_sym_ralt] = ACTIONS(25),
    [anon_sym_ctrl] = ACTIONS(25),
    [anon_sym_lctrl] = ACTIONS(25),
    [anon_sym_rctrl] = ACTIONS(25),
    [anon_sym_hyper] = ACTIONS(25),
    [anon_sym_meh] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(61),
    [anon_sym_DOTshell] = ACTIONS(61),
    [anon_sym_DOTblacklist] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_DOTdefine] = ACTIONS(61),
    [aux_sym_mode_token1] = ACTIONS(63),
    [sym_literal] = ACTIONS(63),
    [aux_sym_keycode_token1] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_tab] = ACTIONS(63),
    [anon_sym_space] = ACTIONS(63),
    [anon_sym_backspace] = ACTIONS(63),
    [anon_sym_escape] = ACTIONS(63),
    [anon_sym_backtick] = ACTIONS(63),
    [anon_sym_delete] = ACTIONS(63),
    [anon_sym_home] = ACTIONS(63),
    [anon_sym_end] = ACTIONS(63),
    [anon_sym_pageup] = ACTIONS(63),
    [anon_sym_pagedown] = ACTIONS(63),
    [anon_sym_insert] = ACTIONS(63),
    [anon_sym_left] = ACTIONS(63),
    [anon_sym_right] = ACTIONS(63),
    [anon_sym_up] = ACTIONS(63),
    [anon_sym_down] = ACTIONS(63),
    [anon_sym_f1] = ACTIONS(63),
    [anon_sym_f2] = ACTIONS(63),
    [anon_sym_f3] = ACTIONS(63),
    [anon_sym_f4] = ACTIONS(63),
    [anon_sym_f5] = ACTIONS(63),
    [anon_sym_f6] = ACTIONS(63),
    [anon_sym_f7] = ACTIONS(63),
    [anon_sym_f8] = ACTIONS(63),
    [anon_sym_f9] = ACTIONS(63),
    [anon_sym_f10] = ACTIONS(63),
    [anon_sym_f11] = ACTIONS(63),
    [anon_sym_f12] = ACTIONS(63),
    [anon_sym_f13] = ACTIONS(63),
    [anon_sym_f14] = ACTIONS(63),
    [anon_sym_f15] = ACTIONS(63),
    [anon_sym_f16] = ACTIONS(63),
    [anon_sym_f17] = ACTIONS(63),
    [anon_sym_f18] = ACTIONS(63),
    [anon_sym_f19] = ACTIONS(63),
    [anon_sym_f20] = ACTIONS(63),
    [anon_sym_sound_up] = ACTIONS(63),
    [anon_sym_sound_down] = ACTIONS(63),
    [anon_sym_mute] = ACTIONS(63),
    [anon_sym_play] = ACTIONS(63),
    [anon_sym_previous] = ACTIONS(63),
    [anon_sym_next] = ACTIONS(63),
    [anon_sym_rewind] = ACTIONS(63),
    [anon_sym_fast] = ACTIONS(63),
    [anon_sym_brightness_up] = ACTIONS(63),
    [anon_sym_brightness_down] = ACTIONS(63),
    [anon_sym_illumination_up] = ACTIONS(63),
    [anon_sym_illumination_down] = ACTIONS(63),
    [sym_wildcard] = ACTIONS(61),
    [sym_at_ident] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym_string] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [anon_sym_fn] = ACTIONS(63),
    [anon_sym_cmd] = ACTIONS(63),
    [anon_sym_lcmd] = ACTIONS(63),
    [anon_sym_rcmd] = ACTIONS(63),
    [anon_sym_shift] = ACTIONS(63),
    [anon_sym_lshift] = ACTIONS(63),
    [anon_sym_rshift] = ACTIONS(63),
    [anon_sym_alt] = ACTIONS(63),
    [anon_sym_lalt] = ACTIONS(63),
    [anon_sym_ralt] = ACTIONS(63),
    [anon_sym_ctrl] = ACTIONS(63),
    [anon_sym_lctrl] = ACTIONS(63),
    [anon_sym_rctrl] = ACTIONS(63),
    [anon_sym_hyper] = ACTIONS(63),
    [anon_sym_meh] = ACTIONS(63),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(67),
    [anon_sym_DOTshell] = ACTIONS(67),
    [anon_sym_DOTblacklist] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_DOTdefine] = ACTIONS(67),
    [aux_sym_mode_token1] = ACTIONS(69),
    [sym_literal] = ACTIONS(69),
    [aux_sym_keycode_token1] = ACTIONS(67),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_tab] = ACTIONS(69),
    [anon_sym_space] = ACTIONS(69),
    [anon_sym_backspace] = ACTIONS(69),
    [anon_sym_escape] = ACTIONS(69),
    [anon_sym_backtick] = ACTIONS(69),
    [anon_sym_delete] = ACTIONS(69),
    [anon_sym_home] = ACTIONS(69),
    [anon_sym_end] = ACTIONS(69),
    [anon_sym_pageup] = ACTIONS(69),
    [anon_sym_pagedown] = ACTIONS(69),
    [anon_sym_insert] = ACTIONS(69),
    [anon_sym_left] = ACTIONS(69),
    [anon_sym_right] = ACTIONS(69),
    [anon_sym_up] = ACTIONS(69),
    [anon_sym_down] = ACTIONS(69),
    [anon_sym_f1] = ACTIONS(69),
    [anon_sym_f2] = ACTIONS(69),
    [anon_sym_f3] = ACTIONS(69),
    [anon_sym_f4] = ACTIONS(69),
    [anon_sym_f5] = ACTIONS(69),
    [anon_sym_f6] = ACTIONS(69),
    [anon_sym_f7] = ACTIONS(69),
    [anon_sym_f8] = ACTIONS(69),
    [anon_sym_f9] = ACTIONS(69),
    [anon_sym_f10] = ACTIONS(69),
    [anon_sym_f11] = ACTIONS(69),
    [anon_sym_f12] = ACTIONS(69),
    [anon_sym_f13] = ACTIONS(69),
    [anon_sym_f14] = ACTIONS(69),
    [anon_sym_f15] = ACTIONS(69),
    [anon_sym_f16] = ACTIONS(69),
    [anon_sym_f17] = ACTIONS(69),
    [anon_sym_f18] = ACTIONS(69),
    [anon_sym_f19] = ACTIONS(69),
    [anon_sym_f20] = ACTIONS(69),
    [anon_sym_sound_up] = ACTIONS(69),
    [anon_sym_sound_down] = ACTIONS(69),
    [anon_sym_mute] = ACTIONS(69),
    [anon_sym_play] = ACTIONS(69),
    [anon_sym_previous] = ACTIONS(69),
    [anon_sym_next] = ACTIONS(69),
    [anon_sym_rewind] = ACTIONS(69),
    [anon_sym_fast] = ACTIONS(69),
    [anon_sym_brightness_up] = ACTIONS(69),
    [anon_sym_brightness_down] = ACTIONS(69),
    [anon_sym_illumination_up] = ACTIONS(69),
    [anon_sym_illumination_down] = ACTIONS(69),
    [sym_wildcard] = ACTIONS(67),
    [sym_at_ident] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [anon_sym_fn] = ACTIONS(69),
    [anon_sym_cmd] = ACTIONS(69),
    [anon_sym_lcmd] = ACTIONS(69),
    [anon_sym_rcmd] = ACTIONS(69),
    [anon_sym_shift] = ACTIONS(69),
    [anon_sym_lshift] = ACTIONS(69),
    [anon_sym_rshift] = ACTIONS(69),
    [anon_sym_alt] = ACTIONS(69),
    [anon_sym_lalt] = ACTIONS(69),
    [anon_sym_ralt] = ACTIONS(69),
    [anon_sym_ctrl] = ACTIONS(69),
    [anon_sym_lctrl] = ACTIONS(69),
    [anon_sym_rctrl] = ACTIONS(69),
    [anon_sym_hyper] = ACTIONS(69),
    [anon_sym_meh] = ACTIONS(69),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(71),
    [anon_sym_DOTshell] = ACTIONS(71),
    [anon_sym_DOTblacklist] = ACTIONS(71),
    [anon_sym_DOTdefine] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [aux_sym_mode_token1] = ACTIONS(73),
    [sym_literal] = ACTIONS(73),
    [aux_sym_keycode_token1] = ACTIONS(71),
    [anon_sym_return] = ACTIONS(73),
    [anon_sym_tab] = ACTIONS(73),
    [anon_sym_space] = ACTIONS(73),
    [anon_sym_backspace] = ACTIONS(73),
    [anon_sym_escape] = ACTIONS(73),
    [anon_sym_backtick] = ACTIONS(73),
    [anon_sym_delete] = ACTIONS(73),
    [anon_sym_home] = ACTIONS(73),
    [anon_sym_end] = ACTIONS(73),
    [anon_sym_pageup] = ACTIONS(73),
    [anon_sym_pagedown] = ACTIONS(73),
    [anon_sym_insert] = ACTIONS(73),
    [anon_sym_left] = ACTIONS(73),
    [anon_sym_right] = ACTIONS(73),
    [anon_sym_up] = ACTIONS(73),
    [anon_sym_down] = ACTIONS(73),
    [anon_sym_f1] = ACTIONS(73),
    [anon_sym_f2] = ACTIONS(73),
    [anon_sym_f3] = ACTIONS(73),
    [anon_sym_f4] = ACTIONS(73),
    [anon_sym_f5] = ACTIONS(73),
    [anon_sym_f6] = ACTIONS(73),
    [anon_sym_f7] = ACTIONS(73),
    [anon_sym_f8] = ACTIONS(73),
    [anon_sym_f9] = ACTIONS(73),
    [anon_sym_f10] = ACTIONS(73),
    [anon_sym_f11] = ACTIONS(73),
    [anon_sym_f12] = ACTIONS(73),
    [anon_sym_f13] = ACTIONS(73),
    [anon_sym_f14] = ACTIONS(73),
    [anon_sym_f15] = ACTIONS(73),
    [anon_sym_f16] = ACTIONS(73),
    [anon_sym_f17] = ACTIONS(73),
    [anon_sym_f18] = ACTIONS(73),
    [anon_sym_f19] = ACTIONS(73),
    [anon_sym_f20] = ACTIONS(73),
    [anon_sym_sound_up] = ACTIONS(73),
    [anon_sym_sound_down] = ACTIONS(73),
    [anon_sym_mute] = ACTIONS(73),
    [anon_sym_play] = ACTIONS(73),
    [anon_sym_previous] = ACTIONS(73),
    [anon_sym_next] = ACTIONS(73),
    [anon_sym_rewind] = ACTIONS(73),
    [anon_sym_fast] = ACTIONS(73),
    [anon_sym_brightness_up] = ACTIONS(73),
    [anon_sym_brightness_down] = ACTIONS(73),
    [anon_sym_illumination_up] = ACTIONS(73),
    [anon_sym_illumination_down] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_fn] = ACTIONS(73),
    [anon_sym_cmd] = ACTIONS(73),
    [anon_sym_lcmd] = ACTIONS(73),
    [anon_sym_rcmd] = ACTIONS(73),
    [anon_sym_shift] = ACTIONS(73),
    [anon_sym_lshift] = ACTIONS(73),
    [anon_sym_rshift] = ACTIONS(73),
    [anon_sym_alt] = ACTIONS(73),
    [anon_sym_lalt] = ACTIONS(73),
    [anon_sym_ralt] = ACTIONS(73),
    [anon_sym_ctrl] = ACTIONS(73),
    [anon_sym_lctrl] = ACTIONS(73),
    [anon_sym_rctrl] = ACTIONS(73),
    [anon_sym_hyper] = ACTIONS(73),
    [anon_sym_meh] = ACTIONS(73),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(75),
    [anon_sym_DOTshell] = ACTIONS(75),
    [anon_sym_DOTblacklist] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_DOTdefine] = ACTIONS(75),
    [aux_sym_mode_token1] = ACTIONS(77),
    [sym_literal] = ACTIONS(77),
    [aux_sym_keycode_token1] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(77),
    [anon_sym_tab] = ACTIONS(77),
    [anon_sym_space] = ACTIONS(77),
    [anon_sym_backspace] = ACTIONS(77),
    [anon_sym_escape] = ACTIONS(77),
    [anon_sym_backtick] = ACTIONS(77),
    [anon_sym_delete] = ACTIONS(77),
    [anon_sym_home] = ACTIONS(77),
    [anon_sym_end] = ACTIONS(77),
    [anon_sym_pageup] = ACTIONS(77),
    [anon_sym_pagedown] = ACTIONS(77),
    [anon_sym_insert] = ACTIONS(77),
    [anon_sym_left] = ACTIONS(77),
    [anon_sym_right] = ACTIONS(77),
    [anon_sym_up] = ACTIONS(77),
    [anon_sym_down] = ACTIONS(77),
    [anon_sym_f1] = ACTIONS(77),
    [anon_sym_f2] = ACTIONS(77),
    [anon_sym_f3] = ACTIONS(77),
    [anon_sym_f4] = ACTIONS(77),
    [anon_sym_f5] = ACTIONS(77),
    [anon_sym_f6] = ACTIONS(77),
    [anon_sym_f7] = ACTIONS(77),
    [anon_sym_f8] = ACTIONS(77),
    [anon_sym_f9] = ACTIONS(77),
    [anon_sym_f10] = ACTIONS(77),
    [anon_sym_f11] = ACTIONS(77),
    [anon_sym_f12] = ACTIONS(77),
    [anon_sym_f13] = ACTIONS(77),
    [anon_sym_f14] = ACTIONS(77),
    [anon_sym_f15] = ACTIONS(77),
    [anon_sym_f16] = ACTIONS(77),
    [anon_sym_f17] = ACTIONS(77),
    [anon_sym_f18] = ACTIONS(77),
    [anon_sym_f19] = ACTIONS(77),
    [anon_sym_f20] = ACTIONS(77),
    [anon_sym_sound_up] = ACTIONS(77),
    [anon_sym_sound_down] = ACTIONS(77),
    [anon_sym_mute] = ACTIONS(77),
    [anon_sym_play] = ACTIONS(77),
    [anon_sym_previous] = ACTIONS(77),
    [anon_sym_next] = ACTIONS(77),
    [anon_sym_rewind] = ACTIONS(77),
    [anon_sym_fast] = ACTIONS(77),
    [anon_sym_brightness_up] = ACTIONS(77),
    [anon_sym_brightness_down] = ACTIONS(77),
    [anon_sym_illumination_up] = ACTIONS(77),
    [anon_sym_illumination_down] = ACTIONS(77),
    [sym_wildcard] = ACTIONS(75),
    [sym_at_ident] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_fn] = ACTIONS(77),
    [anon_sym_cmd] = ACTIONS(77),
    [anon_sym_lcmd] = ACTIONS(77),
    [anon_sym_rcmd] = ACTIONS(77),
    [anon_sym_shift] = ACTIONS(77),
    [anon_sym_lshift] = ACTIONS(77),
    [anon_sym_rshift] = ACTIONS(77),
    [anon_sym_alt] = ACTIONS(77),
    [anon_sym_lalt] = ACTIONS(77),
    [anon_sym_ralt] = ACTIONS(77),
    [anon_sym_ctrl] = ACTIONS(77),
    [anon_sym_lctrl] = ACTIONS(77),
    [anon_sym_rctrl] = ACTIONS(77),
    [anon_sym_hyper] = ACTIONS(77),
    [anon_sym_meh] = ACTIONS(77),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(79),
    [anon_sym_DOTshell] = ACTIONS(79),
    [anon_sym_DOTblacklist] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DOTdefine] = ACTIONS(79),
    [aux_sym_mode_token1] = ACTIONS(81),
    [sym_literal] = ACTIONS(81),
    [aux_sym_keycode_token1] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(81),
    [anon_sym_tab] = ACTIONS(81),
    [anon_sym_space] = ACTIONS(81),
    [anon_sym_backspace] = ACTIONS(81),
    [anon_sym_escape] = ACTIONS(81),
    [anon_sym_backtick] = ACTIONS(81),
    [anon_sym_delete] = ACTIONS(81),
    [anon_sym_home] = ACTIONS(81),
    [anon_sym_end] = ACTIONS(81),
    [anon_sym_pageup] = ACTIONS(81),
    [anon_sym_pagedown] = ACTIONS(81),
    [anon_sym_insert] = ACTIONS(81),
    [anon_sym_left] = ACTIONS(81),
    [anon_sym_right] = ACTIONS(81),
    [anon_sym_up] = ACTIONS(81),
    [anon_sym_down] = ACTIONS(81),
    [anon_sym_f1] = ACTIONS(81),
    [anon_sym_f2] = ACTIONS(81),
    [anon_sym_f3] = ACTIONS(81),
    [anon_sym_f4] = ACTIONS(81),
    [anon_sym_f5] = ACTIONS(81),
    [anon_sym_f6] = ACTIONS(81),
    [anon_sym_f7] = ACTIONS(81),
    [anon_sym_f8] = ACTIONS(81),
    [anon_sym_f9] = ACTIONS(81),
    [anon_sym_f10] = ACTIONS(81),
    [anon_sym_f11] = ACTIONS(81),
    [anon_sym_f12] = ACTIONS(81),
    [anon_sym_f13] = ACTIONS(81),
    [anon_sym_f14] = ACTIONS(81),
    [anon_sym_f15] = ACTIONS(81),
    [anon_sym_f16] = ACTIONS(81),
    [anon_sym_f17] = ACTIONS(81),
    [anon_sym_f18] = ACTIONS(81),
    [anon_sym_f19] = ACTIONS(81),
    [anon_sym_f20] = ACTIONS(81),
    [anon_sym_sound_up] = ACTIONS(81),
    [anon_sym_sound_down] = ACTIONS(81),
    [anon_sym_mute] = ACTIONS(81),
    [anon_sym_play] = ACTIONS(81),
    [anon_sym_previous] = ACTIONS(81),
    [anon_sym_next] = ACTIONS(81),
    [anon_sym_rewind] = ACTIONS(81),
    [anon_sym_fast] = ACTIONS(81),
    [anon_sym_brightness_up] = ACTIONS(81),
    [anon_sym_brightness_down] = ACTIONS(81),
    [anon_sym_illumination_up] = ACTIONS(81),
    [anon_sym_illumination_down] = ACTIONS(81),
    [sym_wildcard] = ACTIONS(79),
    [sym_at_ident] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_fn] = ACTIONS(81),
    [anon_sym_cmd] = ACTIONS(81),
    [anon_sym_lcmd] = ACTIONS(81),
    [anon_sym_rcmd] = ACTIONS(81),
    [anon_sym_shift] = ACTIONS(81),
    [anon_sym_lshift] = ACTIONS(81),
    [anon_sym_rshift] = ACTIONS(81),
    [anon_sym_alt] = ACTIONS(81),
    [anon_sym_lalt] = ACTIONS(81),
    [anon_sym_ralt] = ACTIONS(81),
    [anon_sym_ctrl] = ACTIONS(81),
    [anon_sym_lctrl] = ACTIONS(81),
    [anon_sym_rctrl] = ACTIONS(81),
    [anon_sym_hyper] = ACTIONS(81),
    [anon_sym_meh] = ACTIONS(81),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(83),
    [anon_sym_DOTshell] = ACTIONS(83),
    [anon_sym_DOTblacklist] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_DOTdefine] = ACTIONS(83),
    [aux_sym_mode_token1] = ACTIONS(85),
    [sym_literal] = ACTIONS(85),
    [aux_sym_keycode_token1] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(85),
    [anon_sym_tab] = ACTIONS(85),
    [anon_sym_space] = ACTIONS(85),
    [anon_sym_backspace] = ACTIONS(85),
    [anon_sym_escape] = ACTIONS(85),
    [anon_sym_backtick] = ACTIONS(85),
    [anon_sym_delete] = ACTIONS(85),
    [anon_sym_home] = ACTIONS(85),
    [anon_sym_end] = ACTIONS(85),
    [anon_sym_pageup] = ACTIONS(85),
    [anon_sym_pagedown] = ACTIONS(85),
    [anon_sym_insert] = ACTIONS(85),
    [anon_sym_left] = ACTIONS(85),
    [anon_sym_right] = ACTIONS(85),
    [anon_sym_up] = ACTIONS(85),
    [anon_sym_down] = ACTIONS(85),
    [anon_sym_f1] = ACTIONS(85),
    [anon_sym_f2] = ACTIONS(85),
    [anon_sym_f3] = ACTIONS(85),
    [anon_sym_f4] = ACTIONS(85),
    [anon_sym_f5] = ACTIONS(85),
    [anon_sym_f6] = ACTIONS(85),
    [anon_sym_f7] = ACTIONS(85),
    [anon_sym_f8] = ACTIONS(85),
    [anon_sym_f9] = ACTIONS(85),
    [anon_sym_f10] = ACTIONS(85),
    [anon_sym_f11] = ACTIONS(85),
    [anon_sym_f12] = ACTIONS(85),
    [anon_sym_f13] = ACTIONS(85),
    [anon_sym_f14] = ACTIONS(85),
    [anon_sym_f15] = ACTIONS(85),
    [anon_sym_f16] = ACTIONS(85),
    [anon_sym_f17] = ACTIONS(85),
    [anon_sym_f18] = ACTIONS(85),
    [anon_sym_f19] = ACTIONS(85),
    [anon_sym_f20] = ACTIONS(85),
    [anon_sym_sound_up] = ACTIONS(85),
    [anon_sym_sound_down] = ACTIONS(85),
    [anon_sym_mute] = ACTIONS(85),
    [anon_sym_play] = ACTIONS(85),
    [anon_sym_previous] = ACTIONS(85),
    [anon_sym_next] = ACTIONS(85),
    [anon_sym_rewind] = ACTIONS(85),
    [anon_sym_fast] = ACTIONS(85),
    [anon_sym_brightness_up] = ACTIONS(85),
    [anon_sym_brightness_down] = ACTIONS(85),
    [anon_sym_illumination_up] = ACTIONS(85),
    [anon_sym_illumination_down] = ACTIONS(85),
    [sym_wildcard] = ACTIONS(83),
    [sym_at_ident] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_fn] = ACTIONS(85),
    [anon_sym_cmd] = ACTIONS(85),
    [anon_sym_lcmd] = ACTIONS(85),
    [anon_sym_rcmd] = ACTIONS(85),
    [anon_sym_shift] = ACTIONS(85),
    [anon_sym_lshift] = ACTIONS(85),
    [anon_sym_rshift] = ACTIONS(85),
    [anon_sym_alt] = ACTIONS(85),
    [anon_sym_lalt] = ACTIONS(85),
    [anon_sym_ralt] = ACTIONS(85),
    [anon_sym_ctrl] = ACTIONS(85),
    [anon_sym_lctrl] = ACTIONS(85),
    [anon_sym_rctrl] = ACTIONS(85),
    [anon_sym_hyper] = ACTIONS(85),
    [anon_sym_meh] = ACTIONS(85),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(87),
    [anon_sym_DOTshell] = ACTIONS(87),
    [anon_sym_DOTblacklist] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_DOTdefine] = ACTIONS(87),
    [aux_sym_mode_token1] = ACTIONS(89),
    [sym_literal] = ACTIONS(89),
    [aux_sym_keycode_token1] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_tab] = ACTIONS(89),
    [anon_sym_space] = ACTIONS(89),
    [anon_sym_backspace] = ACTIONS(89),
    [anon_sym_escape] = ACTIONS(89),
    [anon_sym_backtick] = ACTIONS(89),
    [anon_sym_delete] = ACTIONS(89),
    [anon_sym_home] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_pageup] = ACTIONS(89),
    [anon_sym_pagedown] = ACTIONS(89),
    [anon_sym_insert] = ACTIONS(89),
    [anon_sym_left] = ACTIONS(89),
    [anon_sym_right] = ACTIONS(89),
    [anon_sym_up] = ACTIONS(89),
    [anon_sym_down] = ACTIONS(89),
    [anon_sym_f1] = ACTIONS(89),
    [anon_sym_f2] = ACTIONS(89),
    [anon_sym_f3] = ACTIONS(89),
    [anon_sym_f4] = ACTIONS(89),
    [anon_sym_f5] = ACTIONS(89),
    [anon_sym_f6] = ACTIONS(89),
    [anon_sym_f7] = ACTIONS(89),
    [anon_sym_f8] = ACTIONS(89),
    [anon_sym_f9] = ACTIONS(89),
    [anon_sym_f10] = ACTIONS(89),
    [anon_sym_f11] = ACTIONS(89),
    [anon_sym_f12] = ACTIONS(89),
    [anon_sym_f13] = ACTIONS(89),
    [anon_sym_f14] = ACTIONS(89),
    [anon_sym_f15] = ACTIONS(89),
    [anon_sym_f16] = ACTIONS(89),
    [anon_sym_f17] = ACTIONS(89),
    [anon_sym_f18] = ACTIONS(89),
    [anon_sym_f19] = ACTIONS(89),
    [anon_sym_f20] = ACTIONS(89),
    [anon_sym_sound_up] = ACTIONS(89),
    [anon_sym_sound_down] = ACTIONS(89),
    [anon_sym_mute] = ACTIONS(89),
    [anon_sym_play] = ACTIONS(89),
    [anon_sym_previous] = ACTIONS(89),
    [anon_sym_next] = ACTIONS(89),
    [anon_sym_rewind] = ACTIONS(89),
    [anon_sym_fast] = ACTIONS(89),
    [anon_sym_brightness_up] = ACTIONS(89),
    [anon_sym_brightness_down] = ACTIONS(89),
    [anon_sym_illumination_up] = ACTIONS(89),
    [anon_sym_illumination_down] = ACTIONS(89),
    [sym_wildcard] = ACTIONS(87),
    [sym_at_ident] = ACTIONS(87),
    [sym_string] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_fn] = ACTIONS(89),
    [anon_sym_cmd] = ACTIONS(89),
    [anon_sym_lcmd] = ACTIONS(89),
    [anon_sym_rcmd] = ACTIONS(89),
    [anon_sym_shift] = ACTIONS(89),
    [anon_sym_lshift] = ACTIONS(89),
    [anon_sym_rshift] = ACTIONS(89),
    [anon_sym_alt] = ACTIONS(89),
    [anon_sym_lalt] = ACTIONS(89),
    [anon_sym_ralt] = ACTIONS(89),
    [anon_sym_ctrl] = ACTIONS(89),
    [anon_sym_lctrl] = ACTIONS(89),
    [anon_sym_rctrl] = ACTIONS(89),
    [anon_sym_hyper] = ACTIONS(89),
    [anon_sym_meh] = ACTIONS(89),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(91),
    [anon_sym_DOTshell] = ACTIONS(91),
    [anon_sym_DOTblacklist] = ACTIONS(91),
    [anon_sym_DOTdefine] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [aux_sym_mode_token1] = ACTIONS(95),
    [sym_literal] = ACTIONS(95),
    [aux_sym_keycode_token1] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(95),
    [anon_sym_tab] = ACTIONS(95),
    [anon_sym_space] = ACTIONS(95),
    [anon_sym_backspace] = ACTIONS(95),
    [anon_sym_escape] = ACTIONS(95),
    [anon_sym_backtick] = ACTIONS(95),
    [anon_sym_delete] = ACTIONS(95),
    [anon_sym_home] = ACTIONS(95),
    [anon_sym_end] = ACTIONS(95),
    [anon_sym_pageup] = ACTIONS(95),
    [anon_sym_pagedown] = ACTIONS(95),
    [anon_sym_insert] = ACTIONS(95),
    [anon_sym_left] = ACTIONS(95),
    [anon_sym_right] = ACTIONS(95),
    [anon_sym_up] = ACTIONS(95),
    [anon_sym_down] = ACTIONS(95),
    [anon_sym_f1] = ACTIONS(95),
    [anon_sym_f2] = ACTIONS(95),
    [anon_sym_f3] = ACTIONS(95),
    [anon_sym_f4] = ACTIONS(95),
    [anon_sym_f5] = ACTIONS(95),
    [anon_sym_f6] = ACTIONS(95),
    [anon_sym_f7] = ACTIONS(95),
    [anon_sym_f8] = ACTIONS(95),
    [anon_sym_f9] = ACTIONS(95),
    [anon_sym_f10] = ACTIONS(95),
    [anon_sym_f11] = ACTIONS(95),
    [anon_sym_f12] = ACTIONS(95),
    [anon_sym_f13] = ACTIONS(95),
    [anon_sym_f14] = ACTIONS(95),
    [anon_sym_f15] = ACTIONS(95),
    [anon_sym_f16] = ACTIONS(95),
    [anon_sym_f17] = ACTIONS(95),
    [anon_sym_f18] = ACTIONS(95),
    [anon_sym_f19] = ACTIONS(95),
    [anon_sym_f20] = ACTIONS(95),
    [anon_sym_sound_up] = ACTIONS(95),
    [anon_sym_sound_down] = ACTIONS(95),
    [anon_sym_mute] = ACTIONS(95),
    [anon_sym_play] = ACTIONS(95),
    [anon_sym_previous] = ACTIONS(95),
    [anon_sym_next] = ACTIONS(95),
    [anon_sym_rewind] = ACTIONS(95),
    [anon_sym_fast] = ACTIONS(95),
    [anon_sym_brightness_up] = ACTIONS(95),
    [anon_sym_brightness_down] = ACTIONS(95),
    [anon_sym_illumination_up] = ACTIONS(95),
    [anon_sym_illumination_down] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_fn] = ACTIONS(95),
    [anon_sym_cmd] = ACTIONS(95),
    [anon_sym_lcmd] = ACTIONS(95),
    [anon_sym_rcmd] = ACTIONS(95),
    [anon_sym_shift] = ACTIONS(95),
    [anon_sym_lshift] = ACTIONS(95),
    [anon_sym_rshift] = ACTIONS(95),
    [anon_sym_alt] = ACTIONS(95),
    [anon_sym_lalt] = ACTIONS(95),
    [anon_sym_ralt] = ACTIONS(95),
    [anon_sym_ctrl] = ACTIONS(95),
    [anon_sym_lctrl] = ACTIONS(95),
    [anon_sym_rctrl] = ACTIONS(95),
    [anon_sym_hyper] = ACTIONS(95),
    [anon_sym_meh] = ACTIONS(95),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(99),
    [anon_sym_DOTshell] = ACTIONS(99),
    [anon_sym_DOTblacklist] = ACTIONS(99),
    [anon_sym_DOTdefine] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
    [aux_sym_mode_token1] = ACTIONS(103),
    [sym_literal] = ACTIONS(103),
    [aux_sym_keycode_token1] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_tab] = ACTIONS(103),
    [anon_sym_space] = ACTIONS(103),
    [anon_sym_backspace] = ACTIONS(103),
    [anon_sym_escape] = ACTIONS(103),
    [anon_sym_backtick] = ACTIONS(103),
    [anon_sym_delete] = ACTIONS(103),
    [anon_sym_home] = ACTIONS(103),
    [anon_sym_end] = ACTIONS(103),
    [anon_sym_pageup] = ACTIONS(103),
    [anon_sym_pagedown] = ACTIONS(103),
    [anon_sym_insert] = ACTIONS(103),
    [anon_sym_left] = ACTIONS(103),
    [anon_sym_right] = ACTIONS(103),
    [anon_sym_up] = ACTIONS(103),
    [anon_sym_down] = ACTIONS(103),
    [anon_sym_f1] = ACTIONS(103),
    [anon_sym_f2] = ACTIONS(103),
    [anon_sym_f3] = ACTIONS(103),
    [anon_sym_f4] = ACTIONS(103),
    [anon_sym_f5] = ACTIONS(103),
    [anon_sym_f6] = ACTIONS(103),
    [anon_sym_f7] = ACTIONS(103),
    [anon_sym_f8] = ACTIONS(103),
    [anon_sym_f9] = ACTIONS(103),
    [anon_sym_f10] = ACTIONS(103),
    [anon_sym_f11] = ACTIONS(103),
    [anon_sym_f12] = ACTIONS(103),
    [anon_sym_f13] = ACTIONS(103),
    [anon_sym_f14] = ACTIONS(103),
    [anon_sym_f15] = ACTIONS(103),
    [anon_sym_f16] = ACTIONS(103),
    [anon_sym_f17] = ACTIONS(103),
    [anon_sym_f18] = ACTIONS(103),
    [anon_sym_f19] = ACTIONS(103),
    [anon_sym_f20] = ACTIONS(103),
    [anon_sym_sound_up] = ACTIONS(103),
    [anon_sym_sound_down] = ACTIONS(103),
    [anon_sym_mute] = ACTIONS(103),
    [anon_sym_play] = ACTIONS(103),
    [anon_sym_previous] = ACTIONS(103),
    [anon_sym_next] = ACTIONS(103),
    [anon_sym_rewind] = ACTIONS(103),
    [anon_sym_fast] = ACTIONS(103),
    [anon_sym_brightness_up] = ACTIONS(103),
    [anon_sym_brightness_down] = ACTIONS(103),
    [anon_sym_illumination_up] = ACTIONS(103),
    [anon_sym_illumination_down] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_cmd] = ACTIONS(103),
    [anon_sym_lcmd] = ACTIONS(103),
    [anon_sym_rcmd] = ACTIONS(103),
    [anon_sym_shift] = ACTIONS(103),
    [anon_sym_lshift] = ACTIONS(103),
    [anon_sym_rshift] = ACTIONS(103),
    [anon_sym_alt] = ACTIONS(103),
    [anon_sym_lalt] = ACTIONS(103),
    [anon_sym_ralt] = ACTIONS(103),
    [anon_sym_ctrl] = ACTIONS(103),
    [anon_sym_lctrl] = ACTIONS(103),
    [anon_sym_rctrl] = ACTIONS(103),
    [anon_sym_hyper] = ACTIONS(103),
    [anon_sym_meh] = ACTIONS(103),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(105),
    [anon_sym_DOTshell] = ACTIONS(105),
    [anon_sym_DOTblacklist] = ACTIONS(105),
    [anon_sym_DOTdefine] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [aux_sym_mode_token1] = ACTIONS(109),
    [sym_literal] = ACTIONS(109),
    [aux_sym_keycode_token1] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_tab] = ACTIONS(109),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_backspace] = ACTIONS(109),
    [anon_sym_escape] = ACTIONS(109),
    [anon_sym_backtick] = ACTIONS(109),
    [anon_sym_delete] = ACTIONS(109),
    [anon_sym_home] = ACTIONS(109),
    [anon_sym_end] = ACTIONS(109),
    [anon_sym_pageup] = ACTIONS(109),
    [anon_sym_pagedown] = ACTIONS(109),
    [anon_sym_insert] = ACTIONS(109),
    [anon_sym_left] = ACTIONS(109),
    [anon_sym_right] = ACTIONS(109),
    [anon_sym_up] = ACTIONS(109),
    [anon_sym_down] = ACTIONS(109),
    [anon_sym_f1] = ACTIONS(109),
    [anon_sym_f2] = ACTIONS(109),
    [anon_sym_f3] = ACTIONS(109),
    [anon_sym_f4] = ACTIONS(109),
    [anon_sym_f5] = ACTIONS(109),
    [anon_sym_f6] = ACTIONS(109),
    [anon_sym_f7] = ACTIONS(109),
    [anon_sym_f8] = ACTIONS(109),
    [anon_sym_f9] = ACTIONS(109),
    [anon_sym_f10] = ACTIONS(109),
    [anon_sym_f11] = ACTIONS(109),
    [anon_sym_f12] = ACTIONS(109),
    [anon_sym_f13] = ACTIONS(109),
    [anon_sym_f14] = ACTIONS(109),
    [anon_sym_f15] = ACTIONS(109),
    [anon_sym_f16] = ACTIONS(109),
    [anon_sym_f17] = ACTIONS(109),
    [anon_sym_f18] = ACTIONS(109),
    [anon_sym_f19] = ACTIONS(109),
    [anon_sym_f20] = ACTIONS(109),
    [anon_sym_sound_up] = ACTIONS(109),
    [anon_sym_sound_down] = ACTIONS(109),
    [anon_sym_mute] = ACTIONS(109),
    [anon_sym_play] = ACTIONS(109),
    [anon_sym_previous] = ACTIONS(109),
    [anon_sym_next] = ACTIONS(109),
    [anon_sym_rewind] = ACTIONS(109),
    [anon_sym_fast] = ACTIONS(109),
    [anon_sym_brightness_up] = ACTIONS(109),
    [anon_sym_brightness_down] = ACTIONS(109),
    [anon_sym_illumination_up] = ACTIONS(109),
    [anon_sym_illumination_down] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(105),
    [anon_sym_fn] = ACTIONS(109),
    [anon_sym_cmd] = ACTIONS(109),
    [anon_sym_lcmd] = ACTIONS(109),
    [anon_sym_rcmd] = ACTIONS(109),
    [anon_sym_shift] = ACTIONS(109),
    [anon_sym_lshift] = ACTIONS(109),
    [anon_sym_rshift] = ACTIONS(109),
    [anon_sym_alt] = ACTIONS(109),
    [anon_sym_lalt] = ACTIONS(109),
    [anon_sym_ralt] = ACTIONS(109),
    [anon_sym_ctrl] = ACTIONS(109),
    [anon_sym_lctrl] = ACTIONS(109),
    [anon_sym_rctrl] = ACTIONS(109),
    [anon_sym_hyper] = ACTIONS(109),
    [anon_sym_meh] = ACTIONS(109),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(111),
    [anon_sym_DOTshell] = ACTIONS(111),
    [anon_sym_DOTblacklist] = ACTIONS(111),
    [anon_sym_DOTdefine] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [aux_sym_mode_token1] = ACTIONS(115),
    [sym_literal] = ACTIONS(115),
    [aux_sym_keycode_token1] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(115),
    [anon_sym_tab] = ACTIONS(115),
    [anon_sym_space] = ACTIONS(115),
    [anon_sym_backspace] = ACTIONS(115),
    [anon_sym_escape] = ACTIONS(115),
    [anon_sym_backtick] = ACTIONS(115),
    [anon_sym_delete] = ACTIONS(115),
    [anon_sym_home] = ACTIONS(115),
    [anon_sym_end] = ACTIONS(115),
    [anon_sym_pageup] = ACTIONS(115),
    [anon_sym_pagedown] = ACTIONS(115),
    [anon_sym_insert] = ACTIONS(115),
    [anon_sym_left] = ACTIONS(115),
    [anon_sym_right] = ACTIONS(115),
    [anon_sym_up] = ACTIONS(115),
    [anon_sym_down] = ACTIONS(115),
    [anon_sym_f1] = ACTIONS(115),
    [anon_sym_f2] = ACTIONS(115),
    [anon_sym_f3] = ACTIONS(115),
    [anon_sym_f4] = ACTIONS(115),
    [anon_sym_f5] = ACTIONS(115),
    [anon_sym_f6] = ACTIONS(115),
    [anon_sym_f7] = ACTIONS(115),
    [anon_sym_f8] = ACTIONS(115),
    [anon_sym_f9] = ACTIONS(115),
    [anon_sym_f10] = ACTIONS(115),
    [anon_sym_f11] = ACTIONS(115),
    [anon_sym_f12] = ACTIONS(115),
    [anon_sym_f13] = ACTIONS(115),
    [anon_sym_f14] = ACTIONS(115),
    [anon_sym_f15] = ACTIONS(115),
    [anon_sym_f16] = ACTIONS(115),
    [anon_sym_f17] = ACTIONS(115),
    [anon_sym_f18] = ACTIONS(115),
    [anon_sym_f19] = ACTIONS(115),
    [anon_sym_f20] = ACTIONS(115),
    [anon_sym_sound_up] = ACTIONS(115),
    [anon_sym_sound_down] = ACTIONS(115),
    [anon_sym_mute] = ACTIONS(115),
    [anon_sym_play] = ACTIONS(115),
    [anon_sym_previous] = ACTIONS(115),
    [anon_sym_next] = ACTIONS(115),
    [anon_sym_rewind] = ACTIONS(115),
    [anon_sym_fast] = ACTIONS(115),
    [anon_sym_brightness_up] = ACTIONS(115),
    [anon_sym_brightness_down] = ACTIONS(115),
    [anon_sym_illumination_up] = ACTIONS(115),
    [anon_sym_illumination_down] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_fn] = ACTIONS(115),
    [anon_sym_cmd] = ACTIONS(115),
    [anon_sym_lcmd] = ACTIONS(115),
    [anon_sym_rcmd] = ACTIONS(115),
    [anon_sym_shift] = ACTIONS(115),
    [anon_sym_lshift] = ACTIONS(115),
    [anon_sym_rshift] = ACTIONS(115),
    [anon_sym_alt] = ACTIONS(115),
    [anon_sym_lalt] = ACTIONS(115),
    [anon_sym_ralt] = ACTIONS(115),
    [anon_sym_ctrl] = ACTIONS(115),
    [anon_sym_lctrl] = ACTIONS(115),
    [anon_sym_rctrl] = ACTIONS(115),
    [anon_sym_hyper] = ACTIONS(115),
    [anon_sym_meh] = ACTIONS(115),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(117),
    [anon_sym_DOTshell] = ACTIONS(117),
    [anon_sym_DOTblacklist] = ACTIONS(117),
    [anon_sym_DOTdefine] = ACTIONS(117),
    [aux_sym_mode_token1] = ACTIONS(119),
    [sym_literal] = ACTIONS(119),
    [aux_sym_keycode_token1] = ACTIONS(117),
    [anon_sym_return] = ACTIONS(119),
    [anon_sym_tab] = ACTIONS(119),
    [anon_sym_space] = ACTIONS(119),
    [anon_sym_backspace] = ACTIONS(119),
    [anon_sym_escape] = ACTIONS(119),
    [anon_sym_backtick] = ACTIONS(119),
    [anon_sym_delete] = ACTIONS(119),
    [anon_sym_home] = ACTIONS(119),
    [anon_sym_end] = ACTIONS(119),
    [anon_sym_pageup] = ACTIONS(119),
    [anon_sym_pagedown] = ACTIONS(119),
    [anon_sym_insert] = ACTIONS(119),
    [anon_sym_left] = ACTIONS(119),
    [anon_sym_right] = ACTIONS(119),
    [anon_sym_up] = ACTIONS(119),
    [anon_sym_down] = ACTIONS(119),
    [anon_sym_f1] = ACTIONS(119),
    [anon_sym_f2] = ACTIONS(119),
    [anon_sym_f3] = ACTIONS(119),
    [anon_sym_f4] = ACTIONS(119),
    [anon_sym_f5] = ACTIONS(119),
    [anon_sym_f6] = ACTIONS(119),
    [anon_sym_f7] = ACTIONS(119),
    [anon_sym_f8] = ACTIONS(119),
    [anon_sym_f9] = ACTIONS(119),
    [anon_sym_f10] = ACTIONS(119),
    [anon_sym_f11] = ACTIONS(119),
    [anon_sym_f12] = ACTIONS(119),
    [anon_sym_f13] = ACTIONS(119),
    [anon_sym_f14] = ACTIONS(119),
    [anon_sym_f15] = ACTIONS(119),
    [anon_sym_f16] = ACTIONS(119),
    [anon_sym_f17] = ACTIONS(119),
    [anon_sym_f18] = ACTIONS(119),
    [anon_sym_f19] = ACTIONS(119),
    [anon_sym_f20] = ACTIONS(119),
    [anon_sym_sound_up] = ACTIONS(119),
    [anon_sym_sound_down] = ACTIONS(119),
    [anon_sym_mute] = ACTIONS(119),
    [anon_sym_play] = ACTIONS(119),
    [anon_sym_previous] = ACTIONS(119),
    [anon_sym_next] = ACTIONS(119),
    [anon_sym_rewind] = ACTIONS(119),
    [anon_sym_fast] = ACTIONS(119),
    [anon_sym_brightness_up] = ACTIONS(119),
    [anon_sym_brightness_down] = ACTIONS(119),
    [anon_sym_illumination_up] = ACTIONS(119),
    [anon_sym_illumination_down] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_fn] = ACTIONS(119),
    [anon_sym_cmd] = ACTIONS(119),
    [anon_sym_lcmd] = ACTIONS(119),
    [anon_sym_rcmd] = ACTIONS(119),
    [anon_sym_shift] = ACTIONS(119),
    [anon_sym_lshift] = ACTIONS(119),
    [anon_sym_rshift] = ACTIONS(119),
    [anon_sym_alt] = ACTIONS(119),
    [anon_sym_lalt] = ACTIONS(119),
    [anon_sym_ralt] = ACTIONS(119),
    [anon_sym_ctrl] = ACTIONS(119),
    [anon_sym_lctrl] = ACTIONS(119),
    [anon_sym_rctrl] = ACTIONS(119),
    [anon_sym_hyper] = ACTIONS(119),
    [anon_sym_meh] = ACTIONS(119),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(111),
    [anon_sym_DOTshell] = ACTIONS(111),
    [anon_sym_DOTblacklist] = ACTIONS(111),
    [anon_sym_DOTdefine] = ACTIONS(111),
    [aux_sym_mode_token1] = ACTIONS(115),
    [sym_literal] = ACTIONS(115),
    [aux_sym_keycode_token1] = ACTIONS(111),
    [anon_sym_return] = ACTIONS(115),
    [anon_sym_tab] = ACTIONS(115),
    [anon_sym_space] = ACTIONS(115),
    [anon_sym_backspace] = ACTIONS(115),
    [anon_sym_escape] = ACTIONS(115),
    [anon_sym_backtick] = ACTIONS(115),
    [anon_sym_delete] = ACTIONS(115),
    [anon_sym_home] = ACTIONS(115),
    [anon_sym_end] = ACTIONS(115),
    [anon_sym_pageup] = ACTIONS(115),
    [anon_sym_pagedown] = ACTIONS(115),
    [anon_sym_insert] = ACTIONS(115),
    [anon_sym_left] = ACTIONS(115),
    [anon_sym_right] = ACTIONS(115),
    [anon_sym_up] = ACTIONS(115),
    [anon_sym_down] = ACTIONS(115),
    [anon_sym_f1] = ACTIONS(115),
    [anon_sym_f2] = ACTIONS(115),
    [anon_sym_f3] = ACTIONS(115),
    [anon_sym_f4] = ACTIONS(115),
    [anon_sym_f5] = ACTIONS(115),
    [anon_sym_f6] = ACTIONS(115),
    [anon_sym_f7] = ACTIONS(115),
    [anon_sym_f8] = ACTIONS(115),
    [anon_sym_f9] = ACTIONS(115),
    [anon_sym_f10] = ACTIONS(115),
    [anon_sym_f11] = ACTIONS(115),
    [anon_sym_f12] = ACTIONS(115),
    [anon_sym_f13] = ACTIONS(115),
    [anon_sym_f14] = ACTIONS(115),
    [anon_sym_f15] = ACTIONS(115),
    [anon_sym_f16] = ACTIONS(115),
    [anon_sym_f17] = ACTIONS(115),
    [anon_sym_f18] = ACTIONS(115),
    [anon_sym_f19] = ACTIONS(115),
    [anon_sym_f20] = ACTIONS(115),
    [anon_sym_sound_up] = ACTIONS(115),
    [anon_sym_sound_down] = ACTIONS(115),
    [anon_sym_mute] = ACTIONS(115),
    [anon_sym_play] = ACTIONS(115),
    [anon_sym_previous] = ACTIONS(115),
    [anon_sym_next] = ACTIONS(115),
    [anon_sym_rewind] = ACTIONS(115),
    [anon_sym_fast] = ACTIONS(115),
    [anon_sym_brightness_up] = ACTIONS(115),
    [anon_sym_brightness_down] = ACTIONS(115),
    [anon_sym_illumination_up] = ACTIONS(115),
    [anon_sym_illumination_down] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_fn] = ACTIONS(115),
    [anon_sym_cmd] = ACTIONS(115),
    [anon_sym_lcmd] = ACTIONS(115),
    [anon_sym_rcmd] = ACTIONS(115),
    [anon_sym_shift] = ACTIONS(115),
    [anon_sym_lshift] = ACTIONS(115),
    [anon_sym_rshift] = ACTIONS(115),
    [anon_sym_alt] = ACTIONS(115),
    [anon_sym_lalt] = ACTIONS(115),
    [anon_sym_ralt] = ACTIONS(115),
    [anon_sym_ctrl] = ACTIONS(115),
    [anon_sym_lctrl] = ACTIONS(115),
    [anon_sym_rctrl] = ACTIONS(115),
    [anon_sym_hyper] = ACTIONS(115),
    [anon_sym_meh] = ACTIONS(115),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(121),
    [anon_sym_DOTshell] = ACTIONS(121),
    [anon_sym_DOTblacklist] = ACTIONS(121),
    [anon_sym_DOTdefine] = ACTIONS(121),
    [aux_sym_mode_token1] = ACTIONS(123),
    [sym_literal] = ACTIONS(123),
    [aux_sym_keycode_token1] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_tab] = ACTIONS(123),
    [anon_sym_space] = ACTIONS(123),
    [anon_sym_backspace] = ACTIONS(123),
    [anon_sym_escape] = ACTIONS(123),
    [anon_sym_backtick] = ACTIONS(123),
    [anon_sym_delete] = ACTIONS(123),
    [anon_sym_home] = ACTIONS(123),
    [anon_sym_end] = ACTIONS(123),
    [anon_sym_pageup] = ACTIONS(123),
    [anon_sym_pagedown] = ACTIONS(123),
    [anon_sym_insert] = ACTIONS(123),
    [anon_sym_left] = ACTIONS(123),
    [anon_sym_right] = ACTIONS(123),
    [anon_sym_up] = ACTIONS(123),
    [anon_sym_down] = ACTIONS(123),
    [anon_sym_f1] = ACTIONS(123),
    [anon_sym_f2] = ACTIONS(123),
    [anon_sym_f3] = ACTIONS(123),
    [anon_sym_f4] = ACTIONS(123),
    [anon_sym_f5] = ACTIONS(123),
    [anon_sym_f6] = ACTIONS(123),
    [anon_sym_f7] = ACTIONS(123),
    [anon_sym_f8] = ACTIONS(123),
    [anon_sym_f9] = ACTIONS(123),
    [anon_sym_f10] = ACTIONS(123),
    [anon_sym_f11] = ACTIONS(123),
    [anon_sym_f12] = ACTIONS(123),
    [anon_sym_f13] = ACTIONS(123),
    [anon_sym_f14] = ACTIONS(123),
    [anon_sym_f15] = ACTIONS(123),
    [anon_sym_f16] = ACTIONS(123),
    [anon_sym_f17] = ACTIONS(123),
    [anon_sym_f18] = ACTIONS(123),
    [anon_sym_f19] = ACTIONS(123),
    [anon_sym_f20] = ACTIONS(123),
    [anon_sym_sound_up] = ACTIONS(123),
    [anon_sym_sound_down] = ACTIONS(123),
    [anon_sym_mute] = ACTIONS(123),
    [anon_sym_play] = ACTIONS(123),
    [anon_sym_previous] = ACTIONS(123),
    [anon_sym_next] = ACTIONS(123),
    [anon_sym_rewind] = ACTIONS(123),
    [anon_sym_fast] = ACTIONS(123),
    [anon_sym_brightness_up] = ACTIONS(123),
    [anon_sym_brightness_down] = ACTIONS(123),
    [anon_sym_illumination_up] = ACTIONS(123),
    [anon_sym_illumination_down] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_fn] = ACTIONS(123),
    [anon_sym_cmd] = ACTIONS(123),
    [anon_sym_lcmd] = ACTIONS(123),
    [anon_sym_rcmd] = ACTIONS(123),
    [anon_sym_shift] = ACTIONS(123),
    [anon_sym_lshift] = ACTIONS(123),
    [anon_sym_rshift] = ACTIONS(123),
    [anon_sym_alt] = ACTIONS(123),
    [anon_sym_lalt] = ACTIONS(123),
    [anon_sym_ralt] = ACTIONS(123),
    [anon_sym_ctrl] = ACTIONS(123),
    [anon_sym_lctrl] = ACTIONS(123),
    [anon_sym_rctrl] = ACTIONS(123),
    [anon_sym_hyper] = ACTIONS(123),
    [anon_sym_meh] = ACTIONS(123),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(125),
    [anon_sym_DOTshell] = ACTIONS(125),
    [anon_sym_DOTblacklist] = ACTIONS(125),
    [anon_sym_DOTdefine] = ACTIONS(125),
    [aux_sym_mode_token1] = ACTIONS(127),
    [sym_literal] = ACTIONS(127),
    [aux_sym_keycode_token1] = ACTIONS(125),
    [anon_sym_return] = ACTIONS(127),
    [anon_sym_tab] = ACTIONS(127),
    [anon_sym_space] = ACTIONS(127),
    [anon_sym_backspace] = ACTIONS(127),
    [anon_sym_escape] = ACTIONS(127),
    [anon_sym_backtick] = ACTIONS(127),
    [anon_sym_delete] = ACTIONS(127),
    [anon_sym_home] = ACTIONS(127),
    [anon_sym_end] = ACTIONS(127),
    [anon_sym_pageup] = ACTIONS(127),
    [anon_sym_pagedown] = ACTIONS(127),
    [anon_sym_insert] = ACTIONS(127),
    [anon_sym_left] = ACTIONS(127),
    [anon_sym_right] = ACTIONS(127),
    [anon_sym_up] = ACTIONS(127),
    [anon_sym_down] = ACTIONS(127),
    [anon_sym_f1] = ACTIONS(127),
    [anon_sym_f2] = ACTIONS(127),
    [anon_sym_f3] = ACTIONS(127),
    [anon_sym_f4] = ACTIONS(127),
    [anon_sym_f5] = ACTIONS(127),
    [anon_sym_f6] = ACTIONS(127),
    [anon_sym_f7] = ACTIONS(127),
    [anon_sym_f8] = ACTIONS(127),
    [anon_sym_f9] = ACTIONS(127),
    [anon_sym_f10] = ACTIONS(127),
    [anon_sym_f11] = ACTIONS(127),
    [anon_sym_f12] = ACTIONS(127),
    [anon_sym_f13] = ACTIONS(127),
    [anon_sym_f14] = ACTIONS(127),
    [anon_sym_f15] = ACTIONS(127),
    [anon_sym_f16] = ACTIONS(127),
    [anon_sym_f17] = ACTIONS(127),
    [anon_sym_f18] = ACTIONS(127),
    [anon_sym_f19] = ACTIONS(127),
    [anon_sym_f20] = ACTIONS(127),
    [anon_sym_sound_up] = ACTIONS(127),
    [anon_sym_sound_down] = ACTIONS(127),
    [anon_sym_mute] = ACTIONS(127),
    [anon_sym_play] = ACTIONS(127),
    [anon_sym_previous] = ACTIONS(127),
    [anon_sym_next] = ACTIONS(127),
    [anon_sym_rewind] = ACTIONS(127),
    [anon_sym_fast] = ACTIONS(127),
    [anon_sym_brightness_up] = ACTIONS(127),
    [anon_sym_brightness_down] = ACTIONS(127),
    [anon_sym_illumination_up] = ACTIONS(127),
    [anon_sym_illumination_down] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_fn] = ACTIONS(127),
    [anon_sym_cmd] = ACTIONS(127),
    [anon_sym_lcmd] = ACTIONS(127),
    [anon_sym_rcmd] = ACTIONS(127),
    [anon_sym_shift] = ACTIONS(127),
    [anon_sym_lshift] = ACTIONS(127),
    [anon_sym_rshift] = ACTIONS(127),
    [anon_sym_alt] = ACTIONS(127),
    [anon_sym_lalt] = ACTIONS(127),
    [anon_sym_ralt] = ACTIONS(127),
    [anon_sym_ctrl] = ACTIONS(127),
    [anon_sym_lctrl] = ACTIONS(127),
    [anon_sym_rctrl] = ACTIONS(127),
    [anon_sym_hyper] = ACTIONS(127),
    [anon_sym_meh] = ACTIONS(127),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(129),
    [anon_sym_DOTshell] = ACTIONS(129),
    [anon_sym_DOTblacklist] = ACTIONS(129),
    [anon_sym_DOTdefine] = ACTIONS(129),
    [aux_sym_mode_token1] = ACTIONS(131),
    [sym_literal] = ACTIONS(131),
    [aux_sym_keycode_token1] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_tab] = ACTIONS(131),
    [anon_sym_space] = ACTIONS(131),
    [anon_sym_backspace] = ACTIONS(131),
    [anon_sym_escape] = ACTIONS(131),
    [anon_sym_backtick] = ACTIONS(131),
    [anon_sym_delete] = ACTIONS(131),
    [anon_sym_home] = ACTIONS(131),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_pageup] = ACTIONS(131),
    [anon_sym_pagedown] = ACTIONS(131),
    [anon_sym_insert] = ACTIONS(131),
    [anon_sym_left] = ACTIONS(131),
    [anon_sym_right] = ACTIONS(131),
    [anon_sym_up] = ACTIONS(131),
    [anon_sym_down] = ACTIONS(131),
    [anon_sym_f1] = ACTIONS(131),
    [anon_sym_f2] = ACTIONS(131),
    [anon_sym_f3] = ACTIONS(131),
    [anon_sym_f4] = ACTIONS(131),
    [anon_sym_f5] = ACTIONS(131),
    [anon_sym_f6] = ACTIONS(131),
    [anon_sym_f7] = ACTIONS(131),
    [anon_sym_f8] = ACTIONS(131),
    [anon_sym_f9] = ACTIONS(131),
    [anon_sym_f10] = ACTIONS(131),
    [anon_sym_f11] = ACTIONS(131),
    [anon_sym_f12] = ACTIONS(131),
    [anon_sym_f13] = ACTIONS(131),
    [anon_sym_f14] = ACTIONS(131),
    [anon_sym_f15] = ACTIONS(131),
    [anon_sym_f16] = ACTIONS(131),
    [anon_sym_f17] = ACTIONS(131),
    [anon_sym_f18] = ACTIONS(131),
    [anon_sym_f19] = ACTIONS(131),
    [anon_sym_f20] = ACTIONS(131),
    [anon_sym_sound_up] = ACTIONS(131),
    [anon_sym_sound_down] = ACTIONS(131),
    [anon_sym_mute] = ACTIONS(131),
    [anon_sym_play] = ACTIONS(131),
    [anon_sym_previous] = ACTIONS(131),
    [anon_sym_next] = ACTIONS(131),
    [anon_sym_rewind] = ACTIONS(131),
    [anon_sym_fast] = ACTIONS(131),
    [anon_sym_brightness_up] = ACTIONS(131),
    [anon_sym_brightness_down] = ACTIONS(131),
    [anon_sym_illumination_up] = ACTIONS(131),
    [anon_sym_illumination_down] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(129),
    [anon_sym_fn] = ACTIONS(131),
    [anon_sym_cmd] = ACTIONS(131),
    [anon_sym_lcmd] = ACTIONS(131),
    [anon_sym_rcmd] = ACTIONS(131),
    [anon_sym_shift] = ACTIONS(131),
    [anon_sym_lshift] = ACTIONS(131),
    [anon_sym_rshift] = ACTIONS(131),
    [anon_sym_alt] = ACTIONS(131),
    [anon_sym_lalt] = ACTIONS(131),
    [anon_sym_ralt] = ACTIONS(131),
    [anon_sym_ctrl] = ACTIONS(131),
    [anon_sym_lctrl] = ACTIONS(131),
    [anon_sym_rctrl] = ACTIONS(131),
    [anon_sym_hyper] = ACTIONS(131),
    [anon_sym_meh] = ACTIONS(131),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(133),
    [anon_sym_DOTshell] = ACTIONS(133),
    [anon_sym_DOTblacklist] = ACTIONS(133),
    [anon_sym_DOTdefine] = ACTIONS(133),
    [aux_sym_mode_token1] = ACTIONS(135),
    [sym_literal] = ACTIONS(135),
    [aux_sym_keycode_token1] = ACTIONS(133),
    [anon_sym_return] = ACTIONS(135),
    [anon_sym_tab] = ACTIONS(135),
    [anon_sym_space] = ACTIONS(135),
    [anon_sym_backspace] = ACTIONS(135),
    [anon_sym_escape] = ACTIONS(135),
    [anon_sym_backtick] = ACTIONS(135),
    [anon_sym_delete] = ACTIONS(135),
    [anon_sym_home] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_pageup] = ACTIONS(135),
    [anon_sym_pagedown] = ACTIONS(135),
    [anon_sym_insert] = ACTIONS(135),
    [anon_sym_left] = ACTIONS(135),
    [anon_sym_right] = ACTIONS(135),
    [anon_sym_up] = ACTIONS(135),
    [anon_sym_down] = ACTIONS(135),
    [anon_sym_f1] = ACTIONS(135),
    [anon_sym_f2] = ACTIONS(135),
    [anon_sym_f3] = ACTIONS(135),
    [anon_sym_f4] = ACTIONS(135),
    [anon_sym_f5] = ACTIONS(135),
    [anon_sym_f6] = ACTIONS(135),
    [anon_sym_f7] = ACTIONS(135),
    [anon_sym_f8] = ACTIONS(135),
    [anon_sym_f9] = ACTIONS(135),
    [anon_sym_f10] = ACTIONS(135),
    [anon_sym_f11] = ACTIONS(135),
    [anon_sym_f12] = ACTIONS(135),
    [anon_sym_f13] = ACTIONS(135),
    [anon_sym_f14] = ACTIONS(135),
    [anon_sym_f15] = ACTIONS(135),
    [anon_sym_f16] = ACTIONS(135),
    [anon_sym_f17] = ACTIONS(135),
    [anon_sym_f18] = ACTIONS(135),
    [anon_sym_f19] = ACTIONS(135),
    [anon_sym_f20] = ACTIONS(135),
    [anon_sym_sound_up] = ACTIONS(135),
    [anon_sym_sound_down] = ACTIONS(135),
    [anon_sym_mute] = ACTIONS(135),
    [anon_sym_play] = ACTIONS(135),
    [anon_sym_previous] = ACTIONS(135),
    [anon_sym_next] = ACTIONS(135),
    [anon_sym_rewind] = ACTIONS(135),
    [anon_sym_fast] = ACTIONS(135),
    [anon_sym_brightness_up] = ACTIONS(135),
    [anon_sym_brightness_down] = ACTIONS(135),
    [anon_sym_illumination_up] = ACTIONS(135),
    [anon_sym_illumination_down] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [anon_sym_fn] = ACTIONS(135),
    [anon_sym_cmd] = ACTIONS(135),
    [anon_sym_lcmd] = ACTIONS(135),
    [anon_sym_rcmd] = ACTIONS(135),
    [anon_sym_shift] = ACTIONS(135),
    [anon_sym_lshift] = ACTIONS(135),
    [anon_sym_rshift] = ACTIONS(135),
    [anon_sym_alt] = ACTIONS(135),
    [anon_sym_lalt] = ACTIONS(135),
    [anon_sym_ralt] = ACTIONS(135),
    [anon_sym_ctrl] = ACTIONS(135),
    [anon_sym_lctrl] = ACTIONS(135),
    [anon_sym_rctrl] = ACTIONS(135),
    [anon_sym_hyper] = ACTIONS(135),
    [anon_sym_meh] = ACTIONS(135),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(137),
    [anon_sym_DOTshell] = ACTIONS(137),
    [anon_sym_DOTblacklist] = ACTIONS(137),
    [anon_sym_DOTdefine] = ACTIONS(137),
    [aux_sym_mode_token1] = ACTIONS(139),
    [sym_literal] = ACTIONS(139),
    [aux_sym_keycode_token1] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_tab] = ACTIONS(139),
    [anon_sym_space] = ACTIONS(139),
    [anon_sym_backspace] = ACTIONS(139),
    [anon_sym_escape] = ACTIONS(139),
    [anon_sym_backtick] = ACTIONS(139),
    [anon_sym_delete] = ACTIONS(139),
    [anon_sym_home] = ACTIONS(139),
    [anon_sym_end] = ACTIONS(139),
    [anon_sym_pageup] = ACTIONS(139),
    [anon_sym_pagedown] = ACTIONS(139),
    [anon_sym_insert] = ACTIONS(139),
    [anon_sym_left] = ACTIONS(139),
    [anon_sym_right] = ACTIONS(139),
    [anon_sym_up] = ACTIONS(139),
    [anon_sym_down] = ACTIONS(139),
    [anon_sym_f1] = ACTIONS(139),
    [anon_sym_f2] = ACTIONS(139),
    [anon_sym_f3] = ACTIONS(139),
    [anon_sym_f4] = ACTIONS(139),
    [anon_sym_f5] = ACTIONS(139),
    [anon_sym_f6] = ACTIONS(139),
    [anon_sym_f7] = ACTIONS(139),
    [anon_sym_f8] = ACTIONS(139),
    [anon_sym_f9] = ACTIONS(139),
    [anon_sym_f10] = ACTIONS(139),
    [anon_sym_f11] = ACTIONS(139),
    [anon_sym_f12] = ACTIONS(139),
    [anon_sym_f13] = ACTIONS(139),
    [anon_sym_f14] = ACTIONS(139),
    [anon_sym_f15] = ACTIONS(139),
    [anon_sym_f16] = ACTIONS(139),
    [anon_sym_f17] = ACTIONS(139),
    [anon_sym_f18] = ACTIONS(139),
    [anon_sym_f19] = ACTIONS(139),
    [anon_sym_f20] = ACTIONS(139),
    [anon_sym_sound_up] = ACTIONS(139),
    [anon_sym_sound_down] = ACTIONS(139),
    [anon_sym_mute] = ACTIONS(139),
    [anon_sym_play] = ACTIONS(139),
    [anon_sym_previous] = ACTIONS(139),
    [anon_sym_next] = ACTIONS(139),
    [anon_sym_rewind] = ACTIONS(139),
    [anon_sym_fast] = ACTIONS(139),
    [anon_sym_brightness_up] = ACTIONS(139),
    [anon_sym_brightness_down] = ACTIONS(139),
    [anon_sym_illumination_up] = ACTIONS(139),
    [anon_sym_illumination_down] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(137),
    [anon_sym_fn] = ACTIONS(139),
    [anon_sym_cmd] = ACTIONS(139),
    [anon_sym_lcmd] = ACTIONS(139),
    [anon_sym_rcmd] = ACTIONS(139),
    [anon_sym_shift] = ACTIONS(139),
    [anon_sym_lshift] = ACTIONS(139),
    [anon_sym_rshift] = ACTIONS(139),
    [anon_sym_alt] = ACTIONS(139),
    [anon_sym_lalt] = ACTIONS(139),
    [anon_sym_ralt] = ACTIONS(139),
    [anon_sym_ctrl] = ACTIONS(139),
    [anon_sym_lctrl] = ACTIONS(139),
    [anon_sym_rctrl] = ACTIONS(139),
    [anon_sym_hyper] = ACTIONS(139),
    [anon_sym_meh] = ACTIONS(139),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(105),
    [anon_sym_DOTshell] = ACTIONS(105),
    [anon_sym_DOTblacklist] = ACTIONS(105),
    [anon_sym_DOTdefine] = ACTIONS(105),
    [aux_sym_mode_token1] = ACTIONS(109),
    [sym_literal] = ACTIONS(109),
    [aux_sym_keycode_token1] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_tab] = ACTIONS(109),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_backspace] = ACTIONS(109),
    [anon_sym_escape] = ACTIONS(109),
    [anon_sym_backtick] = ACTIONS(109),
    [anon_sym_delete] = ACTIONS(109),
    [anon_sym_home] = ACTIONS(109),
    [anon_sym_end] = ACTIONS(109),
    [anon_sym_pageup] = ACTIONS(109),
    [anon_sym_pagedown] = ACTIONS(109),
    [anon_sym_insert] = ACTIONS(109),
    [anon_sym_left] = ACTIONS(109),
    [anon_sym_right] = ACTIONS(109),
    [anon_sym_up] = ACTIONS(109),
    [anon_sym_down] = ACTIONS(109),
    [anon_sym_f1] = ACTIONS(109),
    [anon_sym_f2] = ACTIONS(109),
    [anon_sym_f3] = ACTIONS(109),
    [anon_sym_f4] = ACTIONS(109),
    [anon_sym_f5] = ACTIONS(109),
    [anon_sym_f6] = ACTIONS(109),
    [anon_sym_f7] = ACTIONS(109),
    [anon_sym_f8] = ACTIONS(109),
    [anon_sym_f9] = ACTIONS(109),
    [anon_sym_f10] = ACTIONS(109),
    [anon_sym_f11] = ACTIONS(109),
    [anon_sym_f12] = ACTIONS(109),
    [anon_sym_f13] = ACTIONS(109),
    [anon_sym_f14] = ACTIONS(109),
    [anon_sym_f15] = ACTIONS(109),
    [anon_sym_f16] = ACTIONS(109),
    [anon_sym_f17] = ACTIONS(109),
    [anon_sym_f18] = ACTIONS(109),
    [anon_sym_f19] = ACTIONS(109),
    [anon_sym_f20] = ACTIONS(109),
    [anon_sym_sound_up] = ACTIONS(109),
    [anon_sym_sound_down] = ACTIONS(109),
    [anon_sym_mute] = ACTIONS(109),
    [anon_sym_play] = ACTIONS(109),
    [anon_sym_previous] = ACTIONS(109),
    [anon_sym_next] = ACTIONS(109),
    [anon_sym_rewind] = ACTIONS(109),
    [anon_sym_fast] = ACTIONS(109),
    [anon_sym_brightness_up] = ACTIONS(109),
    [anon_sym_brightness_down] = ACTIONS(109),
    [anon_sym_illumination_up] = ACTIONS(109),
    [anon_sym_illumination_down] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(105),
    [anon_sym_fn] = ACTIONS(109),
    [anon_sym_cmd] = ACTIONS(109),
    [anon_sym_lcmd] = ACTIONS(109),
    [anon_sym_rcmd] = ACTIONS(109),
    [anon_sym_shift] = ACTIONS(109),
    [anon_sym_lshift] = ACTIONS(109),
    [anon_sym_rshift] = ACTIONS(109),
    [anon_sym_alt] = ACTIONS(109),
    [anon_sym_lalt] = ACTIONS(109),
    [anon_sym_ralt] = ACTIONS(109),
    [anon_sym_ctrl] = ACTIONS(109),
    [anon_sym_lctrl] = ACTIONS(109),
    [anon_sym_rctrl] = ACTIONS(109),
    [anon_sym_hyper] = ACTIONS(109),
    [anon_sym_meh] = ACTIONS(109),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(141),
    [anon_sym_DOTshell] = ACTIONS(141),
    [anon_sym_DOTblacklist] = ACTIONS(141),
    [anon_sym_DOTdefine] = ACTIONS(141),
    [aux_sym_mode_token1] = ACTIONS(143),
    [sym_literal] = ACTIONS(143),
    [aux_sym_keycode_token1] = ACTIONS(141),
    [anon_sym_return] = ACTIONS(143),
    [anon_sym_tab] = ACTIONS(143),
    [anon_sym_space] = ACTIONS(143),
    [anon_sym_backspace] = ACTIONS(143),
    [anon_sym_escape] = ACTIONS(143),
    [anon_sym_backtick] = ACTIONS(143),
    [anon_sym_delete] = ACTIONS(143),
    [anon_sym_home] = ACTIONS(143),
    [anon_sym_end] = ACTIONS(143),
    [anon_sym_pageup] = ACTIONS(143),
    [anon_sym_pagedown] = ACTIONS(143),
    [anon_sym_insert] = ACTIONS(143),
    [anon_sym_left] = ACTIONS(143),
    [anon_sym_right] = ACTIONS(143),
    [anon_sym_up] = ACTIONS(143),
    [anon_sym_down] = ACTIONS(143),
    [anon_sym_f1] = ACTIONS(143),
    [anon_sym_f2] = ACTIONS(143),
    [anon_sym_f3] = ACTIONS(143),
    [anon_sym_f4] = ACTIONS(143),
    [anon_sym_f5] = ACTIONS(143),
    [anon_sym_f6] = ACTIONS(143),
    [anon_sym_f7] = ACTIONS(143),
    [anon_sym_f8] = ACTIONS(143),
    [anon_sym_f9] = ACTIONS(143),
    [anon_sym_f10] = ACTIONS(143),
    [anon_sym_f11] = ACTIONS(143),
    [anon_sym_f12] = ACTIONS(143),
    [anon_sym_f13] = ACTIONS(143),
    [anon_sym_f14] = ACTIONS(143),
    [anon_sym_f15] = ACTIONS(143),
    [anon_sym_f16] = ACTIONS(143),
    [anon_sym_f17] = ACTIONS(143),
    [anon_sym_f18] = ACTIONS(143),
    [anon_sym_f19] = ACTIONS(143),
    [anon_sym_f20] = ACTIONS(143),
    [anon_sym_sound_up] = ACTIONS(143),
    [anon_sym_sound_down] = ACTIONS(143),
    [anon_sym_mute] = ACTIONS(143),
    [anon_sym_play] = ACTIONS(143),
    [anon_sym_previous] = ACTIONS(143),
    [anon_sym_next] = ACTIONS(143),
    [anon_sym_rewind] = ACTIONS(143),
    [anon_sym_fast] = ACTIONS(143),
    [anon_sym_brightness_up] = ACTIONS(143),
    [anon_sym_brightness_down] = ACTIONS(143),
    [anon_sym_illumination_up] = ACTIONS(143),
    [anon_sym_illumination_down] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_fn] = ACTIONS(143),
    [anon_sym_cmd] = ACTIONS(143),
    [anon_sym_lcmd] = ACTIONS(143),
    [anon_sym_rcmd] = ACTIONS(143),
    [anon_sym_shift] = ACTIONS(143),
    [anon_sym_lshift] = ACTIONS(143),
    [anon_sym_rshift] = ACTIONS(143),
    [anon_sym_alt] = ACTIONS(143),
    [anon_sym_lalt] = ACTIONS(143),
    [anon_sym_ralt] = ACTIONS(143),
    [anon_sym_ctrl] = ACTIONS(143),
    [anon_sym_lctrl] = ACTIONS(143),
    [anon_sym_rctrl] = ACTIONS(143),
    [anon_sym_hyper] = ACTIONS(143),
    [anon_sym_meh] = ACTIONS(143),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(145),
    [anon_sym_DOTshell] = ACTIONS(145),
    [anon_sym_DOTblacklist] = ACTIONS(145),
    [anon_sym_DOTdefine] = ACTIONS(145),
    [aux_sym_mode_token1] = ACTIONS(147),
    [sym_literal] = ACTIONS(147),
    [aux_sym_keycode_token1] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_tab] = ACTIONS(147),
    [anon_sym_space] = ACTIONS(147),
    [anon_sym_backspace] = ACTIONS(147),
    [anon_sym_escape] = ACTIONS(147),
    [anon_sym_backtick] = ACTIONS(147),
    [anon_sym_delete] = ACTIONS(147),
    [anon_sym_home] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(147),
    [anon_sym_pageup] = ACTIONS(147),
    [anon_sym_pagedown] = ACTIONS(147),
    [anon_sym_insert] = ACTIONS(147),
    [anon_sym_left] = ACTIONS(147),
    [anon_sym_right] = ACTIONS(147),
    [anon_sym_up] = ACTIONS(147),
    [anon_sym_down] = ACTIONS(147),
    [anon_sym_f1] = ACTIONS(147),
    [anon_sym_f2] = ACTIONS(147),
    [anon_sym_f3] = ACTIONS(147),
    [anon_sym_f4] = ACTIONS(147),
    [anon_sym_f5] = ACTIONS(147),
    [anon_sym_f6] = ACTIONS(147),
    [anon_sym_f7] = ACTIONS(147),
    [anon_sym_f8] = ACTIONS(147),
    [anon_sym_f9] = ACTIONS(147),
    [anon_sym_f10] = ACTIONS(147),
    [anon_sym_f11] = ACTIONS(147),
    [anon_sym_f12] = ACTIONS(147),
    [anon_sym_f13] = ACTIONS(147),
    [anon_sym_f14] = ACTIONS(147),
    [anon_sym_f15] = ACTIONS(147),
    [anon_sym_f16] = ACTIONS(147),
    [anon_sym_f17] = ACTIONS(147),
    [anon_sym_f18] = ACTIONS(147),
    [anon_sym_f19] = ACTIONS(147),
    [anon_sym_f20] = ACTIONS(147),
    [anon_sym_sound_up] = ACTIONS(147),
    [anon_sym_sound_down] = ACTIONS(147),
    [anon_sym_mute] = ACTIONS(147),
    [anon_sym_play] = ACTIONS(147),
    [anon_sym_previous] = ACTIONS(147),
    [anon_sym_next] = ACTIONS(147),
    [anon_sym_rewind] = ACTIONS(147),
    [anon_sym_fast] = ACTIONS(147),
    [anon_sym_brightness_up] = ACTIONS(147),
    [anon_sym_brightness_down] = ACTIONS(147),
    [anon_sym_illumination_up] = ACTIONS(147),
    [anon_sym_illumination_down] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_fn] = ACTIONS(147),
    [anon_sym_cmd] = ACTIONS(147),
    [anon_sym_lcmd] = ACTIONS(147),
    [anon_sym_rcmd] = ACTIONS(147),
    [anon_sym_shift] = ACTIONS(147),
    [anon_sym_lshift] = ACTIONS(147),
    [anon_sym_rshift] = ACTIONS(147),
    [anon_sym_alt] = ACTIONS(147),
    [anon_sym_lalt] = ACTIONS(147),
    [anon_sym_ralt] = ACTIONS(147),
    [anon_sym_ctrl] = ACTIONS(147),
    [anon_sym_lctrl] = ACTIONS(147),
    [anon_sym_rctrl] = ACTIONS(147),
    [anon_sym_hyper] = ACTIONS(147),
    [anon_sym_meh] = ACTIONS(147),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(149),
    [anon_sym_DOTshell] = ACTIONS(149),
    [anon_sym_DOTblacklist] = ACTIONS(149),
    [anon_sym_DOTdefine] = ACTIONS(149),
    [aux_sym_mode_token1] = ACTIONS(151),
    [sym_literal] = ACTIONS(151),
    [aux_sym_keycode_token1] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(151),
    [anon_sym_tab] = ACTIONS(151),
    [anon_sym_space] = ACTIONS(151),
    [anon_sym_backspace] = ACTIONS(151),
    [anon_sym_escape] = ACTIONS(151),
    [anon_sym_backtick] = ACTIONS(151),
    [anon_sym_delete] = ACTIONS(151),
    [anon_sym_home] = ACTIONS(151),
    [anon_sym_end] = ACTIONS(151),
    [anon_sym_pageup] = ACTIONS(151),
    [anon_sym_pagedown] = ACTIONS(151),
    [anon_sym_insert] = ACTIONS(151),
    [anon_sym_left] = ACTIONS(151),
    [anon_sym_right] = ACTIONS(151),
    [anon_sym_up] = ACTIONS(151),
    [anon_sym_down] = ACTIONS(151),
    [anon_sym_f1] = ACTIONS(151),
    [anon_sym_f2] = ACTIONS(151),
    [anon_sym_f3] = ACTIONS(151),
    [anon_sym_f4] = ACTIONS(151),
    [anon_sym_f5] = ACTIONS(151),
    [anon_sym_f6] = ACTIONS(151),
    [anon_sym_f7] = ACTIONS(151),
    [anon_sym_f8] = ACTIONS(151),
    [anon_sym_f9] = ACTIONS(151),
    [anon_sym_f10] = ACTIONS(151),
    [anon_sym_f11] = ACTIONS(151),
    [anon_sym_f12] = ACTIONS(151),
    [anon_sym_f13] = ACTIONS(151),
    [anon_sym_f14] = ACTIONS(151),
    [anon_sym_f15] = ACTIONS(151),
    [anon_sym_f16] = ACTIONS(151),
    [anon_sym_f17] = ACTIONS(151),
    [anon_sym_f18] = ACTIONS(151),
    [anon_sym_f19] = ACTIONS(151),
    [anon_sym_f20] = ACTIONS(151),
    [anon_sym_sound_up] = ACTIONS(151),
    [anon_sym_sound_down] = ACTIONS(151),
    [anon_sym_mute] = ACTIONS(151),
    [anon_sym_play] = ACTIONS(151),
    [anon_sym_previous] = ACTIONS(151),
    [anon_sym_next] = ACTIONS(151),
    [anon_sym_rewind] = ACTIONS(151),
    [anon_sym_fast] = ACTIONS(151),
    [anon_sym_brightness_up] = ACTIONS(151),
    [anon_sym_brightness_down] = ACTIONS(151),
    [anon_sym_illumination_up] = ACTIONS(151),
    [anon_sym_illumination_down] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(149),
    [anon_sym_fn] = ACTIONS(151),
    [anon_sym_cmd] = ACTIONS(151),
    [anon_sym_lcmd] = ACTIONS(151),
    [anon_sym_rcmd] = ACTIONS(151),
    [anon_sym_shift] = ACTIONS(151),
    [anon_sym_lshift] = ACTIONS(151),
    [anon_sym_rshift] = ACTIONS(151),
    [anon_sym_alt] = ACTIONS(151),
    [anon_sym_lalt] = ACTIONS(151),
    [anon_sym_ralt] = ACTIONS(151),
    [anon_sym_ctrl] = ACTIONS(151),
    [anon_sym_lctrl] = ACTIONS(151),
    [anon_sym_rctrl] = ACTIONS(151),
    [anon_sym_hyper] = ACTIONS(151),
    [anon_sym_meh] = ACTIONS(151),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(153),
    [anon_sym_DOTshell] = ACTIONS(153),
    [anon_sym_DOTblacklist] = ACTIONS(153),
    [anon_sym_DOTdefine] = ACTIONS(153),
    [aux_sym_mode_token1] = ACTIONS(155),
    [sym_literal] = ACTIONS(155),
    [aux_sym_keycode_token1] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(155),
    [anon_sym_tab] = ACTIONS(155),
    [anon_sym_space] = ACTIONS(155),
    [anon_sym_backspace] = ACTIONS(155),
    [anon_sym_escape] = ACTIONS(155),
    [anon_sym_backtick] = ACTIONS(155),
    [anon_sym_delete] = ACTIONS(155),
    [anon_sym_home] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_pageup] = ACTIONS(155),
    [anon_sym_pagedown] = ACTIONS(155),
    [anon_sym_insert] = ACTIONS(155),
    [anon_sym_left] = ACTIONS(155),
    [anon_sym_right] = ACTIONS(155),
    [anon_sym_up] = ACTIONS(155),
    [anon_sym_down] = ACTIONS(155),
    [anon_sym_f1] = ACTIONS(155),
    [anon_sym_f2] = ACTIONS(155),
    [anon_sym_f3] = ACTIONS(155),
    [anon_sym_f4] = ACTIONS(155),
    [anon_sym_f5] = ACTIONS(155),
    [anon_sym_f6] = ACTIONS(155),
    [anon_sym_f7] = ACTIONS(155),
    [anon_sym_f8] = ACTIONS(155),
    [anon_sym_f9] = ACTIONS(155),
    [anon_sym_f10] = ACTIONS(155),
    [anon_sym_f11] = ACTIONS(155),
    [anon_sym_f12] = ACTIONS(155),
    [anon_sym_f13] = ACTIONS(155),
    [anon_sym_f14] = ACTIONS(155),
    [anon_sym_f15] = ACTIONS(155),
    [anon_sym_f16] = ACTIONS(155),
    [anon_sym_f17] = ACTIONS(155),
    [anon_sym_f18] = ACTIONS(155),
    [anon_sym_f19] = ACTIONS(155),
    [anon_sym_f20] = ACTIONS(155),
    [anon_sym_sound_up] = ACTIONS(155),
    [anon_sym_sound_down] = ACTIONS(155),
    [anon_sym_mute] = ACTIONS(155),
    [anon_sym_play] = ACTIONS(155),
    [anon_sym_previous] = ACTIONS(155),
    [anon_sym_next] = ACTIONS(155),
    [anon_sym_rewind] = ACTIONS(155),
    [anon_sym_fast] = ACTIONS(155),
    [anon_sym_brightness_up] = ACTIONS(155),
    [anon_sym_brightness_down] = ACTIONS(155),
    [anon_sym_illumination_up] = ACTIONS(155),
    [anon_sym_illumination_down] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(153),
    [anon_sym_fn] = ACTIONS(155),
    [anon_sym_cmd] = ACTIONS(155),
    [anon_sym_lcmd] = ACTIONS(155),
    [anon_sym_rcmd] = ACTIONS(155),
    [anon_sym_shift] = ACTIONS(155),
    [anon_sym_lshift] = ACTIONS(155),
    [anon_sym_rshift] = ACTIONS(155),
    [anon_sym_alt] = ACTIONS(155),
    [anon_sym_lalt] = ACTIONS(155),
    [anon_sym_ralt] = ACTIONS(155),
    [anon_sym_ctrl] = ACTIONS(155),
    [anon_sym_lctrl] = ACTIONS(155),
    [anon_sym_rctrl] = ACTIONS(155),
    [anon_sym_hyper] = ACTIONS(155),
    [anon_sym_meh] = ACTIONS(155),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(157),
    [anon_sym_DOTshell] = ACTIONS(157),
    [anon_sym_DOTblacklist] = ACTIONS(157),
    [anon_sym_DOTdefine] = ACTIONS(157),
    [aux_sym_mode_token1] = ACTIONS(159),
    [sym_literal] = ACTIONS(159),
    [aux_sym_keycode_token1] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(159),
    [anon_sym_tab] = ACTIONS(159),
    [anon_sym_space] = ACTIONS(159),
    [anon_sym_backspace] = ACTIONS(159),
    [anon_sym_escape] = ACTIONS(159),
    [anon_sym_backtick] = ACTIONS(159),
    [anon_sym_delete] = ACTIONS(159),
    [anon_sym_home] = ACTIONS(159),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_pageup] = ACTIONS(159),
    [anon_sym_pagedown] = ACTIONS(159),
    [anon_sym_insert] = ACTIONS(159),
    [anon_sym_left] = ACTIONS(159),
    [anon_sym_right] = ACTIONS(159),
    [anon_sym_up] = ACTIONS(159),
    [anon_sym_down] = ACTIONS(159),
    [anon_sym_f1] = ACTIONS(159),
    [anon_sym_f2] = ACTIONS(159),
    [anon_sym_f3] = ACTIONS(159),
    [anon_sym_f4] = ACTIONS(159),
    [anon_sym_f5] = ACTIONS(159),
    [anon_sym_f6] = ACTIONS(159),
    [anon_sym_f7] = ACTIONS(159),
    [anon_sym_f8] = ACTIONS(159),
    [anon_sym_f9] = ACTIONS(159),
    [anon_sym_f10] = ACTIONS(159),
    [anon_sym_f11] = ACTIONS(159),
    [anon_sym_f12] = ACTIONS(159),
    [anon_sym_f13] = ACTIONS(159),
    [anon_sym_f14] = ACTIONS(159),
    [anon_sym_f15] = ACTIONS(159),
    [anon_sym_f16] = ACTIONS(159),
    [anon_sym_f17] = ACTIONS(159),
    [anon_sym_f18] = ACTIONS(159),
    [anon_sym_f19] = ACTIONS(159),
    [anon_sym_f20] = ACTIONS(159),
    [anon_sym_sound_up] = ACTIONS(159),
    [anon_sym_sound_down] = ACTIONS(159),
    [anon_sym_mute] = ACTIONS(159),
    [anon_sym_play] = ACTIONS(159),
    [anon_sym_previous] = ACTIONS(159),
    [anon_sym_next] = ACTIONS(159),
    [anon_sym_rewind] = ACTIONS(159),
    [anon_sym_fast] = ACTIONS(159),
    [anon_sym_brightness_up] = ACTIONS(159),
    [anon_sym_brightness_down] = ACTIONS(159),
    [anon_sym_illumination_up] = ACTIONS(159),
    [anon_sym_illumination_down] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(157),
    [anon_sym_fn] = ACTIONS(159),
    [anon_sym_cmd] = ACTIONS(159),
    [anon_sym_lcmd] = ACTIONS(159),
    [anon_sym_rcmd] = ACTIONS(159),
    [anon_sym_shift] = ACTIONS(159),
    [anon_sym_lshift] = ACTIONS(159),
    [anon_sym_rshift] = ACTIONS(159),
    [anon_sym_alt] = ACTIONS(159),
    [anon_sym_lalt] = ACTIONS(159),
    [anon_sym_ralt] = ACTIONS(159),
    [anon_sym_ctrl] = ACTIONS(159),
    [anon_sym_lctrl] = ACTIONS(159),
    [anon_sym_rctrl] = ACTIONS(159),
    [anon_sym_hyper] = ACTIONS(159),
    [anon_sym_meh] = ACTIONS(159),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(161),
    [anon_sym_DOTshell] = ACTIONS(161),
    [anon_sym_DOTblacklist] = ACTIONS(161),
    [anon_sym_DOTdefine] = ACTIONS(161),
    [aux_sym_mode_token1] = ACTIONS(163),
    [sym_literal] = ACTIONS(163),
    [aux_sym_keycode_token1] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(163),
    [anon_sym_tab] = ACTIONS(163),
    [anon_sym_space] = ACTIONS(163),
    [anon_sym_backspace] = ACTIONS(163),
    [anon_sym_escape] = ACTIONS(163),
    [anon_sym_backtick] = ACTIONS(163),
    [anon_sym_delete] = ACTIONS(163),
    [anon_sym_home] = ACTIONS(163),
    [anon_sym_end] = ACTIONS(163),
    [anon_sym_pageup] = ACTIONS(163),
    [anon_sym_pagedown] = ACTIONS(163),
    [anon_sym_insert] = ACTIONS(163),
    [anon_sym_left] = ACTIONS(163),
    [anon_sym_right] = ACTIONS(163),
    [anon_sym_up] = ACTIONS(163),
    [anon_sym_down] = ACTIONS(163),
    [anon_sym_f1] = ACTIONS(163),
    [anon_sym_f2] = ACTIONS(163),
    [anon_sym_f3] = ACTIONS(163),
    [anon_sym_f4] = ACTIONS(163),
    [anon_sym_f5] = ACTIONS(163),
    [anon_sym_f6] = ACTIONS(163),
    [anon_sym_f7] = ACTIONS(163),
    [anon_sym_f8] = ACTIONS(163),
    [anon_sym_f9] = ACTIONS(163),
    [anon_sym_f10] = ACTIONS(163),
    [anon_sym_f11] = ACTIONS(163),
    [anon_sym_f12] = ACTIONS(163),
    [anon_sym_f13] = ACTIONS(163),
    [anon_sym_f14] = ACTIONS(163),
    [anon_sym_f15] = ACTIONS(163),
    [anon_sym_f16] = ACTIONS(163),
    [anon_sym_f17] = ACTIONS(163),
    [anon_sym_f18] = ACTIONS(163),
    [anon_sym_f19] = ACTIONS(163),
    [anon_sym_f20] = ACTIONS(163),
    [anon_sym_sound_up] = ACTIONS(163),
    [anon_sym_sound_down] = ACTIONS(163),
    [anon_sym_mute] = ACTIONS(163),
    [anon_sym_play] = ACTIONS(163),
    [anon_sym_previous] = ACTIONS(163),
    [anon_sym_next] = ACTIONS(163),
    [anon_sym_rewind] = ACTIONS(163),
    [anon_sym_fast] = ACTIONS(163),
    [anon_sym_brightness_up] = ACTIONS(163),
    [anon_sym_brightness_down] = ACTIONS(163),
    [anon_sym_illumination_up] = ACTIONS(163),
    [anon_sym_illumination_down] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(161),
    [anon_sym_fn] = ACTIONS(163),
    [anon_sym_cmd] = ACTIONS(163),
    [anon_sym_lcmd] = ACTIONS(163),
    [anon_sym_rcmd] = ACTIONS(163),
    [anon_sym_shift] = ACTIONS(163),
    [anon_sym_lshift] = ACTIONS(163),
    [anon_sym_rshift] = ACTIONS(163),
    [anon_sym_alt] = ACTIONS(163),
    [anon_sym_lalt] = ACTIONS(163),
    [anon_sym_ralt] = ACTIONS(163),
    [anon_sym_ctrl] = ACTIONS(163),
    [anon_sym_lctrl] = ACTIONS(163),
    [anon_sym_rctrl] = ACTIONS(163),
    [anon_sym_hyper] = ACTIONS(163),
    [anon_sym_meh] = ACTIONS(163),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(165),
    [anon_sym_DOTshell] = ACTIONS(165),
    [anon_sym_DOTblacklist] = ACTIONS(165),
    [anon_sym_DOTdefine] = ACTIONS(165),
    [aux_sym_mode_token1] = ACTIONS(167),
    [sym_literal] = ACTIONS(167),
    [aux_sym_keycode_token1] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(167),
    [anon_sym_tab] = ACTIONS(167),
    [anon_sym_space] = ACTIONS(167),
    [anon_sym_backspace] = ACTIONS(167),
    [anon_sym_escape] = ACTIONS(167),
    [anon_sym_backtick] = ACTIONS(167),
    [anon_sym_delete] = ACTIONS(167),
    [anon_sym_home] = ACTIONS(167),
    [anon_sym_end] = ACTIONS(167),
    [anon_sym_pageup] = ACTIONS(167),
    [anon_sym_pagedown] = ACTIONS(167),
    [anon_sym_insert] = ACTIONS(167),
    [anon_sym_left] = ACTIONS(167),
    [anon_sym_right] = ACTIONS(167),
    [anon_sym_up] = ACTIONS(167),
    [anon_sym_down] = ACTIONS(167),
    [anon_sym_f1] = ACTIONS(167),
    [anon_sym_f2] = ACTIONS(167),
    [anon_sym_f3] = ACTIONS(167),
    [anon_sym_f4] = ACTIONS(167),
    [anon_sym_f5] = ACTIONS(167),
    [anon_sym_f6] = ACTIONS(167),
    [anon_sym_f7] = ACTIONS(167),
    [anon_sym_f8] = ACTIONS(167),
    [anon_sym_f9] = ACTIONS(167),
    [anon_sym_f10] = ACTIONS(167),
    [anon_sym_f11] = ACTIONS(167),
    [anon_sym_f12] = ACTIONS(167),
    [anon_sym_f13] = ACTIONS(167),
    [anon_sym_f14] = ACTIONS(167),
    [anon_sym_f15] = ACTIONS(167),
    [anon_sym_f16] = ACTIONS(167),
    [anon_sym_f17] = ACTIONS(167),
    [anon_sym_f18] = ACTIONS(167),
    [anon_sym_f19] = ACTIONS(167),
    [anon_sym_f20] = ACTIONS(167),
    [anon_sym_sound_up] = ACTIONS(167),
    [anon_sym_sound_down] = ACTIONS(167),
    [anon_sym_mute] = ACTIONS(167),
    [anon_sym_play] = ACTIONS(167),
    [anon_sym_previous] = ACTIONS(167),
    [anon_sym_next] = ACTIONS(167),
    [anon_sym_rewind] = ACTIONS(167),
    [anon_sym_fast] = ACTIONS(167),
    [anon_sym_brightness_up] = ACTIONS(167),
    [anon_sym_brightness_down] = ACTIONS(167),
    [anon_sym_illumination_up] = ACTIONS(167),
    [anon_sym_illumination_down] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(165),
    [anon_sym_fn] = ACTIONS(167),
    [anon_sym_cmd] = ACTIONS(167),
    [anon_sym_lcmd] = ACTIONS(167),
    [anon_sym_rcmd] = ACTIONS(167),
    [anon_sym_shift] = ACTIONS(167),
    [anon_sym_lshift] = ACTIONS(167),
    [anon_sym_rshift] = ACTIONS(167),
    [anon_sym_alt] = ACTIONS(167),
    [anon_sym_lalt] = ACTIONS(167),
    [anon_sym_ralt] = ACTIONS(167),
    [anon_sym_ctrl] = ACTIONS(167),
    [anon_sym_lctrl] = ACTIONS(167),
    [anon_sym_rctrl] = ACTIONS(167),
    [anon_sym_hyper] = ACTIONS(167),
    [anon_sym_meh] = ACTIONS(167),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(169),
    [anon_sym_DOTshell] = ACTIONS(169),
    [anon_sym_DOTblacklist] = ACTIONS(169),
    [anon_sym_DOTdefine] = ACTIONS(169),
    [aux_sym_mode_token1] = ACTIONS(171),
    [sym_literal] = ACTIONS(171),
    [aux_sym_keycode_token1] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(171),
    [anon_sym_tab] = ACTIONS(171),
    [anon_sym_space] = ACTIONS(171),
    [anon_sym_backspace] = ACTIONS(171),
    [anon_sym_escape] = ACTIONS(171),
    [anon_sym_backtick] = ACTIONS(171),
    [anon_sym_delete] = ACTIONS(171),
    [anon_sym_home] = ACTIONS(171),
    [anon_sym_end] = ACTIONS(171),
    [anon_sym_pageup] = ACTIONS(171),
    [anon_sym_pagedown] = ACTIONS(171),
    [anon_sym_insert] = ACTIONS(171),
    [anon_sym_left] = ACTIONS(171),
    [anon_sym_right] = ACTIONS(171),
    [anon_sym_up] = ACTIONS(171),
    [anon_sym_down] = ACTIONS(171),
    [anon_sym_f1] = ACTIONS(171),
    [anon_sym_f2] = ACTIONS(171),
    [anon_sym_f3] = ACTIONS(171),
    [anon_sym_f4] = ACTIONS(171),
    [anon_sym_f5] = ACTIONS(171),
    [anon_sym_f6] = ACTIONS(171),
    [anon_sym_f7] = ACTIONS(171),
    [anon_sym_f8] = ACTIONS(171),
    [anon_sym_f9] = ACTIONS(171),
    [anon_sym_f10] = ACTIONS(171),
    [anon_sym_f11] = ACTIONS(171),
    [anon_sym_f12] = ACTIONS(171),
    [anon_sym_f13] = ACTIONS(171),
    [anon_sym_f14] = ACTIONS(171),
    [anon_sym_f15] = ACTIONS(171),
    [anon_sym_f16] = ACTIONS(171),
    [anon_sym_f17] = ACTIONS(171),
    [anon_sym_f18] = ACTIONS(171),
    [anon_sym_f19] = ACTIONS(171),
    [anon_sym_f20] = ACTIONS(171),
    [anon_sym_sound_up] = ACTIONS(171),
    [anon_sym_sound_down] = ACTIONS(171),
    [anon_sym_mute] = ACTIONS(171),
    [anon_sym_play] = ACTIONS(171),
    [anon_sym_previous] = ACTIONS(171),
    [anon_sym_next] = ACTIONS(171),
    [anon_sym_rewind] = ACTIONS(171),
    [anon_sym_fast] = ACTIONS(171),
    [anon_sym_brightness_up] = ACTIONS(171),
    [anon_sym_brightness_down] = ACTIONS(171),
    [anon_sym_illumination_up] = ACTIONS(171),
    [anon_sym_illumination_down] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [anon_sym_fn] = ACTIONS(171),
    [anon_sym_cmd] = ACTIONS(171),
    [anon_sym_lcmd] = ACTIONS(171),
    [anon_sym_rcmd] = ACTIONS(171),
    [anon_sym_shift] = ACTIONS(171),
    [anon_sym_lshift] = ACTIONS(171),
    [anon_sym_rshift] = ACTIONS(171),
    [anon_sym_alt] = ACTIONS(171),
    [anon_sym_lalt] = ACTIONS(171),
    [anon_sym_ralt] = ACTIONS(171),
    [anon_sym_ctrl] = ACTIONS(171),
    [anon_sym_lctrl] = ACTIONS(171),
    [anon_sym_rctrl] = ACTIONS(171),
    [anon_sym_hyper] = ACTIONS(171),
    [anon_sym_meh] = ACTIONS(171),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(173),
    [anon_sym_DOTshell] = ACTIONS(173),
    [anon_sym_DOTblacklist] = ACTIONS(173),
    [anon_sym_DOTdefine] = ACTIONS(173),
    [aux_sym_mode_token1] = ACTIONS(175),
    [sym_literal] = ACTIONS(175),
    [aux_sym_keycode_token1] = ACTIONS(173),
    [anon_sym_return] = ACTIONS(175),
    [anon_sym_tab] = ACTIONS(175),
    [anon_sym_space] = ACTIONS(175),
    [anon_sym_backspace] = ACTIONS(175),
    [anon_sym_escape] = ACTIONS(175),
    [anon_sym_backtick] = ACTIONS(175),
    [anon_sym_delete] = ACTIONS(175),
    [anon_sym_home] = ACTIONS(175),
    [anon_sym_end] = ACTIONS(175),
    [anon_sym_pageup] = ACTIONS(175),
    [anon_sym_pagedown] = ACTIONS(175),
    [anon_sym_insert] = ACTIONS(175),
    [anon_sym_left] = ACTIONS(175),
    [anon_sym_right] = ACTIONS(175),
    [anon_sym_up] = ACTIONS(175),
    [anon_sym_down] = ACTIONS(175),
    [anon_sym_f1] = ACTIONS(175),
    [anon_sym_f2] = ACTIONS(175),
    [anon_sym_f3] = ACTIONS(175),
    [anon_sym_f4] = ACTIONS(175),
    [anon_sym_f5] = ACTIONS(175),
    [anon_sym_f6] = ACTIONS(175),
    [anon_sym_f7] = ACTIONS(175),
    [anon_sym_f8] = ACTIONS(175),
    [anon_sym_f9] = ACTIONS(175),
    [anon_sym_f10] = ACTIONS(175),
    [anon_sym_f11] = ACTIONS(175),
    [anon_sym_f12] = ACTIONS(175),
    [anon_sym_f13] = ACTIONS(175),
    [anon_sym_f14] = ACTIONS(175),
    [anon_sym_f15] = ACTIONS(175),
    [anon_sym_f16] = ACTIONS(175),
    [anon_sym_f17] = ACTIONS(175),
    [anon_sym_f18] = ACTIONS(175),
    [anon_sym_f19] = ACTIONS(175),
    [anon_sym_f20] = ACTIONS(175),
    [anon_sym_sound_up] = ACTIONS(175),
    [anon_sym_sound_down] = ACTIONS(175),
    [anon_sym_mute] = ACTIONS(175),
    [anon_sym_play] = ACTIONS(175),
    [anon_sym_previous] = ACTIONS(175),
    [anon_sym_next] = ACTIONS(175),
    [anon_sym_rewind] = ACTIONS(175),
    [anon_sym_fast] = ACTIONS(175),
    [anon_sym_brightness_up] = ACTIONS(175),
    [anon_sym_brightness_down] = ACTIONS(175),
    [anon_sym_illumination_up] = ACTIONS(175),
    [anon_sym_illumination_down] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [anon_sym_fn] = ACTIONS(175),
    [anon_sym_cmd] = ACTIONS(175),
    [anon_sym_lcmd] = ACTIONS(175),
    [anon_sym_rcmd] = ACTIONS(175),
    [anon_sym_shift] = ACTIONS(175),
    [anon_sym_lshift] = ACTIONS(175),
    [anon_sym_rshift] = ACTIONS(175),
    [anon_sym_alt] = ACTIONS(175),
    [anon_sym_lalt] = ACTIONS(175),
    [anon_sym_ralt] = ACTIONS(175),
    [anon_sym_ctrl] = ACTIONS(175),
    [anon_sym_lctrl] = ACTIONS(175),
    [anon_sym_rctrl] = ACTIONS(175),
    [anon_sym_hyper] = ACTIONS(175),
    [anon_sym_meh] = ACTIONS(175),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(177),
    [anon_sym_DOTshell] = ACTIONS(177),
    [anon_sym_DOTblacklist] = ACTIONS(177),
    [anon_sym_DOTdefine] = ACTIONS(177),
    [aux_sym_mode_token1] = ACTIONS(179),
    [sym_literal] = ACTIONS(179),
    [aux_sym_keycode_token1] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(179),
    [anon_sym_tab] = ACTIONS(179),
    [anon_sym_space] = ACTIONS(179),
    [anon_sym_backspace] = ACTIONS(179),
    [anon_sym_escape] = ACTIONS(179),
    [anon_sym_backtick] = ACTIONS(179),
    [anon_sym_delete] = ACTIONS(179),
    [anon_sym_home] = ACTIONS(179),
    [anon_sym_end] = ACTIONS(179),
    [anon_sym_pageup] = ACTIONS(179),
    [anon_sym_pagedown] = ACTIONS(179),
    [anon_sym_insert] = ACTIONS(179),
    [anon_sym_left] = ACTIONS(179),
    [anon_sym_right] = ACTIONS(179),
    [anon_sym_up] = ACTIONS(179),
    [anon_sym_down] = ACTIONS(179),
    [anon_sym_f1] = ACTIONS(179),
    [anon_sym_f2] = ACTIONS(179),
    [anon_sym_f3] = ACTIONS(179),
    [anon_sym_f4] = ACTIONS(179),
    [anon_sym_f5] = ACTIONS(179),
    [anon_sym_f6] = ACTIONS(179),
    [anon_sym_f7] = ACTIONS(179),
    [anon_sym_f8] = ACTIONS(179),
    [anon_sym_f9] = ACTIONS(179),
    [anon_sym_f10] = ACTIONS(179),
    [anon_sym_f11] = ACTIONS(179),
    [anon_sym_f12] = ACTIONS(179),
    [anon_sym_f13] = ACTIONS(179),
    [anon_sym_f14] = ACTIONS(179),
    [anon_sym_f15] = ACTIONS(179),
    [anon_sym_f16] = ACTIONS(179),
    [anon_sym_f17] = ACTIONS(179),
    [anon_sym_f18] = ACTIONS(179),
    [anon_sym_f19] = ACTIONS(179),
    [anon_sym_f20] = ACTIONS(179),
    [anon_sym_sound_up] = ACTIONS(179),
    [anon_sym_sound_down] = ACTIONS(179),
    [anon_sym_mute] = ACTIONS(179),
    [anon_sym_play] = ACTIONS(179),
    [anon_sym_previous] = ACTIONS(179),
    [anon_sym_next] = ACTIONS(179),
    [anon_sym_rewind] = ACTIONS(179),
    [anon_sym_fast] = ACTIONS(179),
    [anon_sym_brightness_up] = ACTIONS(179),
    [anon_sym_brightness_down] = ACTIONS(179),
    [anon_sym_illumination_up] = ACTIONS(179),
    [anon_sym_illumination_down] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [anon_sym_fn] = ACTIONS(179),
    [anon_sym_cmd] = ACTIONS(179),
    [anon_sym_lcmd] = ACTIONS(179),
    [anon_sym_rcmd] = ACTIONS(179),
    [anon_sym_shift] = ACTIONS(179),
    [anon_sym_lshift] = ACTIONS(179),
    [anon_sym_rshift] = ACTIONS(179),
    [anon_sym_alt] = ACTIONS(179),
    [anon_sym_lalt] = ACTIONS(179),
    [anon_sym_ralt] = ACTIONS(179),
    [anon_sym_ctrl] = ACTIONS(179),
    [anon_sym_lctrl] = ACTIONS(179),
    [anon_sym_rctrl] = ACTIONS(179),
    [anon_sym_hyper] = ACTIONS(179),
    [anon_sym_meh] = ACTIONS(179),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(181),
    [anon_sym_DOTshell] = ACTIONS(181),
    [anon_sym_DOTblacklist] = ACTIONS(181),
    [anon_sym_DOTdefine] = ACTIONS(181),
    [aux_sym_mode_token1] = ACTIONS(183),
    [sym_literal] = ACTIONS(183),
    [aux_sym_keycode_token1] = ACTIONS(181),
    [anon_sym_return] = ACTIONS(183),
    [anon_sym_tab] = ACTIONS(183),
    [anon_sym_space] = ACTIONS(183),
    [anon_sym_backspace] = ACTIONS(183),
    [anon_sym_escape] = ACTIONS(183),
    [anon_sym_backtick] = ACTIONS(183),
    [anon_sym_delete] = ACTIONS(183),
    [anon_sym_home] = ACTIONS(183),
    [anon_sym_end] = ACTIONS(183),
    [anon_sym_pageup] = ACTIONS(183),
    [anon_sym_pagedown] = ACTIONS(183),
    [anon_sym_insert] = ACTIONS(183),
    [anon_sym_left] = ACTIONS(183),
    [anon_sym_right] = ACTIONS(183),
    [anon_sym_up] = ACTIONS(183),
    [anon_sym_down] = ACTIONS(183),
    [anon_sym_f1] = ACTIONS(183),
    [anon_sym_f2] = ACTIONS(183),
    [anon_sym_f3] = ACTIONS(183),
    [anon_sym_f4] = ACTIONS(183),
    [anon_sym_f5] = ACTIONS(183),
    [anon_sym_f6] = ACTIONS(183),
    [anon_sym_f7] = ACTIONS(183),
    [anon_sym_f8] = ACTIONS(183),
    [anon_sym_f9] = ACTIONS(183),
    [anon_sym_f10] = ACTIONS(183),
    [anon_sym_f11] = ACTIONS(183),
    [anon_sym_f12] = ACTIONS(183),
    [anon_sym_f13] = ACTIONS(183),
    [anon_sym_f14] = ACTIONS(183),
    [anon_sym_f15] = ACTIONS(183),
    [anon_sym_f16] = ACTIONS(183),
    [anon_sym_f17] = ACTIONS(183),
    [anon_sym_f18] = ACTIONS(183),
    [anon_sym_f19] = ACTIONS(183),
    [anon_sym_f20] = ACTIONS(183),
    [anon_sym_sound_up] = ACTIONS(183),
    [anon_sym_sound_down] = ACTIONS(183),
    [anon_sym_mute] = ACTIONS(183),
    [anon_sym_play] = ACTIONS(183),
    [anon_sym_previous] = ACTIONS(183),
    [anon_sym_next] = ACTIONS(183),
    [anon_sym_rewind] = ACTIONS(183),
    [anon_sym_fast] = ACTIONS(183),
    [anon_sym_brightness_up] = ACTIONS(183),
    [anon_sym_brightness_down] = ACTIONS(183),
    [anon_sym_illumination_up] = ACTIONS(183),
    [anon_sym_illumination_down] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(183),
    [anon_sym_cmd] = ACTIONS(183),
    [anon_sym_lcmd] = ACTIONS(183),
    [anon_sym_rcmd] = ACTIONS(183),
    [anon_sym_shift] = ACTIONS(183),
    [anon_sym_lshift] = ACTIONS(183),
    [anon_sym_rshift] = ACTIONS(183),
    [anon_sym_alt] = ACTIONS(183),
    [anon_sym_lalt] = ACTIONS(183),
    [anon_sym_ralt] = ACTIONS(183),
    [anon_sym_ctrl] = ACTIONS(183),
    [anon_sym_lctrl] = ACTIONS(183),
    [anon_sym_rctrl] = ACTIONS(183),
    [anon_sym_hyper] = ACTIONS(183),
    [anon_sym_meh] = ACTIONS(183),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTload] = ACTIONS(185),
    [anon_sym_DOTshell] = ACTIONS(185),
    [anon_sym_DOTblacklist] = ACTIONS(185),
    [anon_sym_DOTdefine] = ACTIONS(185),
    [aux_sym_mode_token1] = ACTIONS(187),
    [sym_literal] = ACTIONS(187),
    [aux_sym_keycode_token1] = ACTIONS(185),
    [anon_sym_return] = ACTIONS(187),
    [anon_sym_tab] = ACTIONS(187),
    [anon_sym_space] = ACTIONS(187),
    [anon_sym_backspace] = ACTIONS(187),
    [anon_sym_escape] = ACTIONS(187),
    [anon_sym_backtick] = ACTIONS(187),
    [anon_sym_delete] = ACTIONS(187),
    [anon_sym_home] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_pageup] = ACTIONS(187),
    [anon_sym_pagedown] = ACTIONS(187),
    [anon_sym_insert] = ACTIONS(187),
    [anon_sym_left] = ACTIONS(187),
    [anon_sym_right] = ACTIONS(187),
    [anon_sym_up] = ACTIONS(187),
    [anon_sym_down] = ACTIONS(187),
    [anon_sym_f1] = ACTIONS(187),
    [anon_sym_f2] = ACTIONS(187),
    [anon_sym_f3] = ACTIONS(187),
    [anon_sym_f4] = ACTIONS(187),
    [anon_sym_f5] = ACTIONS(187),
    [anon_sym_f6] = ACTIONS(187),
    [anon_sym_f7] = ACTIONS(187),
    [anon_sym_f8] = ACTIONS(187),
    [anon_sym_f9] = ACTIONS(187),
    [anon_sym_f10] = ACTIONS(187),
    [anon_sym_f11] = ACTIONS(187),
    [anon_sym_f12] = ACTIONS(187),
    [anon_sym_f13] = ACTIONS(187),
    [anon_sym_f14] = ACTIONS(187),
    [anon_sym_f15] = ACTIONS(187),
    [anon_sym_f16] = ACTIONS(187),
    [anon_sym_f17] = ACTIONS(187),
    [anon_sym_f18] = ACTIONS(187),
    [anon_sym_f19] = ACTIONS(187),
    [anon_sym_f20] = ACTIONS(187),
    [anon_sym_sound_up] = ACTIONS(187),
    [anon_sym_sound_down] = ACTIONS(187),
    [anon_sym_mute] = ACTIONS(187),
    [anon_sym_play] = ACTIONS(187),
    [anon_sym_previous] = ACTIONS(187),
    [anon_sym_next] = ACTIONS(187),
    [anon_sym_rewind] = ACTIONS(187),
    [anon_sym_fast] = ACTIONS(187),
    [anon_sym_brightness_up] = ACTIONS(187),
    [anon_sym_brightness_down] = ACTIONS(187),
    [anon_sym_illumination_up] = ACTIONS(187),
    [anon_sym_illumination_down] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [anon_sym_fn] = ACTIONS(187),
    [anon_sym_cmd] = ACTIONS(187),
    [anon_sym_lcmd] = ACTIONS(187),
    [anon_sym_rcmd] = ACTIONS(187),
    [anon_sym_shift] = ACTIONS(187),
    [anon_sym_lshift] = ACTIONS(187),
    [anon_sym_rshift] = ACTIONS(187),
    [anon_sym_alt] = ACTIONS(187),
    [anon_sym_lalt] = ACTIONS(187),
    [anon_sym_ralt] = ACTIONS(187),
    [anon_sym_ctrl] = ACTIONS(187),
    [anon_sym_lctrl] = ACTIONS(187),
    [anon_sym_rctrl] = ACTIONS(187),
    [anon_sym_hyper] = ACTIONS(187),
    [anon_sym_meh] = ACTIONS(187),
  },
  [35] = {
    [sym_action] = STATE(29),
    [sym_keysym] = STATE(56),
    [sym_mod] = STATE(83),
    [sym_key] = STATE(57),
    [sym_keycode] = STATE(54),
    [sym_modifier_keyword] = STATE(81),
    [sym_comment] = ACTIONS(3),
    [sym_literal] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_tab] = ACTIONS(19),
    [anon_sym_space] = ACTIONS(19),
    [anon_sym_backspace] = ACTIONS(19),
    [anon_sym_escape] = ACTIONS(19),
    [anon_sym_backtick] = ACTIONS(19),
    [anon_sym_delete] = ACTIONS(19),
    [anon_sym_home] = ACTIONS(19),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_pageup] = ACTIONS(19),
    [anon_sym_pagedown] = ACTIONS(19),
    [anon_sym_insert] = ACTIONS(19),
    [anon_sym_left] = ACTIONS(19),
    [anon_sym_right] = ACTIONS(19),
    [anon_sym_up] = ACTIONS(19),
    [anon_sym_down] = ACTIONS(19),
    [anon_sym_f1] = ACTIONS(21),
    [anon_sym_f2] = ACTIONS(21),
    [anon_sym_f3] = ACTIONS(19),
    [anon_sym_f4] = ACTIONS(19),
    [anon_sym_f5] = ACTIONS(19),
    [anon_sym_f6] = ACTIONS(19),
    [anon_sym_f7] = ACTIONS(19),
    [anon_sym_f8] = ACTIONS(19),
    [anon_sym_f9] = ACTIONS(19),
    [anon_sym_f10] = ACTIONS(19),
    [anon_sym_f11] = ACTIONS(19),
    [anon_sym_f12] = ACTIONS(19),
    [anon_sym_f13] = ACTIONS(19),
    [anon_sym_f14] = ACTIONS(19),
    [anon_sym_f15] = ACTIONS(19),
    [anon_sym_f16] = ACTIONS(19),
    [anon_sym_f17] = ACTIONS(19),
    [anon_sym_f18] = ACTIONS(19),
    [anon_sym_f19] = ACTIONS(19),
    [anon_sym_f20] = ACTIONS(19),
    [anon_sym_sound_up] = ACTIONS(19),
    [anon_sym_sound_down] = ACTIONS(19),
    [anon_sym_mute] = ACTIONS(19),
    [anon_sym_play] = ACTIONS(19),
    [anon_sym_previous] = ACTIONS(19),
    [anon_sym_next] = ACTIONS(19),
    [anon_sym_rewind] = ACTIONS(19),
    [anon_sym_fast] = ACTIONS(19),
    [anon_sym_brightness_up] = ACTIONS(19),
    [anon_sym_brightness_down] = ACTIONS(19),
    [anon_sym_illumination_up] = ACTIONS(19),
    [anon_sym_illumination_down] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(189),
    [anon_sym_cmd] = ACTIONS(189),
    [anon_sym_lcmd] = ACTIONS(189),
    [anon_sym_rcmd] = ACTIONS(189),
    [anon_sym_shift] = ACTIONS(189),
    [anon_sym_lshift] = ACTIONS(189),
    [anon_sym_rshift] = ACTIONS(189),
    [anon_sym_alt] = ACTIONS(189),
    [anon_sym_lalt] = ACTIONS(189),
    [anon_sym_ralt] = ACTIONS(189),
    [anon_sym_ctrl] = ACTIONS(189),
    [anon_sym_lctrl] = ACTIONS(189),
    [anon_sym_rctrl] = ACTIONS(189),
    [anon_sym_hyper] = ACTIONS(189),
    [anon_sym_meh] = ACTIONS(189),
  },
  [36] = {
    [sym_keysym] = STATE(22),
    [sym_mod] = STATE(79),
    [sym_key] = STATE(30),
    [sym_keycode] = STATE(26),
    [sym_modifier_keyword] = STATE(81),
    [sym_comment] = ACTIONS(3),
    [sym_literal] = ACTIONS(191),
    [aux_sym_keycode_token1] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(193),
    [anon_sym_tab] = ACTIONS(193),
    [anon_sym_space] = ACTIONS(193),
    [anon_sym_backspace] = ACTIONS(193),
    [anon_sym_escape] = ACTIONS(193),
    [anon_sym_backtick] = ACTIONS(193),
    [anon_sym_delete] = ACTIONS(193),
    [anon_sym_home] = ACTIONS(193),
    [anon_sym_end] = ACTIONS(193),
    [anon_sym_pageup] = ACTIONS(193),
    [anon_sym_pagedown] = ACTIONS(193),
    [anon_sym_insert] = ACTIONS(193),
    [anon_sym_left] = ACTIONS(193),
    [anon_sym_right] = ACTIONS(193),
    [anon_sym_up] = ACTIONS(193),
    [anon_sym_down] = ACTIONS(193),
    [anon_sym_f1] = ACTIONS(195),
    [anon_sym_f2] = ACTIONS(195),
    [anon_sym_f3] = ACTIONS(193),
    [anon_sym_f4] = ACTIONS(193),
    [anon_sym_f5] = ACTIONS(193),
    [anon_sym_f6] = ACTIONS(193),
    [anon_sym_f7] = ACTIONS(193),
    [anon_sym_f8] = ACTIONS(193),
    [anon_sym_f9] = ACTIONS(193),
    [anon_sym_f10] = ACTIONS(193),
    [anon_sym_f11] = ACTIONS(193),
    [anon_sym_f12] = ACTIONS(193),
    [anon_sym_f13] = ACTIONS(193),
    [anon_sym_f14] = ACTIONS(193),
    [anon_sym_f15] = ACTIONS(193),
    [anon_sym_f16] = ACTIONS(193),
    [anon_sym_f17] = ACTIONS(193),
    [anon_sym_f18] = ACTIONS(193),
    [anon_sym_f19] = ACTIONS(193),
    [anon_sym_f20] = ACTIONS(193),
    [anon_sym_sound_up] = ACTIONS(193),
    [anon_sym_sound_down] = ACTIONS(193),
    [anon_sym_mute] = ACTIONS(193),
    [anon_sym_play] = ACTIONS(193),
    [anon_sym_previous] = ACTIONS(193),
    [anon_sym_next] = ACTIONS(193),
    [anon_sym_rewind] = ACTIONS(193),
    [anon_sym_fast] = ACTIONS(193),
    [anon_sym_brightness_up] = ACTIONS(193),
    [anon_sym_brightness_down] = ACTIONS(193),
    [anon_sym_illumination_up] = ACTIONS(193),
    [anon_sym_illumination_down] = ACTIONS(193),
    [anon_sym_fn] = ACTIONS(189),
    [anon_sym_cmd] = ACTIONS(189),
    [anon_sym_lcmd] = ACTIONS(189),
    [anon_sym_rcmd] = ACTIONS(189),
    [anon_sym_shift] = ACTIONS(189),
    [anon_sym_lshift] = ACTIONS(189),
    [anon_sym_rshift] = ACTIONS(189),
    [anon_sym_alt] = ACTIONS(189),
    [anon_sym_lalt] = ACTIONS(189),
    [anon_sym_ralt] = ACTIONS(189),
    [anon_sym_ctrl] = ACTIONS(189),
    [anon_sym_lctrl] = ACTIONS(189),
    [anon_sym_rctrl] = ACTIONS(189),
    [anon_sym_hyper] = ACTIONS(189),
    [anon_sym_meh] = ACTIONS(189),
  },
  [37] = {
    [sym_keysym] = STATE(16),
    [sym_mod] = STATE(79),
    [sym_key] = STATE(30),
    [sym_keycode] = STATE(26),
    [sym_modifier_keyword] = STATE(81),
    [sym_comment] = ACTIONS(3),
    [sym_literal] = ACTIONS(191),
    [aux_sym_keycode_token1] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(193),
    [anon_sym_tab] = ACTIONS(193),
    [anon_sym_space] = ACTIONS(193),
    [anon_sym_backspace] = ACTIONS(193),
    [anon_sym_escape] = ACTIONS(193),
    [anon_sym_backtick] = ACTIONS(193),
    [anon_sym_delete] = ACTIONS(193),
    [anon_sym_home] = ACTIONS(193),
    [anon_sym_end] = ACTIONS(193),
    [anon_sym_pageup] = ACTIONS(193),
    [anon_sym_pagedown] = ACTIONS(193),
    [anon_sym_insert] = ACTIONS(193),
    [anon_sym_left] = ACTIONS(193),
    [anon_sym_right] = ACTIONS(193),
    [anon_sym_up] = ACTIONS(193),
    [anon_sym_down] = ACTIONS(193),
    [anon_sym_f1] = ACTIONS(195),
    [anon_sym_f2] = ACTIONS(195),
    [anon_sym_f3] = ACTIONS(193),
    [anon_sym_f4] = ACTIONS(193),
    [anon_sym_f5] = ACTIONS(193),
    [anon_sym_f6] = ACTIONS(193),
    [anon_sym_f7] = ACTIONS(193),
    [anon_sym_f8] = ACTIONS(193),
    [anon_sym_f9] = ACTIONS(193),
    [anon_sym_f10] = ACTIONS(193),
    [anon_sym_f11] = ACTIONS(193),
    [anon_sym_f12] = ACTIONS(193),
    [anon_sym_f13] = ACTIONS(193),
    [anon_sym_f14] = ACTIONS(193),
    [anon_sym_f15] = ACTIONS(193),
    [anon_sym_f16] = ACTIONS(193),
    [anon_sym_f17] = ACTIONS(193),
    [anon_sym_f18] = ACTIONS(193),
    [anon_sym_f19] = ACTIONS(193),
    [anon_sym_f20] = ACTIONS(193),
    [anon_sym_sound_up] = ACTIONS(193),
    [anon_sym_sound_down] = ACTIONS(193),
    [anon_sym_mute] = ACTIONS(193),
    [anon_sym_play] = ACTIONS(193),
    [anon_sym_previous] = ACTIONS(193),
    [anon_sym_next] = ACTIONS(193),
    [anon_sym_rewind] = ACTIONS(193),
    [anon_sym_fast] = ACTIONS(193),
    [anon_sym_brightness_up] = ACTIONS(193),
    [anon_sym_brightness_down] = ACTIONS(193),
    [anon_sym_illumination_up] = ACTIONS(193),
    [anon_sym_illumination_down] = ACTIONS(193),
    [anon_sym_fn] = ACTIONS(189),
    [anon_sym_cmd] = ACTIONS(189),
    [anon_sym_lcmd] = ACTIONS(189),
    [anon_sym_rcmd] = ACTIONS(189),
    [anon_sym_shift] = ACTIONS(189),
    [anon_sym_lshift] = ACTIONS(189),
    [anon_sym_rshift] = ACTIONS(189),
    [anon_sym_alt] = ACTIONS(189),
    [anon_sym_lalt] = ACTIONS(189),
    [anon_sym_ralt] = ACTIONS(189),
    [anon_sym_ctrl] = ACTIONS(189),
    [anon_sym_lctrl] = ACTIONS(189),
    [anon_sym_rctrl] = ACTIONS(189),
    [anon_sym_hyper] = ACTIONS(189),
    [anon_sym_meh] = ACTIONS(189),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_literal,
    STATE(53), 1,
      sym_key,
    STATE(54), 1,
      sym_keycode,
    ACTIONS(21), 2,
      anon_sym_f1,
      anon_sym_f2,
    ACTIONS(19), 47,
      aux_sym_keycode_token1,
      anon_sym_return,
      anon_sym_tab,
      anon_sym_space,
      anon_sym_backspace,
      anon_sym_escape,
      anon_sym_backtick,
      anon_sym_delete,
      anon_sym_home,
      anon_sym_end,
      anon_sym_pageup,
      anon_sym_pagedown,
      anon_sym_insert,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_f3,
      anon_sym_f4,
      anon_sym_f5,
      anon_sym_f6,
      anon_sym_f7,
      anon_sym_f8,
      anon_sym_f9,
      anon_sym_f10,
      anon_sym_f11,
      anon_sym_f12,
      anon_sym_f13,
      anon_sym_f14,
      anon_sym_f15,
      anon_sym_f16,
      anon_sym_f17,
      anon_sym_f18,
      anon_sym_f19,
      anon_sym_f20,
      anon_sym_sound_up,
      anon_sym_sound_down,
      anon_sym_mute,
      anon_sym_play,
      anon_sym_previous,
      anon_sym_next,
      anon_sym_rewind,
      anon_sym_fast,
      anon_sym_brightness_up,
      anon_sym_brightness_down,
      anon_sym_illumination_up,
      anon_sym_illumination_down,
  [66] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_literal,
    STATE(26), 1,
      sym_keycode,
    STATE(33), 1,
      sym_key,
    ACTIONS(195), 2,
      anon_sym_f1,
      anon_sym_f2,
    ACTIONS(193), 47,
      aux_sym_keycode_token1,
      anon_sym_return,
      anon_sym_tab,
      anon_sym_space,
      anon_sym_backspace,
      anon_sym_escape,
      anon_sym_backtick,
      anon_sym_delete,
      anon_sym_home,
      anon_sym_end,
      anon_sym_pageup,
      anon_sym_pagedown,
      anon_sym_insert,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
      anon_sym_f3,
      anon_sym_f4,
      anon_sym_f5,
      anon_sym_f6,
      anon_sym_f7,
      anon_sym_f8,
      anon_sym_f9,
      anon_sym_f10,
      anon_sym_f11,
      anon_sym_f12,
      anon_sym_f13,
      anon_sym_f14,
      anon_sym_f15,
      anon_sym_f16,
      anon_sym_f17,
      anon_sym_f18,
      anon_sym_f19,
      anon_sym_f20,
      anon_sym_sound_up,
      anon_sym_sound_down,
      anon_sym_mute,
      anon_sym_play,
      anon_sym_previous,
      anon_sym_next,
      anon_sym_rewind,
      anon_sym_fast,
      anon_sym_brightness_up,
      anon_sym_brightness_down,
      anon_sym_illumination_up,
      anon_sym_illumination_down,
  [132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(78), 1,
      sym_mod,
    STATE(81), 1,
      sym_modifier_keyword,
    ACTIONS(189), 15,
      anon_sym_fn,
      anon_sym_cmd,
      anon_sym_lcmd,
      anon_sym_rcmd,
      anon_sym_shift,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_alt,
      anon_sym_lalt,
      anon_sym_ralt,
      anon_sym_ctrl,
      anon_sym_lctrl,
      anon_sym_rctrl,
      anon_sym_hyper,
      anon_sym_meh,
  [159] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(202), 1,
      sym_at_ident,
    ACTIONS(199), 2,
      sym_wildcard,
      sym_string,
    STATE(41), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
    STATE(88), 2,
      sym__proc_target,
      sym_group_ref,
  [181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_at_ident,
    STATE(95), 1,
      sym_proc_map_lst,
    ACTIONS(205), 2,
      sym_wildcard,
      sym_string,
    STATE(44), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
    STATE(88), 2,
      sym__proc_target,
      sym_group_ref,
  [203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_at_ident,
    STATE(101), 1,
      sym_proc_map_lst,
    ACTIONS(205), 2,
      sym_wildcard,
      sym_string,
    STATE(44), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
    STATE(88), 2,
      sym__proc_target,
      sym_group_ref,
  [225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_at_ident,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(205), 2,
      sym_wildcard,
      sym_string,
    STATE(41), 2,
      sym_proc_map,
      aux_sym_proc_map_lst_repeat1,
    STATE(88), 2,
      sym__proc_target,
      sym_group_ref,
  [247] = 6,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_at_ident,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(66), 1,
      aux_sym_command_repeat1,
    STATE(25), 3,
      sym__command_or_ref,
      sym_command_ref,
      sym_command,
  [268] = 6,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_at_ident,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(66), 1,
      aux_sym_command_repeat1,
    STATE(32), 3,
      sym__command_or_ref,
      sym_command_ref,
      sym_command,
  [289] = 6,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_at_ident,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(66), 1,
      aux_sym_command_repeat1,
    STATE(20), 3,
      sym__command_or_ref,
      sym_command_ref,
      sym_command,
  [310] = 6,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_at_ident,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(66), 1,
      aux_sym_command_repeat1,
    STATE(22), 3,
      sym__command_or_ref,
      sym_command_ref,
      sym_command,
  [331] = 6,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_at_ident,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(66), 1,
      aux_sym_command_repeat1,
    STATE(16), 3,
      sym__command_or_ref,
      sym_command_ref,
      sym_command,
  [352] = 6,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_at_ident,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(66), 1,
      aux_sym_command_repeat1,
    STATE(63), 3,
      sym__command_or_ref,
      sym_command_ref,
      sym_command,
  [373] = 6,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_at_ident,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(66), 1,
      aux_sym_command_repeat1,
    STATE(18), 3,
      sym__command_or_ref,
      sym_command_ref,
      sym_command,
  [394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_mode_token1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 2,
      aux_sym__ref_arg_token1,
      sym_string,
    STATE(75), 2,
      sym__ref_arg,
      sym_identifier,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 6,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 6,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 6,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [448] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_DASH_GT,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_TILDE,
  [470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_mode_token1,
    ACTIONS(237), 2,
      aux_sym__ref_arg_token1,
      sym_string,
    STATE(93), 2,
      sym__ref_arg,
      sym_identifier,
  [497] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      anon_sym_PIPE,
    ACTIONS(247), 1,
      anon_sym_TILDE,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [526] = 5,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(217), 1,
      aux_sym_command_token3,
    STATE(15), 1,
      sym_command,
    STATE(66), 1,
      aux_sym_command_repeat1,
  [542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 4,
      anon_sym_RBRACK,
      sym_wildcard,
      sym_at_ident,
      sym_string,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_RBRACK,
      sym_wildcard,
      sym_at_ident,
      sym_string,
  [562] = 4,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_command_token1,
    ACTIONS(258), 1,
      aux_sym_command_token3,
    STATE(64), 1,
      aux_sym_command_repeat1,
  [575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_modes_repeat1,
  [588] = 4,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_command_token1,
    ACTIONS(265), 1,
      aux_sym_command_token3,
    STATE(64), 1,
      aux_sym_command_repeat1,
  [601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_command_ref_repeat1,
  [614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      sym_string,
    STATE(68), 1,
      aux_sym_blacklist_repeat1,
  [627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      sym_string,
    STATE(70), 1,
      aux_sym_blacklist_repeat1,
  [640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_string,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_blacklist_repeat1,
  [653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_string,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_blacklist_repeat1,
  [666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_command_ref_repeat1,
  [679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LT,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_modes_repeat1,
  [692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_LT,
    STATE(65), 1,
      aux_sym_modes_repeat1,
  [705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_command_ref_repeat1,
  [718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_string,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_blacklist_repeat1,
  [731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_mode_token1,
    STATE(13), 1,
      sym_mode,
  [741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(303), 1,
      anon_sym_PLUS,
  [751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PLUS,
    ACTIONS(305), 1,
      anon_sym_DASH,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_COMMA,
  [769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      aux_sym_mode_token1,
    STATE(86), 1,
      sym_identifier,
  [787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PLUS,
    ACTIONS(309), 1,
      anon_sym_DASH,
  [797] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(258), 2,
      aux_sym_command_token1,
      aux_sym_command_token3,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_COLON,
      anon_sym_TILDE,
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_COLON,
  [823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_mode_token1,
    STATE(80), 1,
      sym_mode,
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_TILDE,
  [843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_RBRACK,
      sym_string,
  [851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_mode_token1,
    STATE(11), 1,
      sym_mode,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      aux_sym_mode_token1,
    STATE(14), 1,
      sym_mode,
  [871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
  [901] = 2,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym_command_token2,
  [908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LT,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_string,
  [922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
  [929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_string,
  [936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 66,
  [SMALL_STATE(40)] = 132,
  [SMALL_STATE(41)] = 159,
  [SMALL_STATE(42)] = 181,
  [SMALL_STATE(43)] = 203,
  [SMALL_STATE(44)] = 225,
  [SMALL_STATE(45)] = 247,
  [SMALL_STATE(46)] = 268,
  [SMALL_STATE(47)] = 289,
  [SMALL_STATE(48)] = 310,
  [SMALL_STATE(49)] = 331,
  [SMALL_STATE(50)] = 352,
  [SMALL_STATE(51)] = 373,
  [SMALL_STATE(52)] = 394,
  [SMALL_STATE(53)] = 412,
  [SMALL_STATE(54)] = 424,
  [SMALL_STATE(55)] = 436,
  [SMALL_STATE(56)] = 448,
  [SMALL_STATE(57)] = 470,
  [SMALL_STATE(58)] = 482,
  [SMALL_STATE(59)] = 497,
  [SMALL_STATE(60)] = 516,
  [SMALL_STATE(61)] = 526,
  [SMALL_STATE(62)] = 542,
  [SMALL_STATE(63)] = 552,
  [SMALL_STATE(64)] = 562,
  [SMALL_STATE(65)] = 575,
  [SMALL_STATE(66)] = 588,
  [SMALL_STATE(67)] = 601,
  [SMALL_STATE(68)] = 614,
  [SMALL_STATE(69)] = 627,
  [SMALL_STATE(70)] = 640,
  [SMALL_STATE(71)] = 653,
  [SMALL_STATE(72)] = 666,
  [SMALL_STATE(73)] = 679,
  [SMALL_STATE(74)] = 692,
  [SMALL_STATE(75)] = 705,
  [SMALL_STATE(76)] = 718,
  [SMALL_STATE(77)] = 731,
  [SMALL_STATE(78)] = 741,
  [SMALL_STATE(79)] = 751,
  [SMALL_STATE(80)] = 761,
  [SMALL_STATE(81)] = 769,
  [SMALL_STATE(82)] = 777,
  [SMALL_STATE(83)] = 787,
  [SMALL_STATE(84)] = 797,
  [SMALL_STATE(85)] = 805,
  [SMALL_STATE(86)] = 813,
  [SMALL_STATE(87)] = 823,
  [SMALL_STATE(88)] = 833,
  [SMALL_STATE(89)] = 843,
  [SMALL_STATE(90)] = 851,
  [SMALL_STATE(91)] = 861,
  [SMALL_STATE(92)] = 871,
  [SMALL_STATE(93)] = 879,
  [SMALL_STATE(94)] = 887,
  [SMALL_STATE(95)] = 894,
  [SMALL_STATE(96)] = 901,
  [SMALL_STATE(97)] = 908,
  [SMALL_STATE(98)] = 915,
  [SMALL_STATE(99)] = 922,
  [SMALL_STATE(100)] = 929,
  [SMALL_STATE(101)] = 936,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_ref, 1, 0, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_ref, 1, 0, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_ref, 5, 0, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_ref, 5, 0, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_ref, 4, 0, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_ref, 4, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_ref, 3, 0, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_ref, 3, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4, 0, 7),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 4, 0, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 4, 0, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 4, 0, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hotkey, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 5, 0, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 5, 0, 8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 2, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load, 2, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell, 2, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell, 2, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 6, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blacklist, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blacklist, 4, 0, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blacklist, 4, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotkey, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hotkey, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keysym, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keysym, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_decl, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_decl, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keysym, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keysym, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_map_lst_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_map_lst_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_map_lst_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map_lst, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_map, 3, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modes_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modes_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_ref_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_ref_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blacklist_repeat1, 2, 0, 5),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blacklist_repeat1, 2, 0, 5), SHIFT_REPEAT(89),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modes, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modes, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_ref, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blacklist_repeat1, 1, 0, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_keyword, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_skhdrc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
