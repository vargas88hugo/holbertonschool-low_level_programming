#include "holberton.h"
#include <stdio.h>

/**
 * infinite_add - Function that adds two big numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer
 * @size_r: Size of the buffer
 * Return: The add fo two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, x, y, z, sum, tmp;
	char *a, *b;

	(n1 > n2)?(a = n1, b = n2):(a = n2, b = n1);

	for (i = 0; a[i] != '\0'; i++)
		;

	for (j = 0; b[j] != '\0'; j++)
		;

	for (k = 0; k < size_r; k++)
		r[k] = 48;

	for (x = i - 1, y = j - 1, z = 0; x >= 0 && y >= 0; x--, y--, z++)
	{
		sum = (a[x] - 48) + (b[y] - 48) + (r[z] - 48);

		if (sum <= 9)
			r[z] = sum + 48;
		else
		{
			if (z + 1 < size_r)
			{
				tmp = sum;
				sum %= 10;
				tmp /= 10;

				r[z] = sum + 48;
				r[z + 1] = tmp + 48;
			}
			else
			{
				i = 0;
				break;
			}
		}
	}
	r[z + 1] = '\0';

	for (x = 0; r[x] != '\0'; x++)
		;

	for (y = 0; y < x - 1; y++)
	{
		for (k = y + 1; k > 0; k--)
		{
			tmp = r[k];
			r[k] = r[k - 1];
			r[k - 1] = tmp;
		}
	}

	if (x < size_r)
		return (r);
	else
		return (0);

}
