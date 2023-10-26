#include "lists.h"

/**
 * sum_listint - returns the sum of all data in listint_t list
 * @head: pointer to head of list
 * Return: sum of all (n) values
 */

int sum_listint(listint_t *head)
{
	int data = 0;

	while (head != NULL)
	{
		data += head->n;
		head = head->next;
	}
	return (data);
}
