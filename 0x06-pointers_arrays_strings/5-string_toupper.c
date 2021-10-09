#include "holberton.h"


/**
 * string_toupper - makes lowercase chars uppercase
 * @c: pointer to str to reverse
 *
 * Return: converted string
 */

char *string_toupper(char *c)
{
	int i = 0;


	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32; /*ascii uppercase is 32 less than equiv lowercase */
		i++;
	}
	return (c);
}
