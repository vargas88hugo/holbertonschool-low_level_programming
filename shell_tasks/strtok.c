#include <stdio.h>
#include <string.h>

void proto(void);

int main(void)
{
	proto();

	return (0);
}

void proto(void)
{
	char *b = " ";
	char c[] = "Hi Holberton School";
	char *d = strtok(c, b);

	while (d != NULL)
	{
		printf("%s\n", d);
	        d = strtok(NULL, b);
	}
}
