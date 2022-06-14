#include "search_algos.h"

/**
 * arrayPrinter - prints an array
 * @start: start of array
 * @end: end of array
 * @array: pointer to array
 */


void arrayPrinter(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}

/**
 * binary_search - search, but in binary
 * @array: the array
 * @size: size of the array
 * @value: what to find
 * Return: index where it is
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, left, right;
	int *temp = array;

	if (!array)
		return (-1);

	left = 0, right = ((int)size - 1);

	arrayPrinter(temp, left, right);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (value == temp[mid])
			return (mid);
		if (value > temp[mid])
			left = mid + 1;
		if (value < temp[mid])
			right = mid - 1;
		if (left <= right)
			arrayPrinter(temp, left, right);
	}
	return (-1);
}
