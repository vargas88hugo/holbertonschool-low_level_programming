#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

        if (n >= j)
		n = j;

	p = malloc(sizeof(char) * (i + n + 1));

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}
