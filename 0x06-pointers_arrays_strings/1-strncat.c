#include "main.h"

/**
 * _strncat - Cocatenates two strings using at most
 * an inputted number of nytes from src
 * @dest: The string to append upn
 * @src: The string to be appended to dest
 * @n: The number of nytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
