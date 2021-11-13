#include "main.h"

/**
 * flip_bits - returns number of bits you would need
 * to flip to get from one to the other
 * @n:first number
 * @m: second number
 * Return: number of bits needed to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int bitcounter;

	xor = n ^ m;

	bitcounter = 0;
	while (xor > 0)
	{
		if ((xor & 1) != 0)
			bitcounter++;
		xor = xor >> 1;
	}
	return (bitcounter);
}
