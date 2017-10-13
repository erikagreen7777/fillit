#include "fillit.h"

int		valid(char *buf)
{
	//while the string exists, split it up every 20 spots and store it in an array (or linked list?)

	size_t i;
	i = 1;
	int len;

	len = ft_strlen(buf);
	// char **str;
	// str = &argv[1];
	printf("%d\n",len);
	//checking the overall length
	if (len > 416 || len < 20)
		printf("The length is invalid\n");
	else
		printf("The length is fine\n");
	//checking more stuff
	while (i < ft_strlen(buf))
	{
		if (buf[21] != '\n')
			return (printf("There's something that's not a newline here"));
		else
			return (printf("All newlines are in spot 21"));
		buf += 21;
	}

	return (0);

}