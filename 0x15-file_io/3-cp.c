#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024
void err_98(int f1, char *buffer, char *argv);
void err_99(int f1, char *buffer, char *argv);
void err_100(int f1, char *buffer);

/**
 * main - Entry point
 * @argc: no of arguments
 * @argv: a pointer to the array of argumennts
 *
 * Return: Always 0.
 */


int main(int argc, char **argv)
{
	int f1, f2, res1, res2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);

	if (!buffer)
		return (0);

	f2 = open(argv[1], O_RDONLY);
	err_98(f2, buffer, argv[1]);
	f1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	err_99(f1, buffer, argv[2]);
	do {
		res1 = read(f2, buffer, BUF_SIZE);
		if (res1 == 0)
			break;
		err_98(res1, buffer, argv[1]);
		res2 = write(f1, buffer, res1);
		err_99(res2, buffer, argv[2]);
	} while (res2 >= BUF_SIZE);
	res1 = close(f1);
	err_100(res1, buffer);
	res1 =  close(f2);
	err_100(res1, buffer);
	free(buffer);
	return (0);
}

/**
 * err_98 - checks error 98
 * @f1: the value to check
 * @buffer: the buffer
 * @argv: argument
 */

void err_98(int f1, char *buffer, char *argv)
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * err_99 - checks err 99
 * @f1: value to check
 * @buffer: buffer
 * @argv: argument
 */

void err_99(int f1, char *buffer, char *argv)
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * err_100 - checjs error 100
 * @f1: the value to check
 * @buffer: the buffer
 */

void err_100(int f1, char *buffer)
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1);
		free(buffer);
		exit(100);
	}
}
