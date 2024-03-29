#include "function_pointers.h"

/**
 * int_index - searches fo an integer
 * @array: input integer
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare valuess.
 *
 * Return: index of the first element for which the cmo function does not
 * return 0. If no elements macthes, return -1. if size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
