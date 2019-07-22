#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: Pointer of the struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
		{
			d->name = "(nil)";
			printf("Name: %s\n", d->name);
		}

		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
		{
			d->age = 0;
			printf("Age: %f\n", d->age);
		}

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
		{
			d->owner = "(nil)";
			printf("Owner: %s\n", d->owner);
		}
	}
}
