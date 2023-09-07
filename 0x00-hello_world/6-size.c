#include <stdio.h>

/**
  * main - Entry point
  *
  *Description: This prints size of character,integers and float
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	printf("size of a char: %d bytes(s)\n", sizeof(char));
	printf("size of an int: %d bytes(s)\n", sizeof(int));
	printf("size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("size of long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
