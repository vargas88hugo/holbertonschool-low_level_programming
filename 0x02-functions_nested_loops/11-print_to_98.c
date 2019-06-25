#include "holberton.h"

/**
 * print_to_98 - Function that prints natural numbers from n to 98
 *
 * @n: The number to be checked
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{

			if (i < 10 && i >= 0)
			{
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				if (i > -10)
				{
					_putchar('-');
					_putchar(((i % 10) * -1) + '0');
				}
				else
				{
					_putchar('-');
					_putchar(((i / 10) * -1) + '0');
					_putchar(((i % 10) * -1) + '0');
				}
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar(10);
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 10 && i > 0)
			{
				_putchar(i + '0');
			}
			else if (i >= 10 && i < 100)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i / 100) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
