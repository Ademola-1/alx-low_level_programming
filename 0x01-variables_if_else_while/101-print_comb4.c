#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  *
  */

int main(void)
{
	int l, m, n;

	for (l = '0'; l <= '9'; l++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if ((l < m) & (m < n) & (n <= '9'))
				{
					putchar(l);
					putchar(m);
					putchar(n);

					if ((l + m + n) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
