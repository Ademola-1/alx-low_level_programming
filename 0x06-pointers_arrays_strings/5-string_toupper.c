#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @s: input sring
  * Return: s
  */

char *string_toupper(char *s)
{
	int letter = 0;

	for (letter = 0; *(s + letter) != '\0'; letter++)
	{
		if (*(s + letter) >= 'a' && *(s + letter) <= 'z')
		{
			*(s + letter) = *(s + letter) - 'a' - 'A';
		}
	}
	return (s);
}
