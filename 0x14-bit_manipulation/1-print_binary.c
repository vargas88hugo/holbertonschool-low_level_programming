#include "holberton.h"

/**
 * print_binary - Function that prints the binary of a decimal
 * @n: Number to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	(n & 1) ? _putchar('1') : _putchar('0');
}
