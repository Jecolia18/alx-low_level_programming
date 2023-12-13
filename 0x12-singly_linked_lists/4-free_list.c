#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
