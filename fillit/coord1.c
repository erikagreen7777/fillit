#include "libft.h"
#include "fillit.h"

int		ft_TET7(t_tet_frag **tetromino, int row, int col)
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

int		ft_TET8(t_tet_frag **tetromino, int row, int col)
{
	int i;
	int nb;

	if (nb == '#')
	{
		if (!(row == 3 || col > 1))
			if (tetromino->array[row][col] == nb && tetromino->array[row][col + 1] == nb
					&& tetromino->array[row + 1][col + 1] == nb && tetromino->array[row][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(tetromino->array[row]) - 1;
		if (!(row == i || col > (i - 2)))
			if (tetromino->array[row][col] == '.' && tetromino->array[row][col + 1] == '.'
					&& tetromino->array[row + 1][col + 1] == '.' && tetromino->array[row][col + 2] == '.')
			{
				tetromino->array[row][col] = nb;
				tetromino->array[row][col + 1] = nb;
				tetromino->array[row + 1][col + 1] = nb;
				tetromino->array[row][col + 2] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET12(t_tet_frag **tetromino, int nb, int row, int col)
{
	int i;

	if (nb == '#')
	{
		if (!(row == 0 || col > 1))
			if (tetromino[row][col] == nb && tetromino[row][col + 1] == nb
					&& tetromino[row - 1][col + 1] == nb && tetromino[row][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(tetromino[row]) - 1;
		if (!(row == 0 || col > (i - 2)))
			if (tetromino[row][col] == '.' && tetromino[row][col + 1] == '.'
					&& tetromino[row - 1][col + 1] == '.' && tetromino[row][col + 2] == '.')
			{
				tetromino[row][col] = nb;
				tetromino[row][col + 1] = nb;
				tetromino[row - 1][col + 1] = nb;
				tetromino[row][col + 2] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET10(t_tet_frag **tetromino, int nb, int row, int col)
{
	int i;

	if (nb == '#')
	{
		if (!(col == 3 || row == 0 || row == 3))
			if (tetromino[row][col] == nb && tetromino[row][col + 1] == nb
					&& tetromino[row + 1][col + 1] == nb && tetromino[row - 1][col + 1] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(tetromino[row]) - 1;
		if (!(col == i || row == 0 || row == i))
			if (tetromino[row][col] == '.' && tetromino[row][col + 1] == '.'
					&& tetromino[row + 1][col + 1] == '.' && tetromino[row - 1][col + 1] == '.')
			{
				tetromino[row][col] = nb;
				tetromino[row][col + 1] = nb;
				tetromino[row + 1][col + 1] = nb;
				tetromino[row - 1][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET11(t_tet_frag **tetromino, int nb, int row, int col)
{
	int i;

	if (nb == '#')
	{
		if (!(row > 1 || col == 3))
			if (tetromino[row][col] == nb && tetromino[row + 1][col + 1] == nb
					&& tetromino[row + 1][col] == nb && tetromino[row + 2][col] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(tetromino[row]) - 1;
		if (!(row > (i - 2) || col == i))
			if (tetromino[row][col] == '.' && tetromino[row + 1][col + 1] == '.'
					&& tetromino[row + 1][col] == '.' && tetromino[row + 2][col] == '.')
			{
				tetromino[row][col] = nb;
				tetromino[row + 1][col + 1] = nb;
				tetromino[row + 1][col] = nb;
				tetromino[row + 2][col] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_notfind(t_tet_frag **tetromino, int nb, int row, int col)
{
	nb = 0;
	row = 0;
	col = 0;
	if (tetromino)
		return (1);
	return (0);
}
