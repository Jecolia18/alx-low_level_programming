#include "lists.h"

/**
 * add_node - adds new nodes
 * @head: pointer to the list (double)
 * @str: string to add
 *
 * Return: the address of the element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *other;
	unsigned int length = 0;

	while (str[length])
		length++;

	other = malloc(sizeof(list_t));
	if (!other)
		return (NULL);
	other->str = strdup(str);
	other->len = length;
	other->next = (*head);
	(*head) = other;

	return (*head);
}
