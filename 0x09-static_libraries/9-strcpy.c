#include "main.h"
/**
 * * _strcpy - Copies a string
 * * @dest: destination to copy
 * * @src: Pointer to string to copy
 * Description: The above
 * Return: Return value is pointer to dest
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
