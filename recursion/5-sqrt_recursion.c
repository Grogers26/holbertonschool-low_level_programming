#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: integer
 * Return: integer - square root, if none returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n *(n + 1) / 2);
}
