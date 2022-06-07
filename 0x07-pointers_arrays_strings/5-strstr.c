#include <stddef.h>

/**
 * _strstr - stuff
 * @hak: stufff
 * @ned: stuff
 * Return: always
 */

char *_strstr(char *hak, char *ned)
{
	unsigned int i = 0;
	int x;

	while (hak[i] != '\0')
	{
		if (hak[i] == ned[0])
		{
			for (x = 0; ned[x] != '\0'; x++)
			{
				if (hak[i + x] != ned[x])
				break;
			}
			if (hak[i + x] == ned[x])
				return (&hak[i]);
		}
		i++;
	}
	return (&hak[i]);
}
