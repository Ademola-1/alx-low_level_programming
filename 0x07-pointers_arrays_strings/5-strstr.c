#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: the string
  * @needle: the substring
  * Return: a pointer to the beginning of the located substring, or NULL if 404
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(needle + j) != haystack[i + j])
				break;
		}
		if (*(needle + j) == '\0')
			return (&haystack[i]);
	}
	return ('\0');
}
