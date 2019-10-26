#include "sort.h"

/**
 * bubble_sort - Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

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
