vim.filetype.add({
	filename = {
		skhdrc = "skhdrc",
		[".skhdrc"] = "skhdrc",
	},
	pattern = {
		[".*/skhd/skhdrc"] = "skhdrc",
		[".*/%.config/skhd/.*"] = "skhdrc",
	},
})
