#include "main.h"
/**
 * _strstr - return point to first occurance of a substring needle in haystack
 *
 * @haystack: string to check
 * @needle: string to compare
 *
 * Return: Pointer to substring or null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else if (haystack[i + j] != needle[j])
			{
				break;
			}
			else
				return ('\0');
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
