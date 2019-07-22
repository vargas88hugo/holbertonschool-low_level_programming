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
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: 0\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
