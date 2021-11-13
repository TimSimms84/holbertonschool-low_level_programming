#include "main.h"

/**
 * get_bit - gets value of bit at given index
 * @n: number to check for bits
 * @index: the index
 * Return: the bit, or -1 if failure
 */





int get_bit(unsigned long int n, unsigned int index)
{
	int temp = n >> index;

	if (sizeof(n) * 8 < index)
		return (-1);

	if (temp  & 1)
		return (1);
	else
		return (0);

}

