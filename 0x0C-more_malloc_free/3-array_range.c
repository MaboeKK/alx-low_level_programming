#include "main.h"
#include "stdlib.h"

/**
 * array_range - Function entry point.
 * @min: Minimun array index.
 * @max: Maximun arrary index.
 * Return: Array range.
 */

int *array_range(int min, int max)
{
	int i, j, *a;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * j);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
