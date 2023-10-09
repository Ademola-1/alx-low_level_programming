#include "main.h"
#include <stdlib.h>
/**
  * _calloc - allocates memory of array
  * @nmemb: number of elements
  * @size: size of bytes
  * Return: pointer to the allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
