#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers
 * @separator: separator between each number
 * @n: Number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_list x;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, unsigned int));

		if (i != n - 1)
			printf("%s ", separator);
	}

	printf("\n");
}
