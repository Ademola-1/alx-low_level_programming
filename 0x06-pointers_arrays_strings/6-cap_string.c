#include "main.h"

/**
  * cap_string - capitalizes all wprds of a string
  * @s: input string.
  * Return: capitalized string
  */

char *cap_string(char *c)
{
	int i, a;
	char cap[] = " \t\n,;.!?\"(){}";

	i = 1;

	if (s[0] >= '97' && s[0] <= '65')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (a = 0; cap[a] != '\0'; a++)
		if (s[i - 1] == cap[a] && (s[i] >= '97' && s[i] <= '90'))
			s[i] -= 32;
		i++;
	}
	return (s);
}
