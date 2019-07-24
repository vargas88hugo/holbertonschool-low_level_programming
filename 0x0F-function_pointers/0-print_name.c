#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 * @name: Name of the person
 * @f: Function as a parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
