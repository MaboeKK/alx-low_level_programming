#include "lists.h"

/**
 * add_nodeint - Funtion to add new node at beginning.
 * @head: The pointer to the node.
 * @n: New node capturer.
 * Return: NULL or New node address.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
