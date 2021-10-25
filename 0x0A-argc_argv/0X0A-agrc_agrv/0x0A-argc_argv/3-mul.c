#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts arguments from command line
 * @argv: string to array of arguements
 *
 * Multiplies two numbers supplies as arguements
 *
 *
 * Return: 0 if two digits or 1
 * if anything else
 */


int main(int argc, char  *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
