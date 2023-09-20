#include "main.h"
#include <stdio.h>
/**
  * print_array - prints n elements of integers, followed by a new line
  * @a: input
  * @n: input n elements
  * Return: no return
  */
void print_array(int *a, int n)
{
	int i;

	for (i = o; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
