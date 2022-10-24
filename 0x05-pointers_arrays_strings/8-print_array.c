#include "main.h"

/**
 * print_array - prints elements of the array
 * @a: array
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		printf("&d", a[q]);
		if (q != n - 1)
			printf(", ");
	}
	printf("\n");
}
