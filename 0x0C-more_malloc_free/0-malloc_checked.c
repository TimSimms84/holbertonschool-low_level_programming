#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount to allocate
 *
 * Return: pnt if successful, or 98 if malloc fails
 *
 *
 */

void *malloc_checked(unsigned int b)

{
	int *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
