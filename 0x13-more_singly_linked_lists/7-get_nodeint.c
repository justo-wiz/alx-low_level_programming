#include "lists.h"

/**
 * get_nodeint_at_index - returns the mode
 * at particular index in the linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we are looking for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tp = head;

	while (tp && x < index)
	{
		tp = tp->next;
		x++;
	}
	return (tp ? tp : NULL);
}
