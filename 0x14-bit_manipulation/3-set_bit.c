#include "holberton.h"

/**
 * set_bit - Function that sets the value of a bit to 1
 * @n: Number to be modified
 * @index: Index of binary number
 * Return: 1 if it worked and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index > 63)
		return (-1);

	*n |= i;

	return (1);
}
