#include "main.h"

/**
  * create_array - creates an array of chars and intializes it with a spec char
  * @size: size of the array
  * @c: specific char
  * Return: Pointer of an array of chars
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		arr[i] = c;

	return (arr);
}
