int	ft_ismod(int a, int b)
{
	int		remainder;

	remainder = a % b;
	if (remainder != 0)
		return (1);
	return (0);
}