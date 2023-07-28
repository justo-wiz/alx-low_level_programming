#include "lists.h"

/**
 * add_node - Adds  a new node at the start of the list
 * @head: the initial linked list
 * @str: string
 *
 * Return: The address of the new list or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;

		*head = tmp;
		return (tmp);
	}
	return (0);
}

/**
 * _strlen - returns the length of the string
 * @s: string to count
 *
 * Return: lenth of the string
 */

int _strlen(const char *s)
{
	int a = 0;

	while (*s)
	{
		s++;
		a++;
	}
	return (a);
}

