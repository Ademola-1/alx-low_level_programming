#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: Always 1 (success)
  * On error, -1 is retruned, and errno is set appropriately.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

