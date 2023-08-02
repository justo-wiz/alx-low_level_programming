#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Free a linked list
 * @h: pointer to the firstt node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *tp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	diff = *h - (*h)->next;
	if (diff > 0)
	{
	tp = (*h)->next;
	free(*h);
	*h = tp;
	len++;
	}

	else
	{
		free(*h);
		*h =  NULL;
		len++;
		break;
	}
	}
	*h = NULL;
	return (len);

}
