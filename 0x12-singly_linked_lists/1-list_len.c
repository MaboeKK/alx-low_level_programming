#include "lists.h"
#include "stdio.h"

/**
 * list_len - Returns number of linked lists.
 * @h: Foobar pointer to linked list.
 * Return: Number of linked elements in a list.
 */

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
