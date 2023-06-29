#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmpo, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmpo = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmpo;
	}
}
