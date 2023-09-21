#include "main.h"

/**
  * cap_string - capitalizes all wprds of a string
  * @s: input string.
  * Return: capitalized string
  */

char *cap_string(char *s)
{
	int i, a;
	char cap[] = " \t\n,;.!?\"(){}";

	i = 1;

	if (s[0] >= 'a' && s[0] <= 'A')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (a = 0; cap[a] != '\0'; a++)
		if (s[i - 1] == cap[a] && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}
