#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 * return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers.
 * @a: first number.
 * @b: second number.
 * return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 * return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 * return: division.
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
 * op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 * return: remainder of the division.
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
