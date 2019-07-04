#include "holberton.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Copy string
 * @src: String to be copied
 * @n: Number of bytes from src
 * Return: A copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0, a = 0, b;

	while (1)
	{
		if (*(src + j) == '\0')
			break;
		j++;
	}

	while (1)
	{
		if (*(dest + a) == '\0')
			break;
		a++;
	}

	if (n >= j)
	{
		;
	}
	else
	{
		j = n;
	}

	for (i = 0,  b = 0; i < j; i++, b++)
	{
		*(dest + i) = *(src + b);
	}

        for (; i < a; i++)
		*(dest + i) = '\0';

	return (dest);
}