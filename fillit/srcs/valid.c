#include "libft.h"
#include "fillit.h"

int		valid(char *buf)
{
	//while the string exists, split it up every 20 spots and store it in an array (or linked list?)

	size_t i;
	size_t len;
	char *str;
	// int count;


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

	
	if ((str[len - 1]) == '\n' && (str[len - 2] == '\n'))
		return(printf("Error: last char isn't a newline\n"));
	
	while (i < len)
	{
		if (str[i] != '\n')
			return(printf("Error: No newline at str[20]"));
		if (str[i + 1] == '\n')
			return(printf("Error: str[21] shouldn't be a newline"));
		i += 21;
	}

	if ((str[0] != '.') && (str[0] != '#'))
		return(printf("The first char isn't valid"));


// remove the newlines from the whole thing.
	str = ft_remove_newline(str);
	ft_putendl(str);

//checking to see if it's mod 16. If it's not, then it's not valid
	if ((ft_ismod(ft_strlen(str), 16)))
		return (printf("It's not valid! Here's the length: %zu\n", ft_strlen(str)));
	else 
		printf("It's %% 16 = 0\n");

	char **tet;
	int j = 0;

//FT_SPLIT FT_SPLIT FT_SPLIT	
	tet = ft_split(str);

//FT_ISATET FT_ISATET GOE HERE GOES HERES	


	while (tet[j])
	{

		printf("array[%d]: %s\n", j, tet[j]);
		//ft_putstr("YESSS");
		//ft_putendl(tet[j]);
		j++;
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