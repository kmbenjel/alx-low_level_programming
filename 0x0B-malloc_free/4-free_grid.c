#include "main.h"

/**
 * free_grid - Free Grid
 * Description: Write a function that frees a
 * 2 dimensional grid previously created by
 * your alloc_grid function.
 * @grid: int**
 * @height: int
 */

void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height && grid[i])
	{
		free(grid[i]);
		i++;
	}
	if (grid)
		free(grid);
}
