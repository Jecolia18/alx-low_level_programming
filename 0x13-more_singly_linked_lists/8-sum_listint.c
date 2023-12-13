#include "lists.h"

/**
 * sum_listint - generates the sum of all datat in the list
 * @head: first node in the list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pem = head;

	while (pem)
	{
		sum += pem->n;
		pem = pem->next;
	}

	return (sum);
}
