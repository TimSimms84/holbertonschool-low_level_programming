#include "main.h"
/**
 * print_last_digit - entry point
 *
 * Description: Prints the alphabet with _putchar
 * @i: variable to check
 * Return: void
 */

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = -i;
	_putchar('0' + i);
	}
	else
	{
		_putchar('0' + i);
	}
return (i);
}
