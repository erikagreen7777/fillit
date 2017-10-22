/* void	place_tets(t_tet_frag tetromino.array, char **grid, int tetcount, int size)
// {
		int row = 0;
		int col = 0;
		int i = 0;
		int j = 0;
		char letter = tetcount + 'A';
		
		
	while (tetromino->array[i])
	{
		if (tetromino->array[i] == '#')
			tetromino->array[i] = letter;
		if ((tetromino->array == TET18) && (tetromino->array == TET16) && \
		(tetromino->array == TET12) && (tetromino->array == TET2) && (tetromino->array == TET7) \
		(tetromino->array == TET5))	
			ft_putchar(tetromino->array[i]) at grid[0][1];
		else if it can start at row[0]col[0]
			ft_putchar(tetromino->array[i]) at grid[0][0];
		while (grid[row][col] != '\n')
		{
			if (grid[col] == '\n')
				row += 1;
			grid[row][col] = tetromino->array;
			grid[col]++;
		}
		i++;
	}

 }
 */