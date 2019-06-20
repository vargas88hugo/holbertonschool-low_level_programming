#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n < 122)
	{
		n++;

		if (n == 113)
		{
			continue;
		}
		else if (n == 101)
		{
			continue;
		}

		putchar(n);
	}

	putchar(10);

	return (0);
}
