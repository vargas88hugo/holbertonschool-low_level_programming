#include "holberton.h"

/**
 * rev_string - Function that prints reverse string
 * @s: String to be checked
 */
void rev_string(char *s)
{
	int i, len = 0;

	while (1)
	{
		if (s[len] == '\0')
			break;

		len++;

	}

	char c[len + 1];


	for (i = 0; i < len; i++)
		c[i] = 0;

	for (i = 0; i < len; i++)
		c[i] = *(s + len - i);

	c[len + 1] = '\0';

	for (i = 0; i < len; i++)
		*(s + i) = c[i];
}
