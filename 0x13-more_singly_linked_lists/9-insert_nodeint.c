#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of list
 * @index: index of a new node
 * @n: value of data element
 * Return: address of new node, NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *currentNode;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	
	currentNode = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (currentNode == NULL)
			return (NULL);
		currentNode = currentNode->next;
	}

	if (currentNode == NULL)
		return (NULL);
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	
	newNode->n = n;
	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}

