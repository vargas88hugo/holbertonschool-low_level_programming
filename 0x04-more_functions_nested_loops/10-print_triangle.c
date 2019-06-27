#include "holberton.h"

/**
 * print_triangle - Function that prints a triangle
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

        if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar(10);
		}
	}
	else
	{

	}
}
