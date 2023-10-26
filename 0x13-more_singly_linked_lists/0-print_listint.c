#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer
 * Return: the number of node'
 */

size_t print_listint(const listint_t *h)
{
	size_t noOfnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		noOfnode++;
	}
	return (noOfnode);
}

