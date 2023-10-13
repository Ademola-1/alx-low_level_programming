#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list all type of argument passed to the function.
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sp = "";
	
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
printf("\n");
va_end(list);
}
