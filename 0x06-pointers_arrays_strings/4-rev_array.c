#include "main.h"

/**
 * reverse_array - function name to reverse array elements
 * @a: array decleration
 * @n: number of elements
 * Return: reverse_array
 */
void reverse_array(int *a, int n)
{
	int i;
	int q;

	for (i = 0; i < n; i++)
	{
		n--;
		q = a[i];
		a[i] = a[n];
		a[n] = q;
	}
}
