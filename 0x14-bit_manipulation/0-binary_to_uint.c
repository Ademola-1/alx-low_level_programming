#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number.
 * @b: pointer
 * Return: The converted number
 */

unsigned in binary_to_uint(const char *b)
{
	unsigned int conv = 0, bit;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bit = *b - '0';
		conv = (conv * 2) + bit;
	}
	return (conv);
}
