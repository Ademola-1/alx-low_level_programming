#include "main.h"

/**
  * _strcmp - compare two strings
  * @s1: first string
  * @s2: second string
  * Return: 0 if s1 and s2 are equa
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
