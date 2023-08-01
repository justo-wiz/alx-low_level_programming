#include "lists.h"

/**
 * pop_listint - deletes head node in the linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: The data in the elements which was deleted,
 * or 0if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	tp = (*head)->next;
	free(*head);
	*head = tp;

	return (m);
}
