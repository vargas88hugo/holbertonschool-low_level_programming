#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer
 * @array: Array to be checked
 * @size: Size of the array
 * @cmp: Check function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	for (i = 0, j = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
		    j = i;
		    break;
		}
	}

	if (j == 0 || size <= 0)
		return (-1);

	return (j);
}
