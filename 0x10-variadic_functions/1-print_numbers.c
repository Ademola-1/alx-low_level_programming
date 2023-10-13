#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string to print
 * @n: number of parameters
 * Return: no return.
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", var_arg(list, int));
		if (seperator !NULL && i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(list);
}
