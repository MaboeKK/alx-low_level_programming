#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * free_list - Function to free a list.
 * @head: Two pointers to linked list.
 * Return: Freed list.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
