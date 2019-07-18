#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Number to be checked
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
        void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
