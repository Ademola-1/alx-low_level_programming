#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints n times table, starting with 0.
 *
 * @n: number of times_table,
 * return: NULL
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n >= 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				printf("%d", result);
			}
			else
			{
				printf(",%4d", result);
			}
		}
		printf("\n");
	}
}
