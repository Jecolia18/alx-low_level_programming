#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
