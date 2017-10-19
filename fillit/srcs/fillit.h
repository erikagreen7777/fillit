#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h" 
# include <stdio.h>


# define TETI "####"
# define TET2 "#...#...#...#"
# define TET3 "##..##"
# define TET4 "##...##"
# define TET5 "#..##..#"
# define TET6 "#...##...#"
# define TET7 "##.##"
# define TET8 "###..#"
# define TET9 "###..#"
# define TET10 "#..##...#"
# define TET11 "#...##..#"
# define TET12 "#..###"
# define TET13 "###.#"
# define TET14 "###...#"
# define TET15 "#...#...##"
# define TETL19 "#...#..##"






typedef struct		s_tet_frag
{
	char				*array;
	struct s_tet_frag	*next;
}					t_tet_frag;



int				valid(char *argv);
int				ft_ismod(int a, int b);
char 			*ft_remove_newline(char *str);
char 			**ft_split(char *str);
void			*ft_list_assign(char *fragments);
t_tet_frag		*ft_lstnew(void const *content, size_t content_size);
void			ft_lstadd(t_tet_frag **alst, t_tet_frag *new);
char			*ft_strndup(const char *src, size_t n);
int				check_4_newlines(char *str);
int				check_20_newlines(char *str);
char			*ft_trimdots(char const *s);


#endif
