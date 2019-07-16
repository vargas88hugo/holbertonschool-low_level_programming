#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: String one
 * @s2: String two
 * Return: Return a concatenate string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x, y, z;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	p = malloc(i + j + 1 + sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (x = 0; x < i; x++)
		p[x] = s1[x];

	for (y = i, z = 0; y < i + j + 1; y++, z++)
		p[y] = s2[z];

	return (p);
}
