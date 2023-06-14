#include "main.h"
#include <stdio.h>
/**
 * factorial - a function that return the factorial of a given number
 * @s: n = factorial number
 * @p: paramter
 * Return: n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return(1);
	else
		return (n * factorial(n - 1));
}
