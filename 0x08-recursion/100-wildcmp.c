#include "holberton.h"

/**
 * wildcmp - Function that compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 1 if the strings are identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 != *s1 && *s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*(s2 + 1) != *(s2 + 1))
			return (wildcmp(s1 + 1, s2));
		else if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		else if (*s2 == '\0' || *s1 == '\0')
			return (1);
	}
	else if (*s2 != *s1 && *s2 != '*')
		return (0);
	else if (*s2 == '\0')
		return (1);


	return (wildcmp(s1 + 1, s2 + 1));
}
