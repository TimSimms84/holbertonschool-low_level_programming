#include "main.h"


/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number passed
 * @index: bit you want to get
 * Return: value of bits or -1 if failure
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int temp = n >> index;

	if (sizeof(n) * 8 < index)
		return (-1);

	return (temp & 1);
}

