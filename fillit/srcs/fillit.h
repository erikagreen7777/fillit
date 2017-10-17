#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <stdio.h>

# define ROW_SIZE 4

typedef struct		s_tet_frag
{
	char				*array;
	struct s_tet_frag	*next;
}					t_tet_frag;

int				valid(char *argv);
int				ft_ismod(int a, int b);
char 			*ft_remove_newline(char *str);
char 			**ft_split(const char *str);
void			*ft_list_assign(char *fragments);
t_tet_frag		*ft_lstnew(void const *content, size_t content_size);
void			ft_lstadd(t_tet_frag **alst, t_tet_frag *new);
char			*ft_strndup(const char *src, size_t n);
int				check_4_newlines(char *str);
int				check_20_newlines(char *str);

#endif
