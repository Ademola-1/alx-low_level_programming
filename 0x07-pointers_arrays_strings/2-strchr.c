#include "main.h"

/**
  * _strchr - locate a character in string
  * @s: string
  * @c: character
  * Return: the pointer to the first occurrence of the char c or NULL if 404
  */

char *_strchr(char *s, char c);
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
