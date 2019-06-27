#include "holberton.h"

/**
 * print_number - Function that prints an integer
 * @n: Number to be print
 */
void print_number(int n)
{
        unsigned int i = n;

	if ((n >= 0 && n <= 9) || (n < 0 && n >= -9))
	{
		if (n < 0)
		{
			_putchar('-');
			i = n * -1;
		}
		_putchar(i + '0');
	}
	else if ((n >= 10 && n <= 99) || (n <= -10 && n >= -99))
	{
		if (n <= -10)
		{
			_putchar('-');
			i = n * -1;
		}
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if ((n >= 100 && n <= 999) || (n <= -100 && n >= -999))
	{
		if (n <= -100)
		{
			_putchar('-');
			i = n * -1;
		}
		_putchar((i / 100) + '0');
		_putchar(((i / 10) % 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if ((n >= 1000 && n <= 9999) || (n <= -1000 && n >= -9999))
	{
		if (n <= -1000)
		{
			_putchar('-');
			i = n * -1;
		}
		_putchar((i / 1000) + '0');
		_putchar(((i / 100) % 10) + '0');
		_putchar(((i / 10) % 10) + '0');
		_putchar((i % 10) + '0');
	}
}
