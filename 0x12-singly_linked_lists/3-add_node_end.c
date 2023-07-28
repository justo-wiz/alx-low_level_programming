#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: the original linked list
 * @str: the string to add to the node
 *
 *
 * Return: The address of the new list or NULL if failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_lst, *tmp;

	if (str != NULL)
	{
		new_lst = malloc(sizeof(list_t));
		if (new_lst == NULL)
			return (NULL);
				new_lst->str = strdup(str);
		new_lst->len = _strlen(str);
		new_lst->next = NULL;

		if (*head == NULL)
		{
			*head = new_lst;
			return (*head);
		}
		else
		{
			tmp = *head;
				while (tmp->next)
					tmp = tmp->next;

			tmp->next =  new_lst;
				return (tmp);
		}

	}
	return (NULL);

}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 *
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int b = 0;

	while (*s)
	{
		s++;
		b++;
	}
	return (b);
}
