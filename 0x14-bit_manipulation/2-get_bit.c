#include "holberton.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: Number to be checked
 * @index: index of the binary number
 * Return: The value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;

	if (n & 1)
		return (1);

	return (0);
}
