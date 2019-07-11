#include "holberton.h"

/**
 * _len - Function that return the length of string
 * @s: String to be valued
 * Return: Length of string
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _len(s + 1));
}

/**
 * _compar - Function that compare both strings
 * @s: String to be compared
 * @len: Length of string
 * @i: Beginning of string
 * Return: 1 if is palindrome and 0 if is not
 */
int _compar(char *s, int len, int i)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
		return (1);
	else if (*(s + i) != *(s + len - 1 - i))
		return (0);
	else
		return (_compar(s, len, i + 1));
}

/**
 * is_palindrome - Function that return if is palindrome or not
 * @s: String to be valued
 * Return: 1 if a string if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (_compar(s, _len(s), 0) == 1)
		return (1);
	else
		return (0);
}
