#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *interm;

	if (head == NULL)
		return;

	while (*head)
	{
		interm = (*head)->next;
		free(*head);
		*head = interm;
	}

	*head = NULL;
}
