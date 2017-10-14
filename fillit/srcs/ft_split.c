#include <stdio.h>
#include "libft.h"
#include "fillit.h"

char 	*ft_split(const char *str)
{
	size_t len = ft_strlen(str);

	char *fragments;
	fragments = ft_strnew(64);
	size_t i = 0;
	size_t j = 0;


	while (len > 0)
	{
		fragments[j] = *ft_strncpy(fragments, &str[i], 16);
		ft_list_assign(str);
		printf("%s\n", fragments);
		len -= 16;
		i+=16;
		j++;
	}
	printf("This is the last fragments: %s\n", fragments);
	
	return (0);
}