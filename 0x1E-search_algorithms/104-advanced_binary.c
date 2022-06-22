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
 * recursive_binary - binary search, but recursively
 * @arr: the array to search
 * @value: value to find
 * @left: left of array
 * @right: right of array
 * @found: holder to find value
 * Return: index of value where it was found or -1
 */

int recursive_binary(int *arr, int value, size_t left, size_t right)
{
	size_t mid = ((right - left) / 2) + left;

	if (arr[left] == value &&  left >= right)
		return (left);
	arrayPrinter(arr, left, right);
	if (left == right)
		return (-1);
	if (arr[mid] == value || arr[mid] > value) 
		return (recursive_binary(arr, value, left, mid));
	return (recursive_binary(arr, value, mid + 1, right));
}

/**
 * advanced_binary - search, but in binary
 * @array: the array
 * @size: size of the array
 * @value: what to find
 * Return: index where it is or -1 if not present
 */

int advanced_binary(int *array, size_t size, int value)
{

	if (!array || size < 1)
		return (-1);
	return (recursive_binary(array, value, 0, size - 1));
}
