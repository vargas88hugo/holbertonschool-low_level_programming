#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs
 * @d: Struct to be free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
