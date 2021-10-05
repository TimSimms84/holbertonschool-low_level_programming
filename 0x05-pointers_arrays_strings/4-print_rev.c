#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: Point to the string
 *
 *
 *
 *
 * Return: void
 */

void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
