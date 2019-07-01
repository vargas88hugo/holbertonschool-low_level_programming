#include "holberton.h"

/**
 * rev_string - Function that prints reverse string
 * @s: String to be checked
 */
void rev_string(char *s)
{
	char c[10];
	int i;

	for (i = 0; i < 10; i++)
		c[i] = 0;

	for (i = 0; i < 9; i++)
		c[i] = *(s + 8 - i);

	c[10] = '\0';

	for (i = 0; i < 10; i++)
		*(s + i) = c[i];
}
