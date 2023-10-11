#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: input integer arry
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */

void arrat_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
