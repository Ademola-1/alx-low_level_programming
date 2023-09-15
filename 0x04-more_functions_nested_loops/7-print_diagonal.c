#include "main.h"

/**
  * print_diagonal - prints diagonal line n times.
  * @n: tims diagonal line is printed
  * Return: no return
  */

void print_diagonal(int n)
{
	int i, num;

	for (i = 0; i < n; i++)
	{
		for (num = 0; num < i; num++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
