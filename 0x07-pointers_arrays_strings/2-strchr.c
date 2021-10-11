#include "main.h"
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

	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (*s == '\0')
		return (s);

return (0);
}
