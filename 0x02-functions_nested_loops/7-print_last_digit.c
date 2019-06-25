#include "holberton.h"

/**
 * print_last_digit - Function that prints the last digit
 *
 * @a: The number to be checked
 *
 * Return: Last digit of the number
 */
int print_last_digit(int a)
{
	int n;

	if (a > 0)
	{
		n = (a % 10) + '0';
		_putchar(n);
	}
	else
	{
		n = ((a % 10) * -1) + '0';
		_putchar(n);
	}

	return (n - '0');
}
