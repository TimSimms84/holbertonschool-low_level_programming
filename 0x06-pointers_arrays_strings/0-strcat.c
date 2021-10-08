#include "main.h"



/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

/*
 * get how long the dest string is
 *
 */
	while (dest[i])
	{
		i++;
	}
/*
 * puts the src string at null byte of dest string
 *
 */
	while ((dest[i]) == (src[j]))
	{
		i++;
		j++;
	}

return (dest);
}
