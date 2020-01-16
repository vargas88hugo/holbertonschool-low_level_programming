#include "search_algos.h"

void print_array(int *array, int low, int hight);

/**
 * binary_search - Function that searchs for a value in an array of integers
 * using binary search
 * @array: array to perform the search
 * @size: number of elements in array
 * @value: value to search
 * Return: The index value or -1 if value is not present or the array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, hight = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= hight)
	{
		mid = low + ((hight - low) / 2);
		print_array(array, low, hight);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			hight = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

	}

	return (-1);
}

/**
 * print_array - Function that prints the array
 * @array: array to be printed
 * @low: minimum index
 * @hight: maximum index
 */
void print_array(int *array, int low, int hight)
{
	int i;


	printf("Searching in array: %d", array[low]);

	for (i = low + 1; i <= hight; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}
