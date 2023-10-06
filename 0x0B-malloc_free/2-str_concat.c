#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: NULL
  */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	size_t size1, size2, total;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	total = size1 + size2;

	strout = (char *)malloc((total + 1) * sizeof(char));
	if (strout == NULL)
	{
		return(NULL);
	}
	memcpy(strout, s1, size1);
	memcpy(strout + size1, s2, size2);
	strout[total] = '\0';
	return(strout);
}
