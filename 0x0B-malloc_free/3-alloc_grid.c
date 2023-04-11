#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - allocates memory to a grid
 * @width: grid width
 * @height: grid height
 * Return: pointer to grid or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
