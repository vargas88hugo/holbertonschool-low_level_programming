#include "holberton.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char str[10] = "Holberton\n";

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(str[i]);
	}

	return (0);
}
