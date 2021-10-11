#include "main.h"

/**
 * _strchr - checks if a char is in string
 *
 * @s: string to check
 * @c: character to search for
 *
 * Return: Pointer to dest
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
return (0);
}
