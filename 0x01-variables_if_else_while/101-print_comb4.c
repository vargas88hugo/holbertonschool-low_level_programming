#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48, m = 48, l = 48;

	while (n <= 57)
	{
		m = 48;
		while (m <= 57)
		{
			l = 48;
			while (l <= 57)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			m++;
		}
		n++;
	}
	putchar(10);
	return (0);
}
