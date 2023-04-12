#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int *) * height);

	if (grd == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grd[x] = malloc(sizeof(int) * width);

		if (grd[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grd[x]);

			free(grd);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grd[x][y] = 0;
	}

	return (grd);
}
