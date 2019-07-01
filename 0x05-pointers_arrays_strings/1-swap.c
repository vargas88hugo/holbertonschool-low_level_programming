#include "holberton.h"

/**
 * swap_int - Function that swaps the value of two integers
 * @a: Value to be swap
 * @b: Value to be swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
