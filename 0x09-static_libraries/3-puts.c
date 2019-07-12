#include "holberton.h"

/**
 * _puts - Function that prints a string
 * @str: String to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (1)
	{
		if (*(str + i) != '\0')
			_putchar(*(str + i));
		else
			break;

		i++;
	}
	_putchar(10);
}
