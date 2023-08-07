#include <fcntl.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: pointer to the name of the file
 * @text_content: The string to add to the end file
 *
 * Return: 1 on sucess or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int gd, write_result;

	if (!filename)
		return (-1);

	gd = open(filename, O_WRONLY | O_APPEND);

	if (gd == -1)
		return (-1);

	if (!text_content)
	{
		close(gd);
		return (1);
	}

	write_result = write(gd, text_content, strlen(text_content));
	if (write_result == -1 || (size_t)write_result != strlen(text_content))
	{
		close(gd);
		return (-1);
	}
	close(gd);
	return (1);
}
