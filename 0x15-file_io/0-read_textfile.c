#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: the number of letters
 * Return: the actual number of letters or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int gd;
	ssize_t _read, _write;

	char *buffer;

	if (!filename)
		return (0);

	gd = open(filename, O_RDONLY);

	if (gd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(gd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(gd);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(gd);
		return (0);
	}
	close(gd);
	return (_read);

}
