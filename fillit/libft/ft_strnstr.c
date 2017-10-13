/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 08:27:03 by egreen            #+#    #+#             */
/*   Updated: 2017/10/02 10:20:37 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strcmp(little, "") == '\0')
		return ((char*)big);
	while (big[i] && i < n)
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (little[j] == '\0')
			return ((char*)big + (i - (j - 1)));
		i++;
	}
	return (0);
}
