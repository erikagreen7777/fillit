/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetet7.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:01:43 by nwang             #+#    #+#             */
/*   Updated: 2017/10/24 21:41:36 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_checktet7(char **g, int x, int y)
{
	int size;

	size = ft_strlen(g[0]);
	if (x == 0)
		return (0);
	if(ft_strlen(&g[0][x]) < 2)
		return (0);
	if (size - y < 2)
		return (0);
	if(!(g[y][x] == '.'))
		return (0);
	x++;
	if(!(g[y][x] == '.'))
		return (0);
	x--;
	y++;
	if(!(g[y][x] == '.'))
		return (0);
	x--;
	if(!(g[y][x] == '.'))
		return (0);
	return (1);
}

int		ft_placetet7(char **g, int x, int y, char c)
{
	if (ft_checktet7(g, x, y) == 0)
		return (0);	
	g[y][x] = c;
	x++;
	g[y][x] = c;
	x--;
	y++;
	g[y][x] = c;
	x--;
	g[y][x] = c;
	return (1);
}

void	ft_cleartet7(char **g, int x, int y)
{
	g[y][x] = '.';
	x++;
	g[y][x] = '.';
	x--;
	y++;
	g[y][x] = '.';
	x--;
	g[y][x] = '.';
}
