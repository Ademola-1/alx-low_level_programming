#include "main.h"

/**
  * positive_or_negative - prints function that take a parameter i and check if
  * the number is positive or negative
  *
  * @i: parameter
  *
  * Return: Always 0 (success)
  */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is negative\n", i);
	}
	else if ( i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d os positive\n", i);
	}
}
