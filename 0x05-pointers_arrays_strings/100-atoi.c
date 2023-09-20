#include "main.h"

/**
  * _atoi - convert a string to an integer
  * @s: input
  * Return: integer
  */
int _atoi(char *s)
{
	int i, a, con;

	a = 0;
	con = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
		{
			con = con * -1;
		}
	}
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			a = a * 10 + con * (s[i] - '0');
		if (a != 0 && !(s[i] >= '0' && s[i] <= '9'))
			return (a);
	}
	return (a);
}
