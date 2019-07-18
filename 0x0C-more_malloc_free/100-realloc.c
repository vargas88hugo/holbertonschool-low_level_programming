#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Function that reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory
 * @old_size: Old size
 * @new_size: New size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		a = malloc(new_size);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		free(ptr);

		a = malloc(new_size);
	}

	return (a);
}
