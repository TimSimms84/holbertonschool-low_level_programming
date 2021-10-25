#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * array_range - creates an array of integers from min to max
 *
 * @min: first value in array
 * @max: last value in array
 *
 * Return: ptr to array, or NULL if min > max or malloc fail
 *
 */


int *array_range(int min, int max)
{
	int *arr;
	int i, length;

	length = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
