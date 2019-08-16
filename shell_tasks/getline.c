#include <stdio.h>
#include <unistd.h>

int main()
{
	char buff[32];
	char *b = buff;
	size_t i = 32;

        printf("$ ");
	getline(&b, &i, stdin);
	printf("%s", buff);

	return (0);
}
