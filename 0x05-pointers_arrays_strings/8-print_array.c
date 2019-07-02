#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of array
 * @a: array to be used
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i, l = n - 1;

	for (i = 0; i <= l; i++)
	{
		printf("%d", a[i]);
		if (i < l)
			printf(", ");
	}
}
