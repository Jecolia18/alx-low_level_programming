#include "lists.h"

/**
 * get_nodeint_at_index - basically return the node at a index
 * @head: first node in a list
 * @index: place or position of the node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *another = head;

	while (another && n < index)
	{
		another = another->next;
		n++;
	}

	return (another ? another : NULL);
}
