#include "main.h"

/**
  * main - finds and prints largest prime factor of a given number
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	long int num, large_prime;

	num = 612852475143;
	for (large_prime = 2; large_prime <= num; large_prime++)
	{
		if (num % large_prime == 0)
		{
			num /= large_prime;
			large_prime--;
		}
	}
	printf("%ld\n", large_prime);
	return (0);
}
