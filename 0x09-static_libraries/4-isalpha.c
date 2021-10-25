#include "main.h"
/**
 * _isalpha - entry point
 *
 * Description: Returns one if C is a letter, or 0 if not.
 * @c: character to check
 * Return: void
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
