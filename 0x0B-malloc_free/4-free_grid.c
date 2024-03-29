#include "main.h"
#include <stdlib.h>

/**
 * free_grid - .Write a function that frees
 *	a 2 dimensional grid previously created.
 * @grid: 2 dimensional grid to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
