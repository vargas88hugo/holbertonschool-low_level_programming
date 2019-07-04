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
	int i, j = 0, b = 0;

	while (*(dest + j) != '\0')
	{
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

	for (i = 0; i < j; i++, b++)
	{
		*(dest + i) = *(src + b);
	}

	return (dest);
}
