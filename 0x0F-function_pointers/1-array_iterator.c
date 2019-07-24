#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function gives as a parameter
 * @array: Array of numbers
 * @size: Size of array
 * @action: Pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
