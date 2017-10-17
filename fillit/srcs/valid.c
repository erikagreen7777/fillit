#include "libft.h"
#include "fillit.h"

int		valid(char *buf)
{
	//while the string exists, split it up every 20 spots and store it in an array (or linked list?)

	size_t i;
	size_t len;
	char *str;

	i = 20;
	str = buf;
	len = ft_strlen(str);

	printf("%zu\n",len);

	//checking the overall length
	if (len > 416 || len < 20)
		return(printf("Error: invalid file (length)\n"));
	else
		printf("The length is fine\n");

	ft_putendl(str);	

// remove the newlines from the whole thing.
	str = ft_remove_newline(str);
	ft_putendl(str);

//checking to see if it's mod 16. If it's not, then it's not valid
	if ((ft_ismod(ft_strlen(str), 16)))
		return (printf("It's not valid! Here's the length: %zu\n", ft_strlen(str)));
	else 
		printf("It's %% 16 = 0\n");

	char **tet;
	int j = -1;
//	
	tet = ft_split(str);

	while (tet[++j])
	{
		ft_putstr("YESSS");
		ft_putendl(tet[j]);
	}
	return (0);

}


	// size_t counter;
	// counter = 20;
	// char **str;
	// str = &argv[1];
//	printf("%s\n", str);
//	printf("%s\n", str);
	// printf("%s\n", );