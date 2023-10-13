#include "variadic_function.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
