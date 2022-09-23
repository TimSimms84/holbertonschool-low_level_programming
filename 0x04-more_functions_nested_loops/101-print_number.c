#include "main.h"

/**
 * print_number - entry point
 * @n: number to print
 * Return: void
 *
*/

void print_number(int n)
{
	unsigned int length = 0, modulo = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		length++;
	}
	while ((n / modulo) >= 10)
	{
		modulo = modulo * 10;
	}
	while (modulo >= 1)
	{
		_putchar((n / modulo) + '0');
		n = n % modulo;
		modulo = modulo / 10;
		length++;
	}
}
