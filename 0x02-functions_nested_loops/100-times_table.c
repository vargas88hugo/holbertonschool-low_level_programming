#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table - Function that prints n times table
 *
 * @n: The number to be used
 *
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;

				if (j == 0)
					printf("%d", x);
				else if (x <= 9 && j != 0)
					printf(",   %d", x);
				else if (x <= 99)
					printf(",  %d", x);
				else
					printf(", %d", x);

				if (j == n)
					putchar(10);
			}
		}
	}
}
