#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: format of data type
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, c = 0;
	char *f;

	va_list x;

	f = (char *) format;

	while (format[i] != '\0')
	{
		if (f[i] == 'c' || f[i] == 'i' || f[i] == 'f' || f[i] == 's')
			c++;
		i++;
	}
	va_start(x, format);
	i = 0;
	while (i != c + 1)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(x, int));
			break;
		case 'i':
			printf("%d", va_arg(x, int));
			break;
		case 'f':
			printf("%f", va_arg(x, double));
			break;
		case 's':
			printf("%s", va_arg(x, char *));
			break;
		default:
			break;
		}
		if (i < c && (f[i] == 'c' || f[i] == 'i' || f[i] == 'f' || f[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(x);
}
