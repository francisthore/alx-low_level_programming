#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees up memory of a grid
 * @grid: a 2d array
 * @height: height of the 2d array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
