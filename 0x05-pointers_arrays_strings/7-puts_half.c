#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: Point to the string
 *
 *
 *
 *
 * Return: length of string
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
