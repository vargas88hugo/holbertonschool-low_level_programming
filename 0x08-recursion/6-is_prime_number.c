#include "holberton.h"

/**
 * _check - Function that check if is prime or not
 * @a: Number tu be valued
 * @b: Checker value
 * Return: 1 if is prime or 0 otherwise
 */
int _check(int a, int b)
{
	if (a % b == 0 && a == b)
		return (1);
	else if (a % b == 0 && b < a)
		return (0);

	return (_check(a, b + 1));
}

/**
 * is_prime_number - Function that return if the input is prime number
 * @n: Number to be valued
 * Return: Return 1 if is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n <= 0)
		return (0);

	return (_check(n, 2));
}
