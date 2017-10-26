/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validswitch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 08:23:20 by egreen            #+#    #+#             */
/*   Updated: 2017/10/25 08:38:30 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		validswitch(char *buf)
{
	size_t		i;
	char		*str;
	t_tet_frag	*tetromino;
	char	**new_g;

	tetromino = ft_memalloc(sizeof(t_tet_frag));
	i = 20;
	str = buf;
	if ((tet_length(str) == 1))
	{
		ft_putstr("invalid");
		return (0);
	}
	str = ft_remove_newline(str);
	ft_putendl(str);
	if (tet_all(str, tetromino) == 2)
	{
		ft_putstr("invalid");
		return (0);
	}
	// printf("tetromino->count = %d\n", tetromino->count);
	
	// printf("%d\n", tetcount); //	
	// int tetcount = tetromino->count;
	int tetcount = 0;

	ft_putstr(tetromino->array[0]);
	tetromino->size = MINGRID;
	new_g = new_grid(tetromino->size);
	while (!solver(new_g, tetromino, tetcount, tetromino->size))
	{
		new_g = new_grid(++tetromino->size);
	}
	print_grid(new_g, tetromino->size);
	 //print result
	// new_g[2][2] = 'A';
	return (0);
}
