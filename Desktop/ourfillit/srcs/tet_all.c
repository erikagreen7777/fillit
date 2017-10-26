/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 09:06:43 by egreen            #+#    #+#             */
/*   Updated: 2017/10/25 09:08:09 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tet_all(char *str, t_tet_frag *tetromino)
{
	char	**tet;
	char	**temp;
	int		j;
	int		k;

	j = 0;
	k = 0;
	if ((ft_ismod(ft_strlen(str), 16)))
		return (printf("It's not valid! Here's the length: %zu\n", ft_strlen(str))); //return (1);
	else //
		printf("It's %% 16 = 0\n"); //
	if (dothashthing(str) == 2)
		return (0);
	tet = ft_split(str);
	temp = ft_memalloc(sizeof(tet) *  MAXTETS);
	tetromino->count = 0;
	while (tet[j])
	{
		temp[k] = ft_trimdots(tet[j]);
		if (ft_checktets(temp[k]) == 2)
			return (2);
		tetromino->count++;
		j++;
		k++;
	}
	temp[k] = NULL;
	// printf("temp: %p\n", temp);
	tetromino->array = temp;
	// ft_putstr("hereee>>>");
	// ft_putnbr(tetromino->count);
	while (k >= 0) //
	{ //
		printf("tetromino->array[%d]: %s\n", k, tetromino->array[k]); //
		k--; //
	} //
	
	return (0);
}
