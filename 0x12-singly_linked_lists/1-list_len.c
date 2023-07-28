#include "lists.h"
/**
 * list_hen - display the number of elements of a list
 * @h: a linked list
 *
 * Return: The no of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
