#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Two pointers to the linked list.
 * @str: The string of the list.
 * Return: NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
