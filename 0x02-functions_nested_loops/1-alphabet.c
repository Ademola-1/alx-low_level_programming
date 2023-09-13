#include "main.h"

/**
  * print_alphabet - Entry point
  *
  * Description: Prints the alphabet in lowercase
  *
  * Return: void
  */

void print_alphabet(void)
{
	int i;

	i = 96;

	while (i < 122)
	{
		i++;
		_putchar(i);
	}
	_putchar('\n');
}
