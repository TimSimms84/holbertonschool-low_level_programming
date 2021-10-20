#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create an array and initialize it with a specific char
 *
 * @size: size of array
 * @c: specific char
 *
 * Return: pointer to array or Null
 *
 */

char *create_array(unsigned int size, char c)
{

	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
return (ptr);
}
