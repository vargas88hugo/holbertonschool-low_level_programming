#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, i, j, m;

	n = 612852475143;

	for (i = 3; i < n; i++)
	{
	        if (n % i == 0)
		{
			for (j = 3; j < i; j++)
			{
				if (i % j == 0)
				{
					break;
				}
			}

			if (j == i)
			{
				m = i;
			}
		}
	}

	printf("%ld\n", m);


	return (0);
}
