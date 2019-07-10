#include "holberton.h"

/**
 * _pow_recursion - Function that find power number for square root
 * @a: base of the power
 * @b: exponation of the power
 * Return: Power of the number
 */
int _pow_recursion(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	else
		return (_pow_recursion(a, b + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: Number to be valued
 * Return: The natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (_pow_recursion(n, 2));
}
