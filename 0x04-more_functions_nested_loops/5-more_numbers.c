#include "main.h"

/**
  * more_numbers - prints numbers from 0 - 14 ten times
  *
  * Return: no return.
  */

void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)

	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
