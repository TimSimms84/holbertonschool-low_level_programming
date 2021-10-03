#include "main.h"
/**
 * more_numbers - entry point
 *
 * Description: Prints numbers 0-14 on 10 seperate lines
 *
 *
 *
 * Return: void
 */

void more_numbers(void)
{
	char c;
	char i;

	for (i = 0; i <= 10; i++)
	{

	for (c = 0; c <=  14; c++)
	{
		if (c / 10 > 0)
		{
			_putchar((c / 10) + '0');
		}
			_putchar((c % 10) + '0');


	}
	_putchar('\n');
	}
	}
