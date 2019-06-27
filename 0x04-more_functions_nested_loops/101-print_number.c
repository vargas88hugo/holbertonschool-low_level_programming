#include "holberton.h"

/**
 * print_number - Function that prints an integer
 * @n: Number to be print
 */
void print_number(int n)
{
        int i = n;

	if ((i >= 0 && i <= 9) || (i < 0 && i >= -9))
	{
		if (i < 0)
		{
			_putchar('-');
			i *= -1;
		}
		_putchar(i + '0');
	}
	else if ((i >= 10 && i <= 99) || (i <= -10 && i >= -99))
	{
		if (i <= -10)
		{
			_putchar('-');
			i *= -1;
		}
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if ((i >= 100 && i <= 999) || (i <= -100 && i >= -999))
	{
		if (i <= -100)
		{
			_putchar('-');
			i *= -1;
		}
		_putchar((i / 100) + '0');
		_putchar(((i / 10) % 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if ((i >= 1000 && i <= 9999) || (i <= -1000 && i >= -9999))
	{
		if (i <= -1000)
		{
			_putchar('-');
			i *= -1;
		}
		_putchar((i / 1000) + '0');
		_putchar(((i / 100) % 10) + '0');
		_putchar(((i / 10) % 10) + '0');
		_putchar((i % 10) + '0');
	}
}
