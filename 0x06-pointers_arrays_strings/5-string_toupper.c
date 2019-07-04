#include "holberton.h"

/**
 * string_toupper - Function that changes lowercase to uppercase
 * @c: string to be worked
 * Return: uppercase string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}

	return (c);
}
