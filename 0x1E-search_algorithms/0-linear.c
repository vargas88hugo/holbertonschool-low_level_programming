#include "search_algos.h"

/**
 * linear_search - Function that searchs for a value in an array of integers
 * using linear search
 * @array: array to perform the search
 * @size: number of elements in array
 * @value: value to search
 * Return: The index value or -1 if value is not present or the array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
