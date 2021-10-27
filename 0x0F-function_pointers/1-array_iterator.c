#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * array_iterator - iteratores through an array
 * @array: passed pointer to an array
 * @size: size of array
 * @action: void pointer function
 * 
 * 
 */


void array_iterator(int *array, size_t size, void (*action)(int))
5	{
6	  unsigned int i;
7	  
8	  for (i = 0; i < size; i++)
9	  {
10	    action(array[i]);
11	  }
12	}