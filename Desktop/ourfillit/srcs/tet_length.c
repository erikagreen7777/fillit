/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 09:09:34 by egreen            #+#    #+#             */
/*   Updated: 2017/10/25 09:10:15 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tet_length(char *str)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = 20;
	if (len > 546 || len < 19)
		return(printf("Error: invalid file (length)\n")); // return (1);
	else //
		printf("The length is fine\n"); //
	ft_putendl(str); //	
	if ((str[len - 1]) == '\n' && (str[len - 2] == '\n'))
		return(printf("Error: last char isn't a newline\n")); // return (1);
	while (i < len)
	{
		if (str[i] != '\n')
			return(printf("Error: No newline at str[20]")); //return (1);
		if (str[i + 1] == '\n')
			return(printf("Error: str[21] shouldn't be a newline")); // return (1);
		i += 21;
	}
	if ((str[0] != '.') && (str[0] != '#'))
		return(printf("The first char isn't valid")); //return (1);
	return (0);
}
