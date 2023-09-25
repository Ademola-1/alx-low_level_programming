#include "main.h"

/**
  * print_diagsums - prits the sum of the 2 diagonals of a square matrix of int
  * @a: The matrix of integers
  * @size: The size of matrix.
  * Return: no return
  */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i * size) + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
