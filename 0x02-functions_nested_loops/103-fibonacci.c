#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a = 1, b = 2, c;

	c = 0;

	printf("1, 2");

	while (c <= 4000000)
	{
		if (c < 3)
		{
			c = a + b;
		}
		else
		{
			a = b;
			b = c;
			c = a + b;
		}

		if (c <= 4000000 && c % 2 == 0)
		{
		printf(", %ld", c);
		}
	}
	putchar(10);

	return (0);
}
