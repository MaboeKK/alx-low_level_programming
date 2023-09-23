#include "lists.h"
#include "stdio.h"

/**
 * print_list - Function to print linked lists.
 * @h: The pointer to the list.
 * Return: The S vairiable which shows the nodes.
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
