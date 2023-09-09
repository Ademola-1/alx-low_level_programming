#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  * main - Entry point
  *
  *Description: This assigns a random number to int n each time it is excuted
  *it print either positive or negative number
  *
  *Return: Always 0 (success)
  *
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

