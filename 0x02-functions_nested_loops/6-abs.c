#include "main.h"

/**
  * _abs - computes the absolut value of an integer
  *
  * @i: integer
  *
  * Return: Absolute integer.
  */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return(i * -1);
	}
}
