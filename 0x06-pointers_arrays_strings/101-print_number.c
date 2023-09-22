#include "main.h"

/**
  * print_number - prints an integer.
  *
  * @n: input integer
  * Return: no return
  */

void print_number(int n)
{
	unsigned int i, j, k;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	num = 1;

	while (d > 9)
	{
		d /= 10;
		num *= 10;
	}
	for (; num >= 1; num /= 10)
	{
		_putchar(((m / num) % 10) + 48);
	}
}
