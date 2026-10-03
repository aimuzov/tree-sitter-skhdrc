local group = vim.api.nvim_create_augroup("tree-sitter-skhdrc", { clear = true })

vim.api.nvim_create_autocmd("FileType", {
	group = group,
	pattern = "skhdrc",
	callback = function(event)
		vim.bo[event.buf].commentstring = "# %s"
	end,
})

-- nvim-treesitter reloads its parser table before every install/update and then fires
-- `User TSUpdate`, so the registration has to be repeated there or it gets lost.
local function register()
	local ok, parsers = pcall(require, "nvim-treesitter.parsers")
	if not ok or parsers.skhdrc ~= nil then
		return
	end

	parsers.skhdrc = {
		install_info = {
			url = "https://github.com/aimuzov/tree-sitter-skhdrc",
			revision = "main",
		},
	}
end

register()

vim.api.nvim_create_autocmd("User", {
	group = group,
	pattern = "TSUpdate",
	callback = register,
})
