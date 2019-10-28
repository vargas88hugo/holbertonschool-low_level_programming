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
 * shell_sort - Shell sort algorithm with the sequence Knuth
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	int h, i, j;

	h = 1;
	while (h < (int)size / 3)
		h = 3 * h + 1;

	while (h > 0)
	{
		for (i = h; i < (int)size; i++)
		{
			for (j = i; j > 0 && array[j] < array[j - h]; j -= h)
			{
				swap(&array[j], &array[j - h]);
			}
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
