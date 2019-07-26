#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all parameters
 * @n: Number of arguments
 * Return: The sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int sum = 0, i;

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, unsigned int);

	va_end(x);

	return (sum);
}
