#include "lists.h"

/**
 * listint_len - prints all elements of a linked list
 * @h: linked list type of listint_t to traverse
 *
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
