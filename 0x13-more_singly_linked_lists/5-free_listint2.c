#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of list
 * Return: zero
 */

void free_listint2(listint_t **head)
{
	listint_t *ally;

	if (head == NULL)
		return (0);
	while (*head != NULL)
	{
		ally = (*head)->next;
		free(*head);
		(*head) = ally;
	}
}
