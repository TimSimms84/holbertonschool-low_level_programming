#include "main.h"

/**
 * _atoi - convert string to int
 * @s: passed string
 * Return: value of string
 */
int _atoi(char *s)
{
	int res = 0;
	int i = 0;
	int flag = 0;

	for (i; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
		}
		if (s[i] == '-')
		{
			++flag;
		}
		if ((s[i] < '0' || s[i] > '9') && res != 0)
		{
			break;
		}
	}

	if (flag % 2 == 0)
		flag = 1;
	else
		flag = -1;

	return (res * flag);
}
