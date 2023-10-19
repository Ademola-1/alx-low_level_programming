#include "lists.h"

/**
 * print_list - prints all element
 * Description - prints all element
 * @h: pointer
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current_N = h;
	size_t Ncount = 0;

	while (current_N != NULL)
	{
		if (current_N->str != NULL)
		{
			printf("[%d] %s\n", current_N->len, current_N->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		Ncount++;
		current_N = current_N->next;
	}

	return (Ncount);
}
