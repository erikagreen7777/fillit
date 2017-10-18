#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <stdio.h>


//####
# define TETI1 "####............";
# define TETI2 "....####........";
# define TETI3 "........####....";
# define TETI4 "............####";

//#
//#
//#
//#
# define TETI5 "#...#...#...#...";
# define TETI6 ".#...#...#...#..";
# define TETI7 "..#...#...#...#.";
# define TETI8 "...#...#...#...#";

//##
//##
# define TETO1 "##..##..........";
# define TETO2 ".##..##.........";
# define TETO3 "..##..##........";
# define TETO4 "....##..##......";
# define TET05 ".....##..##.....";
# define TET06 ".......##..##...";
# define TET07 "........##..##..";
# define TET08 ".........##..##.";
# define TET09 "..........##..##";

//##
// ##
# define TETZ1 "##...##.........";
# define TETZ2 ".##...##........";
# define TETZ3 "....##...##.....";
# define TETZ4 ".....##...##....";
# define TETZ5 "........##...##.";
# define TETZ6 ".........##...##";

// #
//##
//#
# define TETZ7 ".#..##..#.......";
# define TETZ8 "..#..##..#......";
# define TETZ9 "...#..##..#.....";
# define TETZ10 ".....#..##..#...";
# define TETZ11 "......#..##..#..";
# define TETZ12 ".......#..##..#.";

//#
//##
//#
# define TETZ13 "#...##...#......";
# define TETZ14 ".#...##...#.....";
# define TETZ15 "..#...##...#....";
# define TETZ16 "....#...##...#..";
# define TETZ17 ".....#...##...#.";
# define TETZ18 "......#...##...#";

// ##
//##
# define TETZ19 ".##.##..........";
# define TETZ20 "..##.##.........";
# define TETZ21 ".....##.##......";
# define TETZ22 "......##.##.....";
# define TETZ23 ".........##.##..";
# define TETZ24 "..........##.##.";

//###
// #
# define TETT1 "###..#..........";
# define TETT2 ".###..#.........";
# define TETT3 "....###..#......";
# define TETT4 ".....###..#.....";
# define TETT5 "........###..#..";
# define TETT6 ".........###..#.";

// #
//##
// #
# define TETT7 ".#..##...#......";
# define TETT8 "..#..##...#.....";
# define TETT9 "...#..##...#....";
# define TETT10 ".....#..##...#..";
# define TETT11 "......#..##...#.";
# define TETT12 ".......#..##...#";

//#
//##
//#
# define TETT13 "#...##..#.......";
# define TETT14 ".#...##..#......";
# define TETT15 "..#...##..#.....";
# define TETT16 "....#...##..#...";
# define TETT17 ".....#...##..#..";
# define TETT18 ".......#...##..#.";

// #
//###
# define TETT19 ".#..###.........";
# define TETT20 "..#..###........";
# define TETT21 ".....#..###.....";
# define TETT22 "......#..###....";
# define TETT23 ".........#..###.";
# define TETT24 "..........#..###";

//###
//#
# define TETL1 "###.#...........";
# define TETL2 ".###.#..........";
# define TETL3 "....###.#.......";
# define TETL4 ".....###.#......";
# define TETL5 "........###.#...";
# define TETL6 ".........###.#..";

//###
//  #
# define TETL7 "###...#.........";
# define TETL8 ".###...#........";
# define TETL9 "....###...#.....";
# define TETL10 ".....###...#....";
# define TETL11 "........###...#.";
# define TETL12 ".........###...#";

//#
//#
//##
# define TETL13 "#...#...##......";
# define TETL14 ".#...#...##.....";
# define TETL15 "..#...#...##....";
# define TETL16 "....#...#...##..";
# define TETL17 ".....#...#...##.";
# define TETL18 "......#...#...##";

// #
// #
//##
# define TETL19 ".#...#..##......";
# define TETL20 "..#...#..##.....";
# define TETL21 "...#...#..##....";
# define TETL22 ".....#...#..##..";
# define TETL23 "......#...#..##.";
# define TETL24 ".......#...#..##";



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



#endif
