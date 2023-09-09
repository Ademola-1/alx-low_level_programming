#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints the alphabet in lowercase except q and e
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{
		if (letter != 'e' &&  letter != 'q')
		{
			putchar(letter);
		}

		{
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
