#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: First string to be concatenated
 * @src: Second string to be concatenated
 * @n: number of bytes from src
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, a, b = 0;

	while (1)
	{
		if (*(dest + i) == '\0')
			break;
		i++;
	}

	while (1)
	{
		if (*(src + j) == '\0')
			break;
		j++;
	}

	if (n >= j)
	{
		;
	}
	else
	{
		j = n;
	}
	for (a = i; a < i + j; a++)
	{
		*(dest + a) = *(src + b);
		b++;
	}

	*(dest + a) = '\0';

	return (dest);
}
