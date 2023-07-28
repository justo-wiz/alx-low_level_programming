#include "lists.h"

/**
 * print_list - print all element in the singly linked list
 * @h: list head pointer
 * Return: total no of nodes in the list
 */


size_t print_list(const list_t *h)
{
	int x;

	if (h == NULL)
		return (0);

	for (x = 1; h->next != NULL; x++)
	{
		if (h->str == NULL)
		printf("[%u] %s\n", h->len, "(nil)");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (x);

}
