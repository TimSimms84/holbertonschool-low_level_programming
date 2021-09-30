#include <stdio.h>
/**
 * print_to_98 - entry point
 *
 * Description: Prints natural numbers between n and 98
 * @n: interger
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}

