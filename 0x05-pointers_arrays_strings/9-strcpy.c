#include "main.h"

/***
 * *_strcpy - copy a string
 * @src: source of string
 * @dest: destination of new string
 * Retrun: dest
 *
 *
 *
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
