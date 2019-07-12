#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: String to be scanned
 * @accept: String containing the characters to match
 * Return: It returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == '\0')
			return ('\0');

		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return (0);
}
