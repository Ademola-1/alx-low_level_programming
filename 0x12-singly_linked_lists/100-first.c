#include <stdio.h>

void hareAndTortoise(void) __attribute__ ((constructor));
/**
 * hareAndTortoise - function executed before main
 * Return: no return.
 */

void hareAndTortoise(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
