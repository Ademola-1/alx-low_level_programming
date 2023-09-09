#include <stdio.h>

/**
  * main -Entry point
  *
  * Description: Prints all single digit numbers of base 10 starting from 0
  * you can only use putchar function
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
