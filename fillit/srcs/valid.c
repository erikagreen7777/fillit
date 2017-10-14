#include "libft.h"
#include "fillit.h"

int		valid(char *buf)
{
	//while the string exists, split it up every 20 spots and store it in an array (or linked list?)

	size_t i;

	size_t len;
	char *str;
	size_t counter;

	i = 20;
	counter = 20;
	str = buf;
	len = ft_strlen(str);
	// char **str;
	// str = &argv[1];
	printf("%zu\n",len);
	//checking the overall length
	if (len > 416 || len < 20)
		printf("The length is invalid\n");
	else
		printf("The length is fine\n");
	

	//checking whether the newlines are in the right place
	while (i < (len - 1))
	{
		// printf("buf[%zu]: %c\n", counter, str[i]);
		// printf("buf[18]: %c\n", buf[18]);
		// printf("this is buf[19]: %c\n", buf[19]);
		// printf("This is buf[20]: %c\n", buf[20]);
		// printf("This is buf[21]: %c\n", buf[21]);
		// printf("This is buf[22]: %c\n", buf[22]);
		// if ((char )buf[20] != '\n')
		if (str[i] != '\n')
			printf("It NOT NOT NOT NOT NOT is a newline %c\n", str[i]);
		else 
			printf("It's a newline\n");
		// 	printf("There's something that's not a newline here");
		// else
		// 	printf("All newlines are in spot 21");
		 i += 21;
		 counter += 21;

	}

	str = ft_remove_newline(str);
	printf("%s\n", str);


//checking to see if it's mod 16. If it's not, then it's not valid
	if ((ft_ismod(ft_strlen(str), 16)))
		printf("It's not valid! Here's the length: %zu\n", ft_strlen(str));
	else 
		printf("It's %% 16 = 0\n");


	str = ft_split(str);
	// printf("%s\n", );



	//STRNEW WITH LOOP




	//STRCPY INTO STRNEW






	// i = 0;
	// while (i < (len - 1))
	// {
		
	// 	i++;
	// }

	return (0);

}