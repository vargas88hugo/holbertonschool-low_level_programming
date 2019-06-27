#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, i, j, tmp, m;

	n = 612852475143;

	for (i = 3; i < n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				tmp = 0;
				break;
			}
			else
			{
				tmp = 1;
			}
		}
		if (tmp == 1)
		{
			m = i;
		}
	}

	printf("%ld\n", m);

	return (0);
}
