#include "holberton.h"

int main(int argc, char **argv, char **environ)
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
