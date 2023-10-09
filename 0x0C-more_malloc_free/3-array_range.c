#include <stdio.h>

/**
 * array_range - creates an array of intrgers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * if man > mix, returns NULL
 * if malloc fails, returns NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = (int *)malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
