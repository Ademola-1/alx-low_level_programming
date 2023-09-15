#include "main.h"

/**
  * print_triangle - prints a triangle, followed by a new line
  * @size: size of the triangle
  * Return: no return
  */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, num;

		for (i = 1; i <= size; i++)
		{
			for (num = i; num < size; num++)
			{
				_putchar(' ');
			}
			for (num = 1; num <= i; num++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
