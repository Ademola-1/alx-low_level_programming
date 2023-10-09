#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	size_t len1;
	size_t len2;
	size_t len3;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + (n < len2 ? n : len2);

	str = malloc((len3 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	memcpy(str, s1, len1);
	memcpy(str + len1, s2, n < len2 ? n : len2);
	str[len3] = '\0';
	return (str);
}
