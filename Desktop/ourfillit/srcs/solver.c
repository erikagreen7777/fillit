/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:45:24 by nwang             #+#    #+#             */
/*   Updated: 2017/10/24 22:14:06 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		solver(char **grid, t_tet_frag *tetromino, int tetcount, int size)
{
	int 	yx[3];
	static int i;

	yx[2] = size;
	yx[0] = 0;
	//printf("tetcount: %d\n", tetcount);
	if (tetromino->array[tetcount] == NULL)
		return (1);
	while (yx[0] < size)
	{
		yx[1] = 0;
		while (yx[1] < size)
		{
			if (which_tet(tetromino->array[tetcount], grid, yx, ALPH[tetcount]))
			{
				if (i < tetcount && ((i = tetcount) != -10))
					printf("Last tet that was able to be solved correctly: %d\n", tetcount);
				if (solver(grid, tetromino, tetcount + 1, size))
					return (1);
				which_clear_tet(tetromino->array[tetcount], grid, yx);
			}
			yx[1]++;
		}
		yx[0]++;
	}
	// tetromino->size = size;
	return (0);
}


// int		solver(char **grid, char **tet, int tetcount, int size)
// {
// 	int 	yx[2];

	
// 	if (tet[tetcount][0] == '%')
// 		return (1);
// 	yx[0] = 0;
// 	while (yx[0] < size)
// 	{
// 		yx[1] = 0;
// 		while (yx[1] < size)
// 		{
// 			if (which_tet(grid, tet[tetcount], xy, alp[tetcount]))
// 			{
// 				if (solver(grid, tet, tetcount + 1, size))
// 					return (1);
// 				which_clear_tet(grid, tet[tetcount], xy);
// 			}
// 			yx[1]++;
// 		}
// 		yx[0]++;
// 	}
// 	return (0);
// }
