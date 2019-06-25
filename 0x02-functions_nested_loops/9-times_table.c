#include "holberton.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0
 *
 * Return: Always void
 */
void times_table(void)
{
	int a, b, c, i, j, x;

	for (a = 0 ; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			x = (a == 3 && c == 9) || (a > 4 && b == 1);

			if (c < 10)
			{
				_putchar(c + '0');
			}
			else
			{
				i = c / 10;
				j = c % 10;
				_putchar(i + '0');
				_putchar(j + '0');
			}
			if (b == 9)
			{
				_putchar(10);
			}
			else if (c >= 10 || ((a == 2 || a == 4) && c == 8) || x)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
