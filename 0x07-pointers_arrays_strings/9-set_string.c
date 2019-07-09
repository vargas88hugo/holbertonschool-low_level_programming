#include "holberton.h"

/**
 * set_string - Function that sets de value pointer of a pointer to a char
 * @s: String to be set
 * @to String to be changed
 */
void set_string(char **s, char *to)
{
	*s = to;
}
