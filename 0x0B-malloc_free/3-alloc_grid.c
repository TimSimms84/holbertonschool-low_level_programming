#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid - 2d array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to new string
 */

int **alloc_grid(int width, int height)

{
	int **array;
	int a, b;
	/*if 0 or negative return null */
	if (width < 1 || height < 1)
		return (NULL);

	array = (int **)malloc(sizeof(int) * height);

	for (a = 0 ; a < height ; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(array[a]);
			}
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
