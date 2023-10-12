#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbyte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbyte = atoi(argv[i]);

	if (nbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbyte; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbyte - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
