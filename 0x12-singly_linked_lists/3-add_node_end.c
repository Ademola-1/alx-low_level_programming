#include "lists.h"

/**
 * add_note_end - add a new node at the node
 * @head: head of the linked list.
 * @str: string
 * Return: Address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NUULL)
		*head = newNode;
	else
	{
		list_t *currentNode = *head;

		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
	return (newNode);
}
