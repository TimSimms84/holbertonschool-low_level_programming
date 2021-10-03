#include "main.h"
/**
 * print_diagonal - entry point
 *
 * Description: Prints a line based on variable n
 *
 * @n:variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
int dash, space;

if (n <= 0)
	_putchar('\n');
for (dash = 0; dash < n; dash++)
{
	for (space = 0; space < dash; space++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
}
