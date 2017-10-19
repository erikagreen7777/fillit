#include "libft.h"
#include "fillit.h"

char	*ft_trimdots(char const *s)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] && (s[i] == '.'))
		i++;
	j = i;
	if (!s[i])
		return (ft_strnew(0));
	while (s[i])
		i++;
	i--;
	while (s[i] == '.')
		i--;
	new = ft_strnew((i + 1) - j);
	if (new == NULL)
		return (NULL);
	ft_strncpy(new, &s[j], (i + 1) - j);
	return (new);
}