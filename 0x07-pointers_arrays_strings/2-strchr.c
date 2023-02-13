#include "main.h"
#include <stddef.h>
/**
 * _strchr - checks if a char is in string
 *
 * @s: string to check
 * @c: character to search for
 *
 * Return: Pointer fo first char in string if found
 * else return NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
