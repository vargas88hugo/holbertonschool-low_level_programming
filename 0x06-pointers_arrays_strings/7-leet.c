#include "holberton.h"

/**
 * leet - Function that encode a string
 * @c: String to be encoded
 * Return: encoded value
 */
char *leet(char *c)
{
	int i, j;
	int l[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int n[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == l[j])
			{
				c[i] = n[j];
			}
		}
	}

	return (c);
}
