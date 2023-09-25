#include "main.h"

/**
  * _memcpy - copies n bytes from memory area src to memory area dest
  * @n: byte from the memory
  * @dest: desination memory area
  * @src: source memory area
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsignd int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
