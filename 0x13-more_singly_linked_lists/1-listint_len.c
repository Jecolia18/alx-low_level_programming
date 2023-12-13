#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: head or whatever
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length_Node = 0;

	for (; h != NULL; h = h->next)
	{
		length_Node++;
	}

	return (length_Node);
}
