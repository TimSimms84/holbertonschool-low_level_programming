#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints elements of an array of intergers followed by new line
 *
 * @a: String containing array
 * @n: Number of elements in array
 *
 *
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
