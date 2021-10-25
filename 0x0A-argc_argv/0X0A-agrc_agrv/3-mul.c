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
	int i sum = 0;

	if (argc == 1)
		return (0);
		
		
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(agrv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
