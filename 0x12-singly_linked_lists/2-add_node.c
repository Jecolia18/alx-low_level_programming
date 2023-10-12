#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to a pointer to a struct
 * @str: string of the node
 *
 * Return: The address of the new element or null it it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_one;

	new_one = malloc(sizeof(list_t));

	if (new_one == NULL)
	{
		return (NULL);
	}

	new_one->str = strdup(str);

	if (new_one->str == NULL)
	{
		free(new_one);
		return (NULL);
	}

	new_one->next = *head;
	*head = new_one;
	new_one->len = strlen(str);

	return (new_one);
}
