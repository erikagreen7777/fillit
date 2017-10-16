#include "libft.h"
#include "fillit.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dest;
	size_t		i;

		dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
		i = 0;
		if (dest == NULL)
			return (NULL);
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);

}