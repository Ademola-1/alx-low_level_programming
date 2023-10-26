#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: pointer
 * @n: int to add to new node
 * Return: pointer to new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newN;

	if (head == NULL)
		return (NULL);

	newN = malloc(sizeof(listint_t));

	if (newN == NULL)
		return (NULL);

	newN->n = n;
	newN->next = *head;

	*head = newN;
	return (newN);
}

