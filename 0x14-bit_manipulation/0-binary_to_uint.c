#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary number to decimal
 * @b: Binary number in a string
 * Return: The converted number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int res = 0, i, j = 1, k;

	for (k = 0; b[k] != '\0'; k++)
		;

	if (k > 32)
		return (0);

	for (i = k - 1; i >= 0; i--, j *= 2)
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);

		if (b[i] & 1)
			res += j;
	}

	return (res);

}
