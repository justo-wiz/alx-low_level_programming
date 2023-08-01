#include "lists.h"

/**
 * free_listint - free linked list
 * @head: listint_t to free
 */

void free_listint(listint_t *head)
{

	listint_t *tp;

	while (head)
	{
	tp = head->next;
	free(head);
	head = tp;
	}
}
