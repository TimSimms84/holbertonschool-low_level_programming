#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from
 * followed by a new line.
 *
 * Return: void
 *
 */

int main(void)

{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
