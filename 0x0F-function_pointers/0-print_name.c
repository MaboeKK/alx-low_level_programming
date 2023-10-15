#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function to print name.
 * @name: The name.
 * @f: Function variable.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
