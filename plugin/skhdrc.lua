vim.api.nvim_create_autocmd("FileType", {
	group = vim.api.nvim_create_augroup("tree-sitter-skhdrc", { clear = true }),
	pattern = "skhdrc",
	callback = function(event)
		vim.bo[event.buf].commentstring = "# %s"
	end,
})

local ok, parsers = pcall(require, "nvim-treesitter.parsers")
if not ok then
	return
end

local config = {
	install_info = {
		url = "https://github.com/aimuzov/tree-sitter-skhdrc",
		revision = "main", -- nvim-treesitter v2 (main branch)
		branch = "main", -- nvim-treesitter v1 (master branch)
		files = { "src/parser.c" }, -- nvim-treesitter v1
	},
	filetype = "skhdrc", -- nvim-treesitter v1
}

if type(parsers.get_parser_configs) == "function" then
	-- nvim-treesitter v1 (master branch)
	local parser_configs = parsers.get_parser_configs()
	if not parser_configs.skhdrc then
		parser_configs.skhdrc = config
	end
elseif parsers.skhdrc == nil then
	-- nvim-treesitter v2 (main branch)
	parsers.skhdrc = config
end
