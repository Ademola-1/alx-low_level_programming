#include "main.h"

/**
  * print_rev - prints a string in reverse
  *
  * @s: input string
  *
  * Return: no return
  */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	b = 0;

	char rev;

	while (s[b + 1] != '\0')
		b++;

	while (a < b)
	{
		rev = s[a];
		s[a] = s[b];
		s[b] = rev;
		a++;
		b--;
	}
}
