#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: address of head of list.
 * @n: int to add to new node.
 * Return: pointer to a new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newN, *nextN;

	if (head == NULL)
		return (NULL);
	
	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);

	newN->n = n;
	newN->next = NULL;
	nextN = *head;

	if (nextN == NULL)
	{
		*head = newN;
		return (newN);
	}
	while (nextN->next != NULL)
		nextN = nextN->next;
	nextN->next = newN;
	return (newN)
