#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer.
 *
 * Return: summation of the two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer.
 *
 * Return: subtraction of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer.
 * @b: second integer.
 *
 * Return: multiplication of two integers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer.
 * @b: second integer.
 *
 * Return: division of the two integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two integers
 * @a: first integer.
 * @b: second integer.
 *
 * Return: remainder of division of the two integers.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
