#include <stdio.h>

/**
 * main - Entry point.
 * description: print fibonacci
 * Return: Always 0(success)
 */

int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int sum = 0;
	unsigned long int next_fib;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		next_fib = fib1 + fib2;

		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("%lu\n", sum);
	return (0);
}

