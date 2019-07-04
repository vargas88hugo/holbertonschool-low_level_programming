#include "holberton.h"

/**
 * cap_string - Function that capitalizes all words of string
 * @c: string to be capitalized
 * Return: string capitalized
 */
char *cap_string(char *c)
{
	int i, j;
	char a[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((c[i] == a[j]) && c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;

			if (c[i] >= 'a' && c[i] <= 'z' && i == 0)
				c[i + 1] -= 32;
		}
	}

	return (c);
}
