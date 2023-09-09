#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the alphabet in lowercase and can only use putchar
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
