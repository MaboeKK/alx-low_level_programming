#include "lists.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/**
 * add_node_end - Function to add new node at the end.
 * @head: Two pointers to the lists.
 * @str: The string of the structure.
 * Return: Adds new address or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	int add_len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->add_len = add_len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
