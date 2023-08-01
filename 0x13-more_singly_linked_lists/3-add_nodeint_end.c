#include "lists.h"

/**
 * add_nodeint_end - add node node at the end of linked list
 * @head: pointer to first element in a list
 * @n: data to insert in the new element
 *
 * Return: pointer to new node or if it fails NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

	while (tp->next)
		tp = tp->next;

	tp->next = new;

	return (new);
}
