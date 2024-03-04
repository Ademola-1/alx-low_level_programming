#include <stdio.h>

/**
 * main - Entry point.
 * description - Fibonacci
 * Return: Always 0(success)
 */

int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	int i;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		unsigned long int next_fib;

		next_fib = fib1 + fib2;
		printf("%lu", next_fib);

		if (i < 50)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		fib1 = fib2;
		fib2 = next_fib;
	}
	return (0);
}
