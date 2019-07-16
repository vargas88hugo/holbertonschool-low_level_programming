#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars with malloc
 * @size: Size of array
 * @c: character of buffer
 * Return: An array of char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		s[i] = c;
	if (s == NULL)
		return (NULL);

	return (s);
}
