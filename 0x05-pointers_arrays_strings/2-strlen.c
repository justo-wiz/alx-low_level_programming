#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @st: The string to get the length of
 *
 * Return: The length of the string
 */

size_t _strlen(const char *st)
{
	size_t leng = 0;

	while (*st++)
	leng++;
	return (leng);
}
