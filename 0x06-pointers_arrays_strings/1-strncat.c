#include "main.h"

/**
  * _strncat - concatenates specified values from src to dest
  * @dest: string that will be overwritten
  * @src: string to append
  * @n: Amount of bytes used from src
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (i = 0; src[i] != src[n]; i++)
	{
		dest[a] = src[i];
		a++;
	}
	dest[a] = '\0';

	return (dust);
}
