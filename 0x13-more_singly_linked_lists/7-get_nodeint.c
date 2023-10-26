#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t.
 * @head: pointer to head of list.
 * @index: index of node to return
 * Return: NULL if failed.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	nextN = head;

	for (i = 0; i < index; i++)
	{
		if (nextN == NULL)
			return (NULL);
		nextN = nextN->next;
	}
	return (nextN);
}
