#include "main.h"

/**
  * _puts - prints a string, follwed by a new line.
  * @str: input string
  * Return: no return:
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
		}
	}
}
