#include "lists.h"

/**
 * listint_len - Funtion to return number of elements in linked list.
 * @h: The lists and/or elements to traverse.
 * Return: Nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t non = 0;

	while (h)
	{
		non++;
		h = h->next;
	}

	return (non);
}
