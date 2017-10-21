#include "libft.h"
#include "fillit.h"

int		dothashthing(char *str)
{
	int i;
	int len = ft_strlen(str);
	i = 0;

		while (i < len)
	{
		if ((str[i] != '#' && str[i] != '.') || (str[i] == ' '))
		{
			printf("INVALID char: %c\n", str[i]);
			return (2);
		}
		printf("This char is valid: %d %c\n", i, str[i]);
		i++;
	}
	return (0);
}