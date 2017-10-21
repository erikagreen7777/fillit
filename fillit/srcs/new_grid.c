#include "libft.h"
#include "fillit.h"

char **new_grid(int size)
{
	int row;
	int	col;
	char **grid;

	grid = (char **)malloc(sizeof(char *) * size);
	col = -1;
	while (++col < size)
	{
		grid[col] = ft_strnew(size);
		row = -1;
		while (++row < size)
			grid[col][row] = '.';
	}
	return (grid);
}