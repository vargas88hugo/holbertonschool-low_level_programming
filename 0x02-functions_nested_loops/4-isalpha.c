#include "holberton.h"

/**
 * _isalpha - Function that checks for alphabetic character
 *
 * @c: The number to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	int n;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		n = 1;
	}
	else
	{
		n = 0;
	}

	return (n);
}
