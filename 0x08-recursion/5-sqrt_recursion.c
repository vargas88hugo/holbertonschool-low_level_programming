#include "holberton.h"

/**
 * _power - Function that valued if is prime
 * @a: Number to be valued
 * @b: Parameter for value
 * Return: Return the value
 */
int _power(int a, int b)
{
	if ((b * b) == a)
		return (b);
	else if ((b * b) < a)
		return (_power(a, b + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Function that returns the natural square root
 * @n: Number to be valued
 * Return: The natural square root or -1 if don't have square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

		return (_power(n, 2));
}
