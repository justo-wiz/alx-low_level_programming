#include "lists.h"


/**
 * insert_nodeint_at_index - inserts the new node
 * at specified position inthe linked list
 * @head: pointer the first node
 * @idx: incdex where the is to be added
 * @n: data to be inserted in the new node
 *
 * Return: Pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *tp = *head;

	new = malloc(sizeof(listint_t));
		if (!new || !head)
			return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (x = 0; tp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = tp->next;
			tp->next = new;
			return (new);
		}
		else
			tp = tp->next;
	}
	return (NULL);
}

