#include "fillit.h"
#include "libft.h"

int check_20_newlines(char *str)
{
	size_t i;
	size_t len;

	len = ft_strlen(str);
	i = 20;

	while (i < (len - 1))
	{
			if (str[i] != '\n')
				return(printf("Error: invalid file 20 newlines%c\n", str[i]));
			i = '\0';
			i += 21;
	}
	return (0);
}