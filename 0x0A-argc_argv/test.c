#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts arguments from command line
 * @argv: string to array of arguements
 *
 * Return: 0
 */


int main(int argc, char  *argv[])
{


	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
