#include "holberton.h"

/**
 * jack_bauer - Function that prints every minute of the day of Jack
 *
 */
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{

					if (((b <= '9' && a != '2') || (b <= '3' && a == '2')))
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar(10);
					}
				}
			}
		}
	}
}
