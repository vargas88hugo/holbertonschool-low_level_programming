#include "holberton.h"

extern char **environ;

int main(int argc, char **argv)
{
	unsigned int i;

	i = 0;
        while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}

	return (0);
}
