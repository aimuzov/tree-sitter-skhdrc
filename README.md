# tree-sitter-skhdrc

Tree-sitter grammar for [skhd.zig](https://github.com/jackielii/skhd.zig)
configuration files (`skhdrc`).

The grammar implements the language defined in
[skhd.zig SYNTAX.md](https://github.com/jackielii/skhd.zig/blob/main/SYNTAX.md).
For the parser rules themselves, see [`grammar.js`](./grammar.js); highlight
captures live in [`queries/skhdrc/highlights.scm`](./queries/skhdrc/highlights.scm).

Forked from [reo101/tree-sitter-skhdrc](https://github.com/reo101/tree-sitter-skhdrc)
(which targets the original [koekeishiya/skhd](https://github.com/koekeishiya/skhd))
and extended to cover skhd.zig-specific syntax.

## Supported syntax

| Construct                         | Example                                  |
|-----------------------------------|------------------------------------------|
| Comments                          | `# comment`                              |
| Modifier keywords                 | `cmd`, `lctrl`, `hyper`, `meh`, `fn`, …  |
| Modifier combinations             | `cmd + ctrl + shift - a`                 |
| Named keys                        | `return`, `space`, `f1`, `backtick`, …   |
| Hex keycodes                      | `0x32`                                   |
| Shell command action              | `cmd - a : echo hi`                      |
| Multi-line shell command          | `cmd - a : foo \`<br>`            && bar`|
| Mode declaration                  | `:: window`, `:: window @ : cmd`         |
| Mode activation                   | `cmd - w ; window`                       |
| Scoped binding                    | `window < h : focus_left`                |
| Multi-mode scope                  | `window, move < escape ; default`        |
| Process-specific bindings         | `ctrl - n [ "kitty" : foo  * : bar ]`    |
| Forward keypress                  | `cmd - h \| left`                        |
| Passthrough (don't consume)       | `cmd - a -> : echo`                      |
| Unbind                            | `cmd - a ~`                              |
| `.load` directive                 | `.load "extra.skhdrc"`                   |
| `.shell` directive                | `.shell "/bin/fish"`                     |
| `.blacklist` directive            | `.blacklist [ "App" ]`                   |
| `.define` template                | `.define foo : echo {{1}}`               |
| `.define` group                   | `.define browsers [ "Safari" "Firefox" ]`|
| Command/template reference        | `: @foo` or `: @foo("arg", "arg")`       |
| Group reference (in proc maps)    | `[ @browsers : cmd  * : other ]`         |

### Known limitations

- Placeholder tokens like `{{1}}` inside `.define` templates are not extracted as
  separate nodes — they are part of the surrounding `command` node.

## Installation

### Neovim (LazyVim / lazy.nvim, nvim-treesitter v2 `main` branch)

Register the parser and install it via `:TSInstall skhdrc`:

```lua
return {
  "nvim-treesitter/nvim-treesitter",
  opts = function(_, opts)
    require("nvim-treesitter.parsers").skhdrc = {
      install_info = {
        url = "https://github.com/aimuzov/tree-sitter-skhdrc",
        revision = "main",
      },
    }

    opts.ensure_installed = opts.ensure_installed or {}
    vim.list_extend(opts.ensure_installed, { "skhdrc" })

    vim.filetype.add({
      filename = { skhdrc = "skhdrc", [".skhdrc"] = "skhdrc" },
      pattern  = {
        [".*/skhd/skhdrc"]       = "skhdrc",
        [".*/%.config/skhd/.*"]  = "skhdrc",
      },
    })
  end,
}
```

The `highlights.scm` query bundled with this repo is picked up automatically
through Neovim's runtime path.

### nvim-treesitter v1 (`master` branch, legacy API)

```lua
require("nvim-treesitter.parsers").get_parser_configs().skhdrc = {
  install_info = {
    url = "https://github.com/aimuzov/tree-sitter-skhdrc",
    files = { "src/parser.c" },
    branch = "main",
  },
  filetype = "skhdrc",
}
```

### CLI

```sh
git clone https://github.com/aimuzov/tree-sitter-skhdrc
cd tree-sitter-skhdrc
npm install
npx tree-sitter generate
npx tree-sitter parse path/to/skhdrc
```

## Highlight captures

`queries/skhdrc/highlights.scm` produces the following captures:

| Capture                | Applied to                                       |
|------------------------|--------------------------------------------------|
| `@comment`             | `# …`                                            |
| `@string`              | `"quoted"` strings                               |
| `@keyword`             | modifier keywords (`cmd`, `ctrl`, `hyper`, …)    |
| `@constant`            | literal keys (`a`, `1`)                          |
| `@constant.builtin`    | named keycodes & `0xNN`                          |
| `@operator`            | `-`, `+`, `\|`, `->`                             |
| `@punctuation.delimiter` | `,`, `:`, `;`                                  |
| `@punctuation.special` | `::`, `<`                                        |
| `@variable.builtin`    | `~`, `*`                                         |
| `@module.builtin`      | mode names in usage position                     |
| `@module`              | mode name in `:: name` declaration               |
| `@attribute`           | the `@` capture-flag in `:: name @`              |
| `@keyword.directive`   | `.load`, `.shell`, `.blacklist`, `.define`       |
| `@function`            | `.define` name being declared                    |
| `@function.call`       | `@name(...)` reference in command position       |
| `@type`                | `@group` reference in process-map list           |

## Grammar development

```sh
npm install                    # one-time
npx tree-sitter generate       # regenerate src/parser.c after grammar.js edits
npx tree-sitter parse FILE     # try parsing
```

Always commit `src/parser.c`, `src/grammar.json`, and `src/node-types.json`
together with `grammar.js` — nvim-treesitter compiles the committed `parser.c`,
not the grammar source.

## Credits

- Original grammar: [reo101/tree-sitter-skhdrc](https://github.com/reo101/tree-sitter-skhdrc)
- Upstream language: [jackielii/skhd.zig](https://github.com/jackielii/skhd.zig)
  ([SYNTAX.md](https://github.com/jackielii/skhd.zig/blob/main/SYNTAX.md))

## License

MIT — see [LICENSE](./LICENSE).
