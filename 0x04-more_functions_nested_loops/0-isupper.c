#include "main.h"
/**
 * _isupper - entry point
 *
 * Description: Returns 1 if letter is uppercase, else returns 0
 *
 *@c: letter to check
 *
 * Return: void
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);

}
