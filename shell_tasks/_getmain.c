#include "holberton.h"
int main(void)
{
	int status;
	char a[SIZE];
	char *s = a;
	char *prompt = "$ ";
	int n;

        write(STDOUT_FILENO, prompt, 2);
	n = _getline(&s, SIZE);
	printf("%s\n", s);
	printf("%d\n", n);

	return (0);
}
