#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
	int str;
	int fd = 3;
	str = open("test.txt", O_RDONLY);
	printf("The size of test.txt is: %lu\n", sizeof(read(3, "test.txt", sizeof("test.txt"))));
	printf("The length of test.txt is: %lu\n", strlen(read(3, "test.txt", sizeof("test.txt"))));
	return (0);
}
