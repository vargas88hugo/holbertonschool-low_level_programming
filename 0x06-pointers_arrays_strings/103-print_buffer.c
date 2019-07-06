#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - Function that print a buffer
 * @b: String to be printed
 * @size: Size of String
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x ", i);

		for (j = i; j < i + 10; j += 2)
		{
			printf("%.2x%.2x ", b[j], b[j + 1]);
			if (j >= size - 2)
				break;
		}
		for (k = i; k < i + 10; k++)
		{
			b[k] = (b[k] >= 0 && b[k] <= 31) ? ('.') : (b[k]);

			(k == size - 6) ? printf("%11c", b[k]) : printf("%c", b[k]);

			(k == i + 9 || k == size - 1) ? printf("\n") : k;

			if (k >= size - 1)
			{
				break;
			}
		}
	}
}
