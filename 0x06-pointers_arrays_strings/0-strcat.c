#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Thes destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a])
	{
		a++;
	}

	for (b = 0; src[b] != 0; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
