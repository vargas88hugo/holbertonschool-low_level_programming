#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dim
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: Pointer of 2 dimensions or NULL if size is less than 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	a = malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		a[i] = malloc(sizeof(int) * height);

		for (j = 0; j < height; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
