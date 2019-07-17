#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - Function that splits a string into words
 * @str: String to be worked
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k = 0 ,c = 0;
	char **a;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			c++;
	}

	a = malloc(sizeof(char *) + c);

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			for (j = 0; str[i] != '\0'; i++)
				a[k][j] = str[i];

			k++;
		}
	}

	return (a);
}
