#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line
  *
  * @s: input string
  *
  * return: void
  */

void print_rev(char *s)
{
	int a, i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (a = i - 1; a >= 0; a--)
		{
			_putchar(s[a]);
		}
	_putchar('\n');
}
