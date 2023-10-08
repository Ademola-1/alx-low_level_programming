#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 * Return: - 0 (if the program receives two arguments).
 *	   - 1 (if the program does not receive two arguments -1).
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

