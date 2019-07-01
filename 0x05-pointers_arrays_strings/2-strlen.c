#include "holberton.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: String to be check
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int count, i = 0;

	while (1)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		i++;
		count++;
	}

	return (count);
}
