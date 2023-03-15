#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *              integers with each element initalized to 0.
 *  @width: width of the 2-dimensional array.
 *  @height: height of the 2-dimensional array.
 *
 * Return: NULL If width <= 0, height <= 0, or error
 *      else a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int rows, cols;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		grid[rows] = malloc(sizeof(int) * width);
		if (grid[rows] == NULL)
		{
			for (cols = 0; cols < rows; cols++)
				free(grid[cols]);
			free(grid);
			return (NULL);
		}
		for (cols = 0; cols < width; cols++)
		{
			grid[rows][cols] = 0;
		}
	}
	return (grid);
}
