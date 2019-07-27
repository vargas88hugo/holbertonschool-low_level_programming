#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed to it
 * @format: list of argument types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list x;
	char *p = "";
	int j, i = 0;
	fr arr[] = {
		{"c", fnchar},
		{"i", fnint},
		{"f", fnfloat},
		{"s", fnstring},
		{NULL, NULL}
	};

	va_start(x, format);
	while (format && format[i])
	{
		j = 0;
		while (arr[j].a != NULL)
		{
			if (format[i] == arr[j].a[0])
			{
				printf("%s", p);
				arr[j].f(x);
				p = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(x);
}


/**
 * fnchar - Function that print with the char cast
 * @x: valist
 * Return: void
 */
void fnchar(Va_list x)
{
	printf("%c", (char) va_arg(x, int));
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
	printf("%f", (float)va_arg(x, double));
}

/**
 * fnstring - Function that print with the string cast
 * @x: valist
 * Return: void
 */
void fnstring(va_list x)
{
	char *p = va_arg(x, char *);

	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}
