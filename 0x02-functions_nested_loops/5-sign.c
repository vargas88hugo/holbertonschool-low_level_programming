#include "holberton.h"

/**
 * print_sign - Function that prints the sign of a number
 *
 * @n: The number to be checked
 *
 * Return: 1 and + if n is greater than zero, 0 and 0 if n is zero, -1 and -
 * if n is less than zero
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		_putchar('-');
		i = -1;
	}

	return (i);
}
