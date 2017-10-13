/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:07:24 by egreen            #+#    #+#             */
/*   Updated: 2017/10/12 17:23:08 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[601];

	i = 0;
//make a brand new buffer
	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			write(1, "error\n", 6);
		ft_bzero(buf, 601);
		read(fd, buf, 600);
		printf("This is in the buffer: %s\n", buf); //WHY IS IT MESSED UP???
		// write(1, argv[1], (strlen(argv[1]))); //TWO DOTs ARE WRITTEN AFTER
		close(fd);
	}
	else
		write(1, "usage: ./fillit [test file]\n", 28);
	return (0);
}