#include "main.h"

/**
 * free_grid -  function that frees a 2 dimensional grid
 * @grid: int **
 * @height: int
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == 0 || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
