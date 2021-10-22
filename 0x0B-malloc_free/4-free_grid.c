#include <stdlib.h>
#include "main.h"
/**
 * free_grid - malloc a grid of int values height * width in dimensions
 * @grid: a two dimensional array
 * @height: the number of rows of grid
 * Return: v
 */
void free_grid(int **grid, int height)
{
	int row;


	if (grid == NULL)
		return;
	if (height == 0)
		return;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}

	free(grid);
return;
}
