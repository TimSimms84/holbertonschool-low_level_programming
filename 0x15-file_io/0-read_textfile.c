#include "main.h"
#include "_putchar.c"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX STDOUT
 * @letters: number of letters it should read and print
 * @filename: filename to open
 * Return: actual number of letters it could read and print
 * or 0 if failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length;
	char *buffer;

	if (filename == NULL || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	length = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, letters);


	if (length == -1)
		return (0);

	return (length);
}
