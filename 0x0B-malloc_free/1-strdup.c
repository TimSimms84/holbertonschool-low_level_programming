#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return ptr cotaining copy of string
 * @str: string to copy
 *
 * Return: pntr to string or NULL if insufficent memory
 *
 *
 */

char *_strdup(char *str)
{

	char *ptr;
	unsigned int n, strlen = 0;

	while (str[strlen])
	{
		strlen++;
	}
		strlen++;
	ptr = malloc(strlen * sizeof(char));

	for (n = 0; n < strlen; n++)
	{
		ptr[n] = str[n];
	}
return (ptr);
}
