#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <stdio.h>

# define ROW_SIZE 4

typedef struct		s_yourmom
{
	char				*fragment;
	struct s_yourmom	*node;
	struct s_yourmom	*next;
}					t_yourmom;

int				valid(char *argv);
int				ft_ismod(int a, int b);
char 			*ft_remove_newline(char *str);
char 			*ft_split(const char *str);
// t_yourmom		*ft_list_assign(const char *str);
t_yourmom		*ft_lstnew(void const *content, size_t content_size);
void			ft_lstadd(t_yourmom **alst, t_yourmom *new);

#endif
