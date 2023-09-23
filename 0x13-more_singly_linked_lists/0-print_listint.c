#include "lists.h"

/**
 * print_listint - Prints all the elements of the list.
 * @h: The pointer to the elements/list.
 * Return: Nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t non = 0;

	while (h)
	{
		printf("%d\n", h->n);
		non++;
		h = h->next;
	}

	return (non);
}
