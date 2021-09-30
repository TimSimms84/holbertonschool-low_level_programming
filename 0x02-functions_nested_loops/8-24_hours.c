#include "main.h"
/**
 * jack_bauer - entry point
 *
 * Description: Prints the alphabet with _putchar
 * @: variable to check
 * Return: void
 */

void jack_bauer(void)
{
	int n, i;

	n = 0;

	while (n < 24)
	{
		i = 0;
		while (i < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
			i++;
		}
		n++;
	}
}
