#include "holberton.h"

/**
 * print_binary - Function that prints the binary of a decimal
 * @n: Number to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int i, s = 0;
	unsigned int index = 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 1 << index;
	for (; i > 0; i = i >> 1)
	{
		if (n & i)
			s = 1;

		if (s == 1 && (n & i))
			_putchar('1');
		else if (s == 1)
			_putchar('0');
	}
}
