#include "main.h"

/**
 * print_binary - prints binary representation of decimal
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary = n;

	if (binary > 1)
		print_binary(binary >> 1);
	_putchar((binary & 1) + '0');
}
