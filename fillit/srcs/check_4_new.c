#include "fillit.h"
#include "libft.h"

int	check_4_newlines(char *str)
{
	size_t i;
	size_t len;

	len = ft_strlen(str);
	i = 4;

	while (i < (len - 1))
	{
			if (str[i] != '\n')
				return(printf("Error: invalid file (newlines)%c\n", str[i]));
			i += 5;
	}
	return (0);
}