#include "main.h"

/**
 * binary_to_uint - converting binary no to unsigned int
 * @b: string comprising of the binary no
 *
 * Return: the converted no
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dc_value = 0;

	if (!b)
	return (0);

	for (x = 0; b[x]; x++)
	{
	if (b[x] < '0' || b[x] > '1')
	return (0);
	dc_value = 2 * dc_value + (b[x] - '0');
	}
	return (dc_value);
}
