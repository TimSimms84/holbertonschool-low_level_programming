#include <stdlib.h>
# include <stdio.h>
# include "main.h"
# include <string.h>
/**
 * free_grid - frees 2D grid space
 * @grid: grid pointer
 * @height: grid height
 * Return: Null if width/height is neg or 0 or pointer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
