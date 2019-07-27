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
	unsigned int i;
	const char *str;

	va_list x;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(x, n);

	for (i = 0; i < n; i++)
	{

		str = va_arg(x, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s ", separator);
	}
	printf("\n");

	va_end(x);
}
