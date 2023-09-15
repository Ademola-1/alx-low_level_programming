#include "main.h"

/**
  * print_line - prints straight line 
  * @n: number of times straight line is printed
  * Return: no return
  */

void print_line(int n)
{
	int num = 0;

	while (num < n)
	{
		_putchar('_');
		num++;
	}
	_putchar('\n');
}
