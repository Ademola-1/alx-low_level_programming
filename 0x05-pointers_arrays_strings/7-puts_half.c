#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: input
  * Return: no return
  */
void puts_half(char *str)
{
	int lenght, i;

	for (i = 0; str[i] != '\0'; i++)
	lenght = i / 2;

	if (i % 2 == 1)
	{
		lenght++;
	}
	while (lenght < i)
	{
		_putchar(str[lenght]);
		lenght++;
	}
	_putchar('\n');
}
