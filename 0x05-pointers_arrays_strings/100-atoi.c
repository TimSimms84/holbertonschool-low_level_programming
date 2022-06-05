#include "main.h"

/**
 * _atoi - convert string to int
 * @s: passed string
 * Return: value of string
 */
int _atoi(char *s)
{
	int res = 0;
	char *temp = s;
	int flag = 0;

	while (*temp)
	{
		if (*temp == '-')
		{
			++flag;
		}
		++temp;
	}

	if (flag % 2 == 0)
		flag = 1;
	else
		flag = -1;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + ((*s- '0') * flag);
		}
		if ((*s < '0' || *s > '9') && res != 0)
		{
			break;
		}
		++s;
	}
	return (res);
}
