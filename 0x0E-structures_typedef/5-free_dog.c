#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - Frees the dog.
 * @d: The dog structure.
 * Return: NULL.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
