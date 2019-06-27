#include "holberton.h"

/**
 * print_number - Function that prints an integer
 * @n: Number to be print
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}

	if (i <= 9)
	{
		_putchar(i + '0');
	}
	else if (i >= 10 && i <= 99)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if (i >= 100 && i <= 999)
	{
		_putchar((i / 100) + '0');
		_putchar(((i / 10) % 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if (i >= 1000 && i <= 9999)
	{
		_putchar((i / 1000) + '0');
		_putchar(((i / 100) % 10) + '0');
		_putchar(((i / 10) % 10) + '0');
		_putchar((i % 10) + '0');
	}
}
