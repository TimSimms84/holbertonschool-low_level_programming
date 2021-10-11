#include "main.h"

/**
 * _memcpy - copies n bytes from memory src to memory dest
 *
 * @src: string to copy
 * @dest: string to copy to
 * @n: number of bytes to change
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
