#include <stdio.h>
/**
 * main - Entry point
 *
 * Return - Always success 0
 */
int main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%d ", i);
			sum = sum + i;
		}
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			printf("%d ", i);
			sum = sum + i;
		}
	}
	printf("\n%d\n", sum);
	return (0);
}
