int		ft_backtrack(int *last, int i, char **tab, int nb)
{
	int		x;
	int		y;
	int		len;
	t_tt	*tabf;

	if (i == nb)
		ft_printtab(tab);
	if (i == nb)
		return (1);
	x = -1;
	y = -1;
	len = ft_strlen(tab[0]);
	tabf = ft_tabftetri2();
	while (++y < len)
	{
		while (++x < len)
			if (tabf[last[i]].f(tab, 'A' + i, x, y) == 1)
			{
				if (ft_backtrack(last, (i + 1), tab, nb) == 1)
					return (1);
				tabf[last[i]].c(tab, 46, x, y);
			}
		x = -1;
	}
	return (0);
}