#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks whether machine is a little or big endian
 * Return: 0 for big and 1 for little
 */

int get_endianness(void)
{
	int c = 1;
	char *endian = (char *)&c;

	if (*endian == 1)
		return (1);

	return (0);

}
