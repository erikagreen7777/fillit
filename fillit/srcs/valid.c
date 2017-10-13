#include "fillit.h"

int		validate(char *argv)
{
	//while the string exists, split it up every 20 spots and store it in an array (or linked list?)

	int i;
	i = 0;
	int len;

	len = ft_strlen(&argv[1]);
	// char **str;
	// str = &argv[1];


	if ((len > 416 || len < 64) || (len % 16 != 0))
		return (0);
	return (0);

}