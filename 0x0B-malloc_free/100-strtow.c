#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - Function that splits a string into words
 * @str: String to be worked
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, c1, c2;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0, c1 = 0; str[i] != '\0'; i++)
		if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
			c1++;
	a = (char **)malloc(sizeof(char *) * c1 + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] != '\0'; i++)
		if (str[i] >= 33 && str[i] <= 126)
		{
			c2++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				a[j] = (char *)malloc(sizeof(char *) * c2 + 2), c2 = 0;

				if (a[j] == NULL)
				{
					for (k = j; j >= 0; j--)
						free(a[j]);
					free(a);
					return (NULL);
				}
				j++;
			}
		}
	for (i = 0, j = 0, k = 0; str[i] != '\0'; i++)
		if (str[i] >= 33 && str[i] <= 126)
		{
			a[j][k] = str[i], k++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				a[j][k] = '\0', j++, k = 0;
			}
		}
	a[j] = NULL;
	return (a);
}
