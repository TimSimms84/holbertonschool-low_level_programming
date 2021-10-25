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


	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
