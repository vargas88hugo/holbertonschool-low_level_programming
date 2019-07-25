#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Number of arguments
 * @argv: Array of strings
 * Return: Always 0 (Success);
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
