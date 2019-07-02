#include "holberton.h"

/**
 * rev_string - Function that prints reverse string
 * @s: String to be checked
 */
void rev_string(char *s)
{
	int i, len = 0;
	char *a;

	while (1)
	{
		if (s[len] == '\0')
			break;

		len++;
	}

	a = s;

	for (i = 0; i < len; i++)
	{
		*(a + i) = *(s + len - 1 - i);
	}

	for (i = 0; i < len; i++)
		*(s + i) = *(a + i);
}
