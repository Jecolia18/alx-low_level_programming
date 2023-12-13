#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: first element in the list
 * @n: data to insert element
 *
 * Return: pointer to a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *inter = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (inter->next)
		inter = inter->next;

	inter->next = node;

	return (node);
}
