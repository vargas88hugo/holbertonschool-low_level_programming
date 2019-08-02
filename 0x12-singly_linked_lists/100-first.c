#include <stdio.h>

/**
 * proto - Function that prints before main
 * Return: void
 */
void proto(void) __attribute__ ((constructor));

void proto(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	printf("%s", s);
}
