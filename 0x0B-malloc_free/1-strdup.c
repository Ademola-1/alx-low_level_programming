#include "main.h"

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: the string
  * Return: pointer of an array of chars
  */

char *_strdup(char *str)
{
	char *dest;

	if (str == NULL)
		return (NULL);

	dest = malloc(strlen(str) + 1);
	if (dest == NULL)
		return (NULL);

	strcpy(dest, str);
	return (dest);
}
