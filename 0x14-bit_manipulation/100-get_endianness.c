#include "holberton.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big indian or 1 if little indian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}
