#include "libft.h"
#include "fillit.h"

void	ft_freetab(char ***new_g)
{
	size_t i;

	i = 0;
	while ((*new_g)[i])
	{
		ft_strdel(&(*new_g)[i]);
		i++;
	}
	ft_strdel(&(*new_g)[i]);
	*new_g = NULL;
}