#include "main.h"

/**
 * clear_bit - sets value of aspecific bit to 0
 * @n: pointer to the no to change
 * @index: index of bit to clear
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);
	m = 1UL << index;
	if (*n & m)
		*n &= ~m;
	return (1);
}
