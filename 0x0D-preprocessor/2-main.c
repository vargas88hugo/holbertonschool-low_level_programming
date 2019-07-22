#include "holberton.h"
#include <stdio.h>

/**
 * main - Program that prints the name of the file
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *a = __FILE__;

	printf("%s\n", a);

	return (0);
}
