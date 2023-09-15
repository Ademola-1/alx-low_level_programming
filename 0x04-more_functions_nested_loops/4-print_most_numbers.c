#include "main.h"

/**
  * Print_most_numbers - prints numbers between 0 - 9 excluding 2 and 4.
  * Return: no return
  */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && != 52)
			_putchar(num);
	}
	_putchar('\n')
}
