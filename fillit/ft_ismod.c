ft_int	ft_mod(int a, int b)
{
	int		remainder;

	remainder = a % b;
	if (remainder != 0)
	{
		printf("NOT MOD");
		return (1);
	}
	return (0);
}