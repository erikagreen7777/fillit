int		ft_TET13(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(col > 1 || row == 3))
			if (new_g[row][col] == nb && new_g[row + 1][col] == nb && new_g[row][col + 1] == nb
				&& new_g[row][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(col > (i - 2) || row == i))
			if (new_g[row][col] == '.' && new_g[row + 1][col] == '.' && new_g[row][col + 1] == '.'
				&& new_g[row][col + 2] == '.')
			{
				new_g[row][col] = nb;
				new_g[row + 1][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row][col + 2] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET17(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(row == 3 || col > 1))
			if (new_g[row][col] == nb && new_g[row + 1][col] == nb
					&& new_g[row + 1][col + 1] == nb && new_g[row + 1][col + 2] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row == i || col > (i - 2)))
			if (new_g[row][col] == '.' && new_g[row + 1][col] == '.'
					&& new_g[row + 1][col + 1] == '.' && new_g[row + 1][col + 2] == '.')
			{
				new_g[row][col] = nb;
				new_g[row + 1][col] = nb;
				new_g[row + 1][col + 1] = nb;
				new_g[row + 1][col + 2] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET21(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(row > 1 || col == 3))
			if (new_g[row][col] == nb && new_g[row][col + 1] == nb && new_g[row + 1][col] == nb
					&& new_g[row + 2][col] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row > (i - 2) || col == i))
			if (new_g[row][col] == '.' && new_g[row][col + 1] == '.' && new_g[row + 1][col] == '.'
				&& new_g[row + 2][col] == '.')
			{
				new_g[row][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row + 1][col] = nb;
				new_g[row + 2][col] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET9(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(row > 1 || col == 3))
			if (new_g[row][col] == nb && new_g[row][col + 1] == nb
					&& new_g[row + 1][col + 1] == nb && new_g[row + 2][col + 1] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row > (i - 2) || col == i))
			if (new_g[row][col] == '.' && new_g[row][col + 1] == '.'
					&& new_g[row + 1][col + 1] == '.' && new_g[row + 2][col + 1] == '.')
			{
				new_g[row][col] = nb;
				new_g[row][col + 1] = nb;
				new_g[row + 1][col + 1] = nb;
				new_g[row + 2][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}

int		ft_TET15(char **new_g, int nb, int row, int col)
{
	int i;

	if (nb == 35)
	{
		if (!(row > 1 || col == 3))
			if (new_g[row][col] == nb && new_g[row + 1][col] == nb && new_g[row + 2][col] == nb
					&& new_g[row + 2][col + 1] == nb)
				return (1);
	}
	else
	{
		i = ft_strlen(new_g[row]) - 1;
		if (!(row > (i - 2) || col == i))
			if (new_g[row][col] == '.' && new_g[row + 1][col] == '.' && new_g[row + 2][col] == '.'
				&& new_g[row + 2][col + 1] == '.')
			{
				new_g[row][col] = nb;
				new_g[row + 1][col] = nb;
				new_g[row + 2][col] = nb;
				new_g[row + 2][col + 1] = nb;
				return (1);
			}
	}
	return (0);
}