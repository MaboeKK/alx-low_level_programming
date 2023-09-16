#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Iteration of the array.
 * @array: The array.
 * @size: The size.
 * @action: THe action variable.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
