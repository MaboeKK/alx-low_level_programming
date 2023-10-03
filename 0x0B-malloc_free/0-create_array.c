#include "main.h"

/**
 * *create_array - Creates an array of characters and initializes them.
 * @c : char variable.
 * @size : The size of the array.
 * Return: Pointer to array, NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NUUL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
