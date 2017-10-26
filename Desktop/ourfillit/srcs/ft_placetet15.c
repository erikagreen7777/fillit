/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetet15.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:01:43 by nwang             #+#    #+#             */
/*   Updated: 2017/10/24 21:43:59 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_checktet15(char **g, int x, int y)
{
	int size;

	size = ft_strlen(g[0]);
	if(ft_strlen(&g[0][x]) < 2)
		return (0);
	if (!(size - y >= 3))
		return (0);
	if(!(g[y][x] == '.'))
		return (0);
	y++;
	if(!(g[y][x] == '.'))
		return (0);
	y++;
	if(!(g[y][x] == '.'))
		return (0);
	x++;
	if(!(g[y][x] == '.'))
		return (0);
	return (1);
}

int		ft_placetet15(char **g, int x, int y, char c)
{
	if (ft_checktet15(g, x, y) == 0)
		return (0);	
	g[y][x] = c;
	y++;
	g[y][x] = c;
	y++;
	g[y][x] = c;
	x++;
	g[y][x] = c;
	return (1);
}

void	ft_cleartet15(char **g, int x, int y)
{
	g[y][x] = '.';
	y++;
	g[y][x] = '.';
	y++;
	g[y][x] = '.';
	x++;
	g[y][x] = '.';
}