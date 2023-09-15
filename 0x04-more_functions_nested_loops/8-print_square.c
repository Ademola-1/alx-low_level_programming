#include "main.h"

/**
  * print_square - function that prints a square
  * @size: size of the square
  * Return: no return.
  */

void print_square(int size)
{
	int i, num;

	for (i = 0, i < size; i++)
	{
		for (num = 0; num < size; num++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
