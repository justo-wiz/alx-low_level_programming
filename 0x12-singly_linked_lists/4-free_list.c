#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: The poiter to the initol node of the linked list
 *
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head;
		head = head->next;
		free(tp->str);
		free(tp);
	}
	free(head);
}

