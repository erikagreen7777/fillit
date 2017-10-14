#include "libft.h"
#include "fillit.h"
#include <stdio.h>

t_yourmom		*ft_list_assign(const char *str)
{
	t_yourmom 	*tet = ft_memalloc(sizeof(t_yourmom));
	tet->fragment = ft_strnew(16);	

	if (tet->node == NULL)
	{
		ft_strcpy(tet->fragment, str);
		printf("New list added:\n");
	}
	else
	{
		ft_lstadd(&tet->node, tet);
		printf("node added: \n");
		tet->node = tet;
	}
	while (tet->node->next)
	{
		printf(">>%s<<\n", tet->node->fragment);
		tet->node = tet->node->next;
	}
	return (tet->node);
}

