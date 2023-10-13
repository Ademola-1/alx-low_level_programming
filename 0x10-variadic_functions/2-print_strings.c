#include "variadic_functions.h"

/**
 * print_strings - prints string with a given seperator
 * @separator: string to print between numbers
 * @n: number of parameters
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
