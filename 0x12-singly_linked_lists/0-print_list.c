#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the list_t
 *
 * Return: number of node
 */


size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);

		h = h -> next;

		length++;
	}

	return (length);
}
