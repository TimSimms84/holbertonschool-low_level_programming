#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts arguments from command line
 * @argv: string to array of arguements
 *
 * Return: 0
 */


int main(int argc, __attribute__((unused)) char  *argv[])
{
	int i;

	if (argc > 0)
		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}
	return (0);
}
