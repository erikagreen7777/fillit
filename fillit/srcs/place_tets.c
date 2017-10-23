#include "libft.h"
#include "fillit.h"

 char	*place_tets(t_tet_frag *tetromino, char **new_g)
{
	new_g = NULL;
	// int c = -1;
	int row = 0;
	// int col = 0;
	// int i = 0;

	// if ((tetromino->count == 1) && ((char *)tetromino->array == TET3))
	// 	return ("AA\nAA"); 
	if (tetromino->count == 1 && ft_strequ(tetromino->array[row], TET3))
		puts("2 x 2");	
	while (tetromino->array[row])
	{
		if (ft_strequ(tetromino->array[0], TET7))
		// if (tetromino->array[0][i] == TET7[i])
		{
			puts("TET7");
			printf("%d\n", tetromino->count);
		}
		else
			puts("not TET7");
		i++;
		row++;
		
	}

	// while (++c < tetromino->count)
	// {
	// 	ft_putstr(tetromino->array[c]);
	// }
	// printf("%p\n", tetromino->array);

	return (0);
}

	// char **newstr;
	// newstr = ft_memalloc(sizeof(char *) * 2);
	// int i = 0;
	// int j = 0;
	// char *p;
	// p = *new_g;

	// char **ptr = ft_memalloc(sizeof(char * )* 2);
	// ptr = tetromino.array;
	// char	*intptr = tetromino.i;
	// else
	// 	newstr = ft_memalloc(24*24); //just don't print out what's not past the fillit
	// ptr = str[0];
	// while (i < tetromino->count)
	// {
	// 	while (j < tetromino->count)
	// 	{

	// 		if (tetromino->array[j] == '#' && new_g[j])
	// 			ft_putchar(tetromino->array[j] + 'A');
	// 		ft_putchar(tetromino->array[j]);
	// 		j++;
	// 	}
	// 	i++;
	// }

	/*	
	while (tetromino->array[i])
	{
		if (tetromino->array[i] == '#')
			tetromino->array[i] = letter;
		if ((tetromino->array == TET18) && (tetromino->array == TET16) && \
		(tetromino->array == TET12) && (tetromino->array == TET2) && (tetromino->array == TET7) \
		(tetromino->array == TET5))	
			ft_putchar(tetromino->array[i]) at grid[0][1];
		else if it can start at row[0]col[0]
			ft_putchar(tetromino->array[i]) at grid[0][0];
		while (grid[row][col] != '\n')
		{
			if (grid[col] == '\n')
				row += 1;
			grid[row][col] = tetromino->array;
			grid[col]++;
		}
		i++;
	}
	*/
	//PLACE THIS SOMEWHERE

 