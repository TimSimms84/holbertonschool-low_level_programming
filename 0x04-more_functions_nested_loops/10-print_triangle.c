#include "main.h"
/**
 * print_triangle - entry point
 *
 * Description: Prints a line based on variable n
 *
 * @size:variable
 *
 * Return: void
 */

void print_triangle(int size)
{
int triangle, line;

if (size <= 0)
	_putchar('\n');
for (triangle = 1; triangle <= size; triangle++)
{
	for (line = size; line >= 1; line--)
	{
		if (line > triangle)
			_putchar(' ');
		else
			_putchar('#');
	}
	_putchar('\n');
}
}
