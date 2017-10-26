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
# define TET5 "#..##..#" //TET Z 2 1
# define TET6 "#...##...#" // TET Z 3
# define TET7 "##.##" //TET Z 4 1
# define TET8 "###..#" //TET T 1
# define TET9 "##...#...#" // tet l 8
# define TET10 "#..##...#" // TET T 2 1
# define TET11 "#...##..#" // TET T 3
# define TET12 "#..###" // TET T 4 1
# define TET13 "###.#" //  TET L 1
# define TET14 "###...#" //TET L 2
# define TET15 "#...#...##" // TET L 3
# define TET16 "#...#..##" // TET L 4 1
# define TET17 "#...###" // TET L 5
# define TET18 "#.###" // TET L 6 1
# define TET19 ""
# define TET20 "################"
# define TET21 "##..#...#" // TET L 7
# define ALPH "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

# define TETSIZE 16
# define MAXTETS 26
# define MINGRID 2

typedef struct		s_tet_frag
{
	int				count;
	int				size;
	char			**array;
}					t_tet_frag;


int				validswitch(char *buf);
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
int				ft_checktet1(char **g, int x, int y);
int				ft_placetet1(char **g, int x, int y, char c);
void			ft_cleartet1(char **g, int x, int y);
int				ft_checktet2(char **g, int x, int y);
int				ft_placetet2(char **g, int x, int y, char c);
void			ft_cleartet2(char **g, int x, int y);
int				ft_checktet3(char **g, int x, int y);
int				ft_placetet3(char **g, int x, int y, char c);
void			ft_cleartet3(char **g, int x, int y);
int				ft_checktet4(char **g, int x, int y);
int				ft_placetet4(char **g, int x, int y, char c);
void			ft_cleartet4(char **g, int x, int y);
int				ft_checktet5(char **g, int x, int y);
int				ft_placetet5(char **g, int x, int y, char c);
void			ft_cleartet5(char **g, int x, int y);
int				ft_checktet6(char **g, int x, int y);
int				ft_placetet6(char **g, int x, int y, char c);
void			ft_cleartet6(char **g, int x, int y);
int				ft_checktet7(char **g, int x, int y);
int				ft_placetet7(char **g, int x, int y, char c);
void			ft_cleartet7(char **g, int x, int y);
int				ft_checktet8(char **g, int x, int y);
int				ft_placetet8(char **g, int x, int y, char c);
void			ft_cleartet8(char **g, int x, int y);
int				ft_checktet9(char **g, int x, int y);
int				ft_placetet9(char **g, int x, int y, char c);
void			ft_cleartet9(char **g, int x, int y);
int				ft_checktet10(char **g, int x, int y);
int				ft_placetet10(char **g, int x, int y, char c);
void			ft_cleartet10(char **g, int x, int y);
int				ft_checktet11(char **g, int x, int y);
int				ft_placetet11(char **g, int x, int y, char c);
void			ft_cleartet11(char **g, int x, int y);
int				ft_checktet12(char **g, int x, int y);
int				ft_placetet12(char **g, int x, int y, char c);
void			ft_cleartet12(char **g, int x, int y);
int				ft_checktet13(char **g, int x, int y);
int				ft_placetet13(char **g, int x, int y, char c);
void			ft_cleartet13(char **g, int x, int y);
int				ft_checktet14(char **g, int x, int y);
int				ft_placetet14(char **g, int x, int y, char c);
void			ft_cleartet14(char **g, int x, int y);
int				ft_checktet15(char **g, int x, int y);
int				ft_placetet15(char **g, int x, int y, char c);
void			ft_cleartet15(char **g, int x, int y);
int				ft_checktet16(char **g, int x, int y);
int				ft_placetet16(char **g, int x, int y, char c);
void			ft_cleartet16(char **g, int x, int y);
int				ft_checktet17(char **g, int x, int y);
int				ft_placetet17(char **g, int x, int y, char c);
void			ft_cleartet17(char **g, int x, int y);
int				ft_checktet18(char **g, int x, int y);
int				ft_placetet18(char **g, int x, int y, char c);
void			ft_cleartet18(char **g, int x, int y);
int				ft_checktet19(char **g, int x, int y);
int				ft_placetet19(char **g, int x, int y, char c);
void			ft_cleartet19(char **g, int x, int y);
int				tet_length(char *str);
int				tet_all(char *str, t_tet_frag *tetromino);
int				solver(char **grid, t_tet_frag *tetromino, int tetcount, int size);
int				which_tet(char *tet, char **new_g, int *yx, char c);
int				which_tet2(char *tet, char **new_g, int *yx, char c);
int				which_clear_tet(char *tet, char **new_g, int *yx);
int				which_clear_tet2(char *tet, char **new_g, int *yx);

#endif