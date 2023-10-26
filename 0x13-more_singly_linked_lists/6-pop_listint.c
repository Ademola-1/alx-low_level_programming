#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: address of the head of list
 * Return: data of deleted head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_d;

	if (head == NULL || *head == NULL)
		return (0);

	data_d = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data_d);
}
