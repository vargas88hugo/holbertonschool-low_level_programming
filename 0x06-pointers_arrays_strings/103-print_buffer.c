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

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);

			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");

				if (j < size)
					printf("%.2x", b[j]);
				else
					printf("  ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
				{
					break;
				}

				b[k] = (b[k] >= 0 && b[k] <= 31) ? ('.') : (b[k]);

				printf("%c", b[k]);
			}
			printf("\n");
		}
	}
}
