#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 upto 1024
 *
 * Return: Always 0
 */

int main(void)
{

	int p, q = 0;

	while (p < 1024)
	{
	if ((p % 3 == 0) || (p % 5 == 0))
	{
	q += p;
	}
	p++;
	}
	printf("%d\n", q);
	return (0);
}
