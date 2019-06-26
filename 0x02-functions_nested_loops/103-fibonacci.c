#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a = 1, b = 2, c = 0, sum = 0;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c <= 4000000 && c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
