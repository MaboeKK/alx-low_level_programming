#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - Returns pointer to allocated memory.
 * @b: input variable.
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
