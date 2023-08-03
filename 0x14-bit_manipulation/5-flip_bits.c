#include "main.h"

/**
 * flip_bits - the counts no of bit to change
 * to get from one no to another
 *
 * @n: initial number
 *
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, c = 0;
	unsigned long int now;
	unsigned long int ex = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		now = ex >> x;
		if (now & 1)
			c++;
	}
	return (c);
}
