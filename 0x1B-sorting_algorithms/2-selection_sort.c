#include "sort.h"


/**
 * swap - function that swaps two values of an array
 * @a1: first value
 * @a2: second value
 */
void swap(int *a1, int *a2)
{
	int temp;

	temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}

/**
 * selection_sort - Selection Sort Algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		swap(&array[k], &array[i]);
		print_array(array, size);
	}
}
