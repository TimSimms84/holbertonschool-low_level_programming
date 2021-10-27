#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: name to rpint
 * @f: pointer to function that prints
 *
 * Return: void
 */


void print_name(char *name, void (*f)(char *name))
{
	f(name);
}
