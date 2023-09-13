#include "main.h"

/**
  * _isalpha - shows 1 if the input is a letter and the latter shows 0
  *
  * @c: The character is ASCII code
  *
  * Return: 1 for lteers, 0 for others.
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
