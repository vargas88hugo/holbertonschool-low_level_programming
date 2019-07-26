#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: Separator between strings
 * @n: Number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned i;

	if (separator == NULL)
		separator = "";

	va_list x;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{

		const char *str = va_arg(x, const char *);

		if (str == NULL)
		  str = "(nil)";

		printf("%s", str);

		if (i != n - 1)
 			printf("%s ", separator);
	}
	printf("\n");

	va_end(x);
}
