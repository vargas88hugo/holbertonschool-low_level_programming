#include "holberton.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: String to be examined
 * @needle: Sub-string to be searched
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

        j = needle;

	if (*j == 0)
		return (haystack);

	for (; *haystack; haystack++)
	{
		if (*haystack != *j)
			continue;

		i = haystack;

		while (1)
		{
			if (*j == 0)
				return (haystack);

			if (*i++ != *j++)
				break;
		}
		j = needle;
	}

	return ('\0');
}
