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
	if (argc == 4)
	{
		if(func = get_op_func(argv[2]))
			if(*get_op_func(argv[2])(argv[1], argv[3]))
		{
			if func != NULL
					   func(argv[1], argv[3])
		}
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
