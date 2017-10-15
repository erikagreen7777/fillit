#include <stdio.h>
#include "libft.h"
#include "fillit.h"

char 	*ft_split(const char *str)
{
	size_t len = ft_strlen(str);
	char *fragments;
	char arr[];

	fragments = ft_strnew(sizeof(str));
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;


	while (len > 0)
	{

		fragments[j] = *ft_strncpy(fragments, &str[i], 16);
		arr[k][] = fragments[j];	
		printf("arr[k]: %c\n", arr[k][17]);
		// ft_list_assign(&fragments[j]);
		// arr[k] = *ft_strcpy(arr, &fragments[j]);
		// printf("%c\n", arr[k]);
		printf("%s\n",   fragments);
		len -= 16;
		i+=16;
		j++;
		k++;
	}
	
	// while (arr[k])
	// {
	// 	printf("%s\n", arr[k]);
	// 	k++;
	// }
	
	return (0);
}