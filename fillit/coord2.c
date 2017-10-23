#include "libft.h"
#include "fillit.h"

int		ft_TET16(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(col == 3 || row < 2))
			if (new_g[row][col] == nb && new_g[row][col + 1] == nb
					&& new_g[row - 1][col + 1] == nb && new_g[row - 2][col + 1] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(col == i || row < 2))
			if (new_g[row][col] == '.' && new_g[row][col + 1] == '.'
					&& new_g[row - 1][col + 1] == '.' && new_g[row - 2][col + 1] == '.')
			{
				new_g[row][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row - 1][col + 1] = nb;
				new_g[row - 2][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET6(char **new_g, int nb, int row, int col)
{
	int	i;

	if (nb == 35)
	{
		if (!(col == 3 || row > 1))
			if (new_g[row][col] == nb && new_g[row + 1][col] == nb
					&& new_g[row + 1][col + 1] == nb && new_g[row + 2][col + 1] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(col == i || row > i - 2))
			if (new_g[row][col] == '.' && new_g[row + 1][col] == '.'
					&& new_g[row + 1][col + 1] == '.' && new_g[row + 2][col + 1] == '.')
			{
				new_g[row][col] = nb;
				new_g[row + 1][col] = nb;
				new_g[row + 1][col + 1] = nb;
				new_g[row + 2][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET5(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(col == 3 || row == 0 || row == 3))
			if (new_g[row][col] == nb && new_g[row + 1][col] == nb
					&& new_g[row][col + 1] == nb && new_g[row - 1][col + 1] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(col == i || row == 0 || row == i))
			if (new_g[row][col] == '.' && new_g[row + 1][col] == '.'
					&& new_g[row][col + 1] == '.' && new_g[row - 1][col + 1] == '.')
			{
				new_g[row][col] = nb;
				new_g[row + 1][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row - 1][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET4(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(col > 1 || row == 3))
			if (new_g[row][col] == nb && new_g[row][col + 1] == nb
					&& new_g[row + 1][col + 1] == nb && new_g[row + 1][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(col > (i - 2) || row == i))
			if (new_g[row][col] == '.' && new_g[row][col + 1] == '.'
					&& new_g[row + 1][col + 1] == '.' && new_g[row + 1][col + 2] == '.')
			{
				new_g[row][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row + 1][col + 1] = nb;
				new_g[row + 1][col + 2] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET7(char **tetromino, int row, int col)
{
	int i;
	int nb;

	if (nb == 35)
	{
		if (!(row == 0 || col > 1))
			if (tetromino->array[row][col] == nb && tetromino->array[row][col + 1] == nb
					&& tetromino->array[row - 1][col + 1] == nb && tetromino->array[row - 1][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(tetromino->array[row]) - 1;
		if (!(row == 0 || col > (i - 2)))
			if (tetromino->array[row][col] == '.' && tetromino->array[row][col + 1] == '.'
					&& tetromino->array[row - 1][col + 1] == '.' && tetromino->array[row - 1][col + 2] == '.')
			{
				tetromino->array[row][col] = nb;
				tetromino->array[row][col + 1] = nb;
				tetromino->array[row - 1][col + 1] = nb;
				tetromino->array[row - 1][col + 2] = nb;
				return (1);
			}
	}
	return (0);
}