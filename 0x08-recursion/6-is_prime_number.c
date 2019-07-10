#include "holberton.h"

/**
 * _check - Function that checks if is prime
 * @a: Number to be valued
 * @b: Number to be checked
 * Return: 1 if is prime or 0 otherwise
 */
int _check(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (_check(a, b + 1));
}

/**
 * is_prime_number - Function that returns 1 if the input integer is a prime
 * @n: Number to be valued
 * Return: 1 if is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	return (_check(n, 2));
}
