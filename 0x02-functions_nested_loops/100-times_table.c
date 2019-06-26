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
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				x = i * j;
				if (x <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + x);
				}
				else if (x <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((x / 100) % 10) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
			_putchar(10);
		}
	}
}
