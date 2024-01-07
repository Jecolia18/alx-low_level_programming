#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: pointer to the list
 * @idx: index to add the node
 * @n: data to insert
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *var;
	listint_t *link = *head;

	var = malloc(sizeof(listint_t));
	if (!var || !head)
	{
		return (NULL);
	}

	var->n = n;
	var->next = NULL;

	if (idx == 0)
	{
		var->next = *head;
		*head = var;
		return (var);
	}

	for (m = 0; link && m < idx; m++)
	{
		if (m == idx - 1)
		{
			var->next = link->next;
			link->next = var;
			return (var);
		}
		else
			var = var->next;
	}

	return (NULL);
}
