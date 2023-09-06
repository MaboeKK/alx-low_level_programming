#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array.
 * @width: Colums.
 * @height: Rows.
 * Return: NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, g;
	int **outp;

	if (width <= 0 || height <= 0)
		return (NULL);

	outp = malloc(sizeof(int *) * height);

	if (outp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		outp[i] = malloc(sizeof(int) * width);

		if (outp[i] == NULL)
		{
			free(outp);
			for (g = 0; g <= height; g++)
				free(outp[g]);
			return (NULL);
		}
		for (g = 0; g < width; g++)
			outp[i][g] = 0;
	}
	return (outp);
}
