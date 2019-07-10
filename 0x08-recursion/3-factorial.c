#include "holberton.h"

/**
 * factorial - Function that return the factorial of a given number
 * @n: Number to be valued
 * Return: Factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
