#include "holberton.h"

/**
 * _islower - Function that checks for lowercase
 *
 * @c: The number to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	int n;

	if (c >= 97 && c <= 122)
	{
		n = 1;
	}
	else
	{
		n = 0;
	}

	return (n);
}
