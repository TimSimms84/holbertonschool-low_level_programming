#include "main.h"
/**
 * _isdigit - entry point
 *
 * Description: Returns 1 if variable is a digit, else returns 0
 *
 *@c: variable to check
 *
 * Return: void
 */

int _isdigit(int c)
{

if (c >= '0' && c <= '9')
return (1);
else
return (0);

}
