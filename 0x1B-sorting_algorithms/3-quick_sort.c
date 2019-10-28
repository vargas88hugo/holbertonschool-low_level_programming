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
 * partition - Function that takes last element as pivot, places
 * the pivot element at its correct position in sorted array
 * @array: subarray to be partitioned and sorted
 * @low: low of the array
 * @high: high of the array
 * @size: size of the array
 * Return: the index of the pivot
 */
int partition(int *array, int low, int high, int size)
{
	int i, j, p;

	i = low - 1;
	p = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] <= p)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_pro - Quick Sort Algorithm
 * @array: array to be sorted
 * @low: low of the array
 * @high: high of the array
 * @size: size of the array
 */
void quick_sort_pro(int *array, int low, int high, int size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);

		quick_sort_pro(array, low, pi - 1, size);
		quick_sort_pro(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Quick Sort Algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;

	quick_sort_pro(array, 0, size - 1, size);
}
