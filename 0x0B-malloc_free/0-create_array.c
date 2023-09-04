#include "main.h"

/**
 * 0-create_array - creates array of chars, and initializes
 * @c : char
 * @size : size of array
 * Return: pointer to array, NULL if fails
 */

char *create_array(usigned int size, char c);
{
	int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
