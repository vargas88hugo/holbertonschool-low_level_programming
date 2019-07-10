#include "holberton.h"

/**
 * _pow_recursion - Function that returns the value of x to the power of y
 * @x: Base of power
 * @y: Exponation of power
 * Return: Value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	y--;
	return (x * _pow_recursion(x, y));
}
