#include "libft.h"
#include "fillit.h"

void	print_grid(char **grid, int size)
{
	int x;
	int	y;

	y = -1;
	while (++y < size)
	{
		x = -1;
		while (++x < size)
			ft_putchar(grid[y][x]);
		if (y + 1 < size)
			ft_putchar('\n');
	}
}