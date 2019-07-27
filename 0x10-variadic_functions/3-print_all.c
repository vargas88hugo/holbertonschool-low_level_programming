#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * fnchar - Function that print with the char cast
 * @x: valist
 * Return: void
 */
void fnchar(va_list x)
{
	printf("%c", va_arg(x, int));
}

/**
 * fnint - Function that print with the int cast
 * @x: valist
 * Return: void
 */
void fnint(va_list x)
{
	printf("%d", va_arg(x, int));
}

/**
 * fnfloat - Function that print with the float cast
 * @x: valist
 * Return: void
 */
void fnfloat(va_list x)
{
	printf("%f", va_arg(x, double));
}

/**
 * fnstring - Function that print with the string cast
 * @x: valist
 * Return: void
 */
void fnstring(va_list x)
{
	printf("%s", va_arg(x, char *));
}

/**
 * print_all - Function that prints anything
 * @format: format of data type
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, k;

	va_list x;

	fr arr[] = {
		{'c', fnchar},
		{'i', fnint},
		{'f', fnfloat},
		{'s', fnstring},
		{'\0', NULL}
	};

	va_start(x, format);

	while (format[i] != '\0')
	{
		j = 0, k = 0;
		while (arr[j].a != '\0')
		{
			if (format[i] == arr[j].a)
			{
				arr[j].f(x);
				k = 1;
			}

			j++;
		}
		i++;

		if (format[i] != '\0' && k == 1)
		{
			printf(", ");
		}
	}
	printf("\n");

	va_end(x);
}
