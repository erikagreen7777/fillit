#include "libft.h"
#include "fillit.h"

void	print_grid(char **grid, int size)
{
	int row;
	int	col;

	col = -1;
	while (++col < size)
	{
		row = -1;
		while (++row < size)
			ft_putchar(grid[col][row]);
		if (col + 1 < size)
			ft_putchar('\n');
	}
}