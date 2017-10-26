#include "fillit.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[601];

	i = 0;
	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			write(1, "error\n", 6);
		ft_bzero(buf, 601);
		read(fd, buf, 600);
		validswitch(buf);
		close(fd);
	}
	else
		write(1, "usage: ./fillit [test file]\n", 28);
	return (0);
}







