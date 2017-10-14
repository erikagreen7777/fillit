#include "libft.h"

char 	*ft_split(const char *str)
{
	size_t len = ft_strlen(str);

	char *fragments;
	fragments = ft_strnew(16);
	size_t i = 0;

	while (i < len)
	{
		fragments[i] = *ft_strncpy(fragments, &str[i], 16);
		i += 16;
	}
	return (fragments);
}