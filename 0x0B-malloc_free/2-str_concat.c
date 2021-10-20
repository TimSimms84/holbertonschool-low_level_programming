#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first sting
 *
 * @s2: second string
 *
 * Return: ptr to conc string or null on failure
 *
 *
 */




char *str_concat(char *s1, char *s2)
{

	unsigned int i = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	return (ptr);
}
