#include "main.h"

/**
 * get_endianness - checks whether machine is a little or big endian
 * Return: 0 for big and 1 for little
 */

int ge get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
