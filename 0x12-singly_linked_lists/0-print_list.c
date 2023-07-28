#include "lists.h"

/**
 * print_list - print all element in the singly linked list
 * @h: list head pointer
 * Return: total no of nodes in the list
 */


size_t print_list(const list_t *h)
{
	int x;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h=h->next;
		x++;
	}

	return (x);

}
