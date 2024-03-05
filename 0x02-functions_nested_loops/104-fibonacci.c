#include <stdio.h>

/**
 * main - Entry point
 * description - a program that finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int next_fib;
	int i;

	printf("%u, %u, ", fib1, fib2);
	for (i = 3; i <= 98; i++)
	{
		next_fib = fib1 + fib2;
		if (next_fib == 3)
		{
			printf("%u", next_fib);
		}
		else
			printf(", %u", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");
	return (0);
}

