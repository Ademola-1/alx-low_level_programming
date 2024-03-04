#include <stdio.h>

/**
 * main - Entry point.
 * description: Fibonacci
 * Return : Always 0(success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1; i <= 50; i++)
	{
		sum += i;
		if(sum == 1)
		{
			printf("%d", sum);
		}
		else
			printf(", %d", sum);
	}
	printf("\n");
	return (0);
}
