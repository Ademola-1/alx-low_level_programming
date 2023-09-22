#include "main.h"

/**
  * leet - encodes a string into 1337.
  * @s: input string
  * Return: string
  */

char *leet(char *s)
{
	char letter[] = "aeotl";
	char num[] = "43071";
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; letter[a] != '\0' ; a++)
		{
			if (s[i] == letter[a] || s[i] == letter[a] - 32)
				s[i] = num[a];
		}
	}

	return (s);
}

















