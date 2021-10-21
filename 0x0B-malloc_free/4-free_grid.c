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
	int column, width;
	/*if 0 or negative return null */
	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for 


return (array);
}
