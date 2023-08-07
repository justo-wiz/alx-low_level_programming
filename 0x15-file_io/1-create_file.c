#include "main.h"

/**
 * create_file - Composes afile with a given text content
 * @filename: The name of the file create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, res = 1, count_n = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count_n])
			count_n++;
		res = write(file, text_content, count_n);
	}
	if (res == -1)
		return (-1);
	close(file);
	return (1);

}
