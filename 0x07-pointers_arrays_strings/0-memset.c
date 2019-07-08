#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Starting adress of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled
 * Return: An addres filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
