#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to the list
 *
 * Return: number of element in the list
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
