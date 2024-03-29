#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - This function frees a 2D array
 * @grid: The grid
 * @height: The height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
