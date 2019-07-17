#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: String concatenate
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *p = malloc(sizeof(char) * ac + 1);

	if (p == NULL)
		return (NULL);

	if (ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			*(p + k) = av[i][j];
		}
	        *(p + k) = '\n';
		k++;
	}

	*(p + k) = '\0';

	return (p);
}
