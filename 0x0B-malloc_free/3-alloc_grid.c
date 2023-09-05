#include "main.h"

/**
 * alloc_grid - 2D-Array of ints
 * Description: Write a function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: int**
 */

int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int **));
	int i, j;

	if (!grid || width <= 0 || height <= 0)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			j = -1;
			while (grid[++j])
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

