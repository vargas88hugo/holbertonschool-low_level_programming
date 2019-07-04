#include "holberton.h"

/**
 * cap_string - Function that capitalizes all words of string
 * @c: string to be capitalized
 * Return: string capitalized
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ',')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;
		}

		if (c[i] == ';' || c[i] == '.' || c[i] == '!' || c[i] == '?')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;
		}

		if (c[i] == 34 || c[i] == '(' || c[i] == ')' || c[i] == '{')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;
		}

		if (c[i] == '}' || c[i] == 39)
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;
		}
	}

	return (c);
}
