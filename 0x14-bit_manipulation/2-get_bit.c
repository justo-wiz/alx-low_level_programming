#include "main.h"

/**
 * get_bit - returns the value of a bit in index in a decimal number
 * @n: number to look for
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b_value;

	if (index > 63)
		return (-1);
	b_value = n >> index & 1;
	return (b_value);
}
