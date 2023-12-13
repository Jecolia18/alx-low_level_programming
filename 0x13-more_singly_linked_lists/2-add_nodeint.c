#include "lists.h"

/**
 * add_nodeint - adds a node
 * @head: first node
 * @n: data part in the node
 *
 * Return: pointer or null in failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
