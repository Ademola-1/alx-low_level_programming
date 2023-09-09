#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints all hexadecimals
  * You can only use putchar function
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

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
