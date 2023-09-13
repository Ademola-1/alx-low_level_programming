#include "main.h"

/**
  * _islower - Entry point
  *
  * Description: Shows 1 if the input is a lowercase character
  * another case shows 0
  *
  * Return: 1 for lowercase. 0 for the rest.
  */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
