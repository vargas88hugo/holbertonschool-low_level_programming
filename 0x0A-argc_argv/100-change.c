#include <stdio.h>
#include <stdlib.h>
#define LEN 5

/**
 * main - Entry Point
 * @argc: Number of arguments passed
 * @argv: Array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, x, count = 0;
	int y[LEN] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	for (i = LEN - 1; i >= 0; i--)
	{
		if (x - y[i] >= 0 && x)
		{
			x -= y[i];
			i++, count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
