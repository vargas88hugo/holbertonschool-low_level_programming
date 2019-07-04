#include "holberton.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: String to be compared
 * @s2: String to be compared
 * Return: 0 if are identical
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			n = 0;
		}
		else
		{
			n = s1[i] - s2[i];
			break;
		}
	}

	return (n);
}
