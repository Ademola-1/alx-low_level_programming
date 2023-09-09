#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Prints all possible different combinations of two digits
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int n, i;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if ((n < i) & (i <= '9'))
			{
				putchar(n);
				putchar(i);
				if ((i < '9') | (n < '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
