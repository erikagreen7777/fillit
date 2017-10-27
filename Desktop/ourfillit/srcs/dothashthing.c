/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dothashthing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 08:59:53 by egreen            #+#    #+#             */
/*   Updated: 2017/10/25 09:03:28 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		dothashthing(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if ((str[i] != '#' && str[i] != '.'))
		{
			printf("INVALID char: %c\n", str[i]);
			return (2);
		}
		printf("This char is valid: %d %c\n", i, str[i]);
		i++;
	}
	return (0);
}
