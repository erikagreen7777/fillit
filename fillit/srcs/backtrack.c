// int		backtrack(char **grid, char **new_g, int tetcount, int size)
// {
		/*
		Break out of the function here if you can't place any of the tets anywhere, or if they're all placed

		While the tets are less than the number of tets
			check that the grid size is big enough
		if it is big enough, place the first tet at y[0], x[0]j and assign a letter
			if not, then make_grid(size + 1)
		If it is big enough, try to place the next tet at y[0] + 1
		If it doesn't work at y[0] + 1, keep incrementing to the end of the grid. 
		if that doesn't work then clear_grid() and go back to the beginning. 
// }