#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n:pointer to value to change
 * @index: position to change
 * Return: 1 if success, else -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int tmp;

	if (index > (sizeof(*n) * 8))
		return (-1);

	tmp = 1 << index;
	*n &= ~tmp;
	return (1);

}
