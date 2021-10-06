#include "main.h"

/**
 * puts2 - Entry point
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

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
