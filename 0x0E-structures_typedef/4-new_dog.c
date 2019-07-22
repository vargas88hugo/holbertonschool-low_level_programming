#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner dog
 * Return: A new struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, x, y;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	d->name = malloc(sizeof(char) + (i + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (x = 0; x <= i; x++)
		d->name[x] = name[x];
	d->age = age;
	d->owner = malloc(sizeof(char) + (j + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (y = 0; y <= j; y++)
		d->owner[y] = owner[y];
	return (d);
}
