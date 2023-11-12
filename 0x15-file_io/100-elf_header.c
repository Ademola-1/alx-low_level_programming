#include "main.h"

/**
  * check_elf - checks if a file is an ELF file.
  * @e_ident: parameter
  */

void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i <= 3; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L'
				&& e_ident[i] 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - prints the magic numbers of an ELF header.
 * @e_ident: Parameter
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("	Magic:		");
	
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
