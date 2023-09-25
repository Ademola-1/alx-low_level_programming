#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: segment
  * @accept: the bytes
  * Return: the number of accepted bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
				break;
		}
		if (*(s + i) != *(accept + j))
			break;
	}
	return (i);
}
