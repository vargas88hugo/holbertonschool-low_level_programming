#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar(10);

	return (0);
}
