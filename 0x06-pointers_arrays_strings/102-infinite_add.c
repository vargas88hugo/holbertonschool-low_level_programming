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
	int i, j, x, y, z, sum, add;
	char *a, *b;

	for (i = 0; n1[i] != '\0'; i++)
		;

	for (j = 0; n2[j] != '\0'; j++)
		;

	(i > j) ? (a = n1, b = n2) : (a = n2, b = n1);

	for (x = i - 1, y = j - 1, z = 0, add = 0; x >= 0 || add != 0; x--, y--, z++)
	{
		sum = (x >= 0) ? ((a[x] - 48) + add) : add;
		sum = (y >= 0) ? ((b[y] - 48) + sum) : sum;

		if (sum <= 9)
		{
			add = 0;
			r[x + 1] = sum + 48;
		}
		else
		{
			add = sum;
			sum %= 10;
			add /= 10;
			r[x + 1] = sum + 48;
		}
		/*printf("| %d %d | %c %c | %d %d |\n", x, y, a[x], b[y], add, sum);*/
	}
	r[z] = '\0';
	if (z >= size_r)
		return (0);

	return (r);
}
