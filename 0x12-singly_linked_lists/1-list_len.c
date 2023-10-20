#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer
 * Return: Number of element
 */

size_t list_len(const list_t *h)
{
	size_t Ncount = 0;
	const list_t *current_N = h;

	while (current_N != NULL)
	{
		Ncount++;
		current_N = current_N->next;
	}
	return (Ncount);
}
