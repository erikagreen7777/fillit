#include <stdio.h>
#include "libft.h"
#include "fillit.h"

char 	**ft_split(char *str)
{
	size_t len = ft_strlen(str);
	char **fragments;
	// char *temp;

	fragments = (char **)ft_memalloc(sizeof(char *) * 27);
	size_t i = 0;

	// If none of them are # or .
//NICK'S DOT/HASH THING GOES HERE


	// while (i < len)
	// {
	// 	if ((str[i] != '#' && str[i] != '.') || (str[i] == ' '))
	// 	{
	// 		printf("INVALID char: %c\n", str[i]);
	// 		return (2);
	// 	}
	// 	printf("This char is valid: %zu %c\n", i, str[i]);
	// 	i++;
	// }

	// Chop up the lines
	i = 0;
	int j = 0;
	while (len > 0)
	{
		fragments[i] = ft_strnew(16);
		ft_strncpy(fragments[i], &str[j], 16);
		// ft_putstr("temp: ");
		// ft_putendl(&temp[i]);
		
		ft_putstr("array: ");
		ft_putendl(fragments[i]);

		len -= 16;
		i++;
		j += 16;

	}

	fragments[i] = NULL;
	

	 return (fragments);
}
//check for 

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
		//fragments = (char *)ft_memcpy(fragments, &str[i], 16);
	// while (arr[k])
	// {
	// 	printf("%s\n", arr[k]);
	// 	k++;
	// }
	//char *fragments = ft_memalloc(16);
	// size_t j = 0;
		// check_20_newlines(str);
		// check_4_newlines(str);
		// printf("array[%zu]: ", i);