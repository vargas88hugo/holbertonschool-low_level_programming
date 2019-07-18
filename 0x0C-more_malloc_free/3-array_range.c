#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: Array Range
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	if (min > max)
		return (NULL);

	range = max - min;

	p = malloc(sizeof(int) * range);

	for (i = 0; i < range; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
