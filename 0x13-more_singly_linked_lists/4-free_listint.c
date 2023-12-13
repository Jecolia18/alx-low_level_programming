#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	listint_t *inter;

	while (head)
	{
		inter = head->next;
		free(head);
		head = inter;
	}
}
