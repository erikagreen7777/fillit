int		ft_TET3(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(row == 3 || col == 3))
			if (new_g[row][col] == nb && new_g[row + 1][col] == nb && new_g[row][col + 1] == nb
					&& new_g[row + 1][col + 1] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row == i || col == i))
			if (new_g[row][col] == '.' && new_g[row + 1][col] == '.' && new_g[row][col + 1] == '.'
				&& new_g[row + 1][col + 1] == '.')
			{
				new_g[row][col] = nb;
				new_g[row + 1][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row + 1][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET1(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(row != 0))
			if (new_g[row][col] == nb && new_g[row + 1][col] == nb && new_g[row + 2][col] == nb
					&& new_g[row + 3][col] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row > (i - 3)))
			if (new_g[row][col] == '.' && new_g[row + 1][col] == '.' && new_g[row + 2][col] == '.'
					&& new_g[row + 3][col] == '.')
			{
				new_g[row][col] = nb;
				new_g[row + 1][col] = nb;
				new_g[row + 2][col] = nb;
				new_g[row + 3][col] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET2(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(col != 0))
			if (new_g[row][col] == nb && new_g[row][col + 1] == nb && new_g[row][col + 2] == nb
					&& new_g[row][col + 3] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(col > (i - 3)))
			if (new_g[row][col] == '.' && new_g[row][col + 1] == '.' && new_g[row][col + 2] == '.'
					&& new_g[row][col + 3] == '.')
			{
				new_g[row][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row][col + 2] = nb;
				new_g[row][col + 3] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET14(char **new_g, int nb, int row, int col)
{
	int	i;

	if (nb == 35)
	{
		if (!(row == 3 || col > 1))
			if (new_g[row][col] == nb && new_g[row][col + 1] == nb && new_g[row][col + 2] == nb
				&& new_g[row + 1][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row == i || col > (i - 2)))
			if (new_g[row][col] == '.' && new_g[row][col + 1] == '.' && new_g[row][col + 2] == '.'
				&& new_g[row + 1][col + 2] == '.')
			{
				new_g[row][col] = nb;
				new_g[row][col + 2] = nb;
				new_g[row + 1][col + 2] = nb;
				new_g[row][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET18(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(col > 1 || row == 0))
			if (new_g[row][col] == nb && new_g[row][col + 1] == nb && new_g[row][col + 2] == nb
				&& new_g[row - 1][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row == 0 || col > (i - 2)))
			if (new_g[row][col] == '.' && new_g[row][col + 1] == '.' && new_g[row][col + 2] == '.'
				&& new_g[row - 1][col + 2] == '.')
			{
				new_g[row][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row][col + 2] = nb;
				new_g[row - 1][col + 2] = nb;
				return (1);
			}
	}
	return (0);
}