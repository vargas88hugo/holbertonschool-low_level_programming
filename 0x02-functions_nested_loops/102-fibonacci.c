#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int i, a = 1, b = 2, c;

	for (i = 1; i <= 50; i++)
	{
		if (i <= 2)
		{
			c = i;
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%lld", c);
		if (i < 50)
		{
			printf(", ");
		}
	}
	putchar(10);

	return (0);
}
