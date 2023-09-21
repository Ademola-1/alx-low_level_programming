#include "main.h"

/**
  * _strcat - concatenates two stings
  * @dest: String that will be appended
  * @src: String that will be concatenated
  * Return: returns string2 to string1
  */

char *_strcat(char *dest, char *src)
{
	int a, i;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
