#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h" 
# include <stdio.h>


# define TET1 "####"  //TET I 1
# define TET2 "#...#...#...#" //TET I 2
# define TET3 "##..##" // TET 0
# define TET4 "##...##" // TET Z 1
# define TET5 "#..##..#" //TET Z 2
# define TET6 "#...##...#" // TET Z 3
# define TET7 "##.##" //TET Z 4
# define TET8 "###..#" //TET T 1
# define TET9 "##...#...#" // WHAT IS THIS ONE?
# define TET10 "#..##...#" // TET T 2
# define TET11 "#...##..#" // TET Z 3
# define TET12 "#..###" // TET Z 4
# define TET13 "###.#" //  TET L 1
# define TET14 "###...#" //TET L 2
# define TET15 "#...#...##" // TET L 3
# define TET16 "#...#..##" // TET L 4
# define TET17 "#...###" // TET L 5
# define TET18 "#.###" // TET L 6
# define TET19 ""
# define TET20 "################"
# define TET21 "##..#...#" // TET L 7

# define TETSIZE 16
# define MAXTETS 26
# define MINGRID 2

typedef struct		s_tet_frag
{
	char				**array;
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
int				ft_checktets(char *s);
int				dothashthing(char *str);
char 			**new_grid(int size);
void			print_grid(char **grid_to_print, int size);
int				backtrack(char **grid, char **new_g, int size);

#endif
