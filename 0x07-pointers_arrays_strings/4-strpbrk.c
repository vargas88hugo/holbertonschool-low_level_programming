#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: String to be scanned
 * @accept: String containing the characters to match
 * Return: It returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (count == 1)
			break;
	}

	return (s + i);
}
