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

if parsers.skhdrc == nil then
	parsers.skhdrc = {
		install_info = {
			url = "https://github.com/aimuzov/tree-sitter-skhdrc",
			revision = "main",
		},
	}
end
