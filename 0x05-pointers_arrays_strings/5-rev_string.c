#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: Point to the string
 *
 *
 *
 *
 * Return: void
 */

void rev_string(char *s)
{

	int i, j;
	char r;

	i = j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > j)
	{
		r = s[i];
		s[i] = s[j];
		s[j] = r;
		j++;
		i--;
	}
}
