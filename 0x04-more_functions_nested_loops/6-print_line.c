#include "main.h"
/**
 * more_numbers - entry point
 *
 * Description: Prints numbers 0-14 on 10 seperate lines
 *
 * @i: compare to n
 *
 * Return: void
 */

void print_line(int n)
{
		int i;

		i = n;

		while (i > 0)
		{
			_putchar('_');
			i--;
		}
	_putchar('\n');
	}
