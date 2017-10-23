#include "libft.h"
#include "fillit.h"

void	del_tet(char **new_g, int tetcount)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 0;
	a = tetcount + 65;
	while (new_g[i] != NULL)
	{
		j = 0;
		while (new_g[i][j] != '\n')
		{
			if (new_g[i][j] == a)
				new_g[i][j] = '.';
			j++;
		}
		i++;
	}
	return ;
}