#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (a = 'a'; a <= 'z' ; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
	}
}
