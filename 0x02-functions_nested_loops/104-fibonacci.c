#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, a = 1, b = 2, c, c1, a1, b1;

	for (i = 1; i <= 98; i++)
	{
		if (i < 93)
		{
			if (i <= 2)
				c = i;
			else
			{
				c = a + b;
				a = b;
				b = c;
			}
			printf("%lu", c);
		}
		else
		{
			if (i == 93)
			{
				a1 = a % 1000000000, a /= 1000000000;
				b1 = b % 1000000000, b /= 1000000000;
			}
			c1 = a1 + b1, c = a + b;
			a = b, a1 = b1;
			b = c, b1 = c1;
			if (c1 > 999999999)
			{
				c += c1 / 1000000000;
				c1 %= 1000000000;
			}
			printf("%lu%lu", c, c1);
		}
		if (i < 98)
			printf(", ");
	}
	putchar(10);

	return (0);
}
