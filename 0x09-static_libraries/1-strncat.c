#include "main.h"

/**
 * _strncat - appends n src to dest string
 * @dest: string that gets appended
 * @src: strig to append
 * @n: number in string to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; dest[j] != '\0'; j++)
		;
		/** nothing in loop */
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
return (dest);
}
