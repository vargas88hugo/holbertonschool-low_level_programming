#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - Function that print a buffer
 * @b: String to be printed
 * @size: Size of String
 */
void print_buffer(char *b, int size)
{
	int i, j, k, l;

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x ", i);

		for (j = i; j < i + 10; j += 2)
		{
			if (b[j] == '\0' && (i + 10) >= size)
			{
				for (l = j; l <= i + 10; l++)
					printf("  ");
				break;
			}
			else
				printf("%.2x%.2x ", b[j], b[j + 1]);
		}
		for (k = i; k < i + 10; k++)
		{
			b[k] = (b[k] >= 0 && b[k] <= 31) ? ('.') : (b[k]);

			printf("%c", b[k]);

			(k == i + 9 || k == size - 1) ? printf("\n") : k;

			if (k >= size - 1)
			{
				break;
			}
		}
	}
}
