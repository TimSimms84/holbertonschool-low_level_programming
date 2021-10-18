#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: counts arguments from command line
 * @argv: string to array of arguements
 *
 * adds positive intergers given as arguements
 *
 *
 * Return: 0 if two digits or 1
 * if none
 */


int main(int argc, char  *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{/*if no arguments */
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++) /*loop to add arguements */
	{
		for (j = 0; argv[i][j]; j++) /*loop to check valid arguments */
		{

			if (!isdigit(argv[i][j])) /*check if not a interger */
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
