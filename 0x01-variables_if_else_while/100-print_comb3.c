#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48, m;

	while (n <= 57)
	{
		m = 48;

		while (m <= 57)
		{

			if (m > n && m != n)
			{
				putchar(n);

				putchar(m);

				if (n != 56 || m != 57)
				{
					putchar(',');

					putchar(' ');
				}
			}

			m++;
		}

		n++;
	}

	putchar(10);

	return (0);
}
