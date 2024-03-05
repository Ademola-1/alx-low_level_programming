#include <stdio.h>

/**
 * main - Entry point
 * description - a program that finds and prints the first 98 Fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int next_fib;
	int i;

	printf("%lu, %lu", fib1, fib2);
	for (i = 3; i <= 96; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");
	return (0);
}

