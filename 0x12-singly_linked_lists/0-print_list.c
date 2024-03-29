#include "lists.h"

/**
 * print_list - prints elements
 * @h:pointer to the list_t
 *
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t save = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		save++;
	}
	return (save);
}
