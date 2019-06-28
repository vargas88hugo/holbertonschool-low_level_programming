#include "holberton.h"

/**
 * print_number - Function that prints an integer
 * @n: Number to be print
 */
void print_number(int n)
{
	unsigned int i, j, k, x;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		i = n;
	}

	j = i;
	k = 0;
	x = 1;

	while (j != 0)
	{
		j /= 10;
		k++;
		x *= 10;
	}

	while (k > 0)
	{
		x /= 10;
		_putchar(((i / x) % 10) + '0');
		k--;
	}
}
