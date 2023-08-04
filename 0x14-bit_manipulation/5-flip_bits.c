#include "main.h"

/**
 * flip_bits - the counts no of bit to change
 * to get from one no to another
 *
 * @n: initial number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**int x, c = 0;**/

	/**unsigned long int now;**/
	unsigned long int ex = n ^ m, c = 0;


	while (ex > 0)
	{
		c += (ex & 1);
		ex >>= 1;
	}
	return (c);
}
