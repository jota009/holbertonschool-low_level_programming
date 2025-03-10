#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers initialized to 0
 * @width: width of 2D array
 * @height: Height of 2D array
 *
 * Return: Pointer to the 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		grid[i] = (int *)malloc(height * sizeof(int));
	if (grid[i] == NULL)

		for (j = 0; j < i; j++)
			free(grid[j]);

	free(grid);
	return (NULL);

	for (j = 0; j < height; j++)
		grid[i][j] = 0;

	return (grid);
}
