#include "lists.h"

/**
 * free_list - frees a list.
 * @head: pointer that save the head of the linked list address
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
