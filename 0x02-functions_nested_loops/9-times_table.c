#include "main.h"

/**
  * times_table - Entry point
  *
  * Description: prints 9 times table, starting with 0.
  *
  * Return: no return
  */

void times_table(void)
{
	int a, b, operation;

	for (a = 0; a <= 9; a++)
	{
		_putchar (48);
		for (b = 1; b <= 9; b++)
		{
			operation = a * b;
			_putchar(44);
			_putchar(32);
			if (operation <= 9)
			{
				_putchar (32);
				_putchar(operation + 48);
			}
			else
			{
				_putchar((operation / 10) + 48);
				_putchar((operation % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
