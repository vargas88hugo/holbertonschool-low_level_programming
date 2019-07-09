#include "holberton.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: String to be examined
 * @needle: Sub-string to be searched
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; *(haystack + i); i++)
	{
		if (*(haystack + i) == *needle)
		{
			k = i;
			for (j = 0; *(needle + j) && *(haystack + i); j++, i++)
			{
				if (*(haystack + i) != *(needle + j))
					return ('\0');
			}
			return (haystack + k);
		}
	}

	return (0);
}
