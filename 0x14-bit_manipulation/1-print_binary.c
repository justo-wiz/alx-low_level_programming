#include "main.h"

/**
 * print_binary - outputs the binary equivalent of a decimal no
 * @n: number to print in the binary
 */

void print_binary(unsigned long int n)
{
	int x, c = 0;
	unsigned long int now;

	for (x = 63; x >= 0; x--)
	{
		now = n >> x;
		if (now & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
