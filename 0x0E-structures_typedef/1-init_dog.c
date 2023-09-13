#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Dog structue initialization.
 * @d: The dog structure.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * Return: NULL.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
