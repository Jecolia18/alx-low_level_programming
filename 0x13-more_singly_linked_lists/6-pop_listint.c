#include "lists.h"

/**
 * pop_listint -deletes the head of a node
 * @head: a pointer to the list
 *
 * Return: the data inside the late element
 */
int pop_listint(listint_t **head)
{
	listint_t *new;

	int integer;

	if (!head || !*head)
	{
		return (0);
	}

	integer = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (integer);
}
