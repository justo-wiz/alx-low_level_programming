#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: linked list type of listint_t to output
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}
	return (m);
}
