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
	int i = 0;

	while (*temp)
	{
		if (*temp == '-')
		{
			++flag;
			i = 1;
		}
		++temp;
	}

	if (flag % 2 == 0)
		flag = 1;
	else
		flag = -1;

	for (; s[i]; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + ((s[i] - '0') * flag);
		}
		if (s[i] < '0' || s[i] > '9')
		{
			break;
		}
	}
	return (res);
}
