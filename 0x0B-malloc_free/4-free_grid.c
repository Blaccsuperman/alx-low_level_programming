#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2d grid
 * @grid: pointer to 2d grid
 * @height: height of 2d grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
