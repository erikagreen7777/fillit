#include <stdio.h>
#include "libft.h"
#include "fillit.h"

char 	*ft_split(const char *str)
{
	size_t len = ft_strlen(str);
	char *fragments = ft_memalloc(16);
	fragments = ft_strnew(sizeof(str + 1));
	// size_t j = 0;
	size_t i = 0;

	ft_bzero(fragments, sizeof(str + 1));
	while (i < len)
	{
		if (str[i] != '#' && str[i] != '.')
		{
			printf("INVALID char: %c\n", str[i]);
			return (0);
		}
		printf("This char is valid: %zu %c\n", i, str[i]);
		i++;
	}
	i = 0;
	while (len > 0)
	{
		// if (i < len)
		// {
		// 	fragments[j] = *ft_strndup(&str[i], 16);
		// 	ft_memcpy(arr[k], )
		// 	arr[k] = fragments;
		// 	printf("array[%zu]: %s\n", j, *arr);
		// 	i++;
		// }
		// fragments[j] = *ft_strncpy(fragments, &str[i], 17);
		// arr[k][15] = fragments[j];	
		// printf("arr[k]: %c\n", arr[k][15]);
		// ft_list_assign(&fragments[j]);
		// arr[k] = *ft_strcpy(arr, &fragments[j]);
		// printf("%c\n", arr[k]);
		fragments = (char *)ft_memcpy(fragments, &str[i], 16);

		printf("array: %s\n",fragments);
		len -= 16;
		i+=16;
		// k++;
	}
	// while (arr[k])
	// {
	// 	printf("%s\n", arr[k]);
	// 	k++;
	// }
	
	return (0);
}