#include "lists.h"

/**
 * delete_nodeint_at_index - erases a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to remove
 *
 * Return: 1 Success or -1 for Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)

	{
		*head = (*head)->next;
		free(tp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = tp->next;
		x++;
	}
	current = tp->next;
	tp->next = current->next;
	free(current);
	return (1);
}
