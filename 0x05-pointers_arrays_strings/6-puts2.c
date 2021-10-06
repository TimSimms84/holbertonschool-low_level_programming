#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: Point to the string
 *
 *
 *
 *
 * Return: length of string
 */

void puts2(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
