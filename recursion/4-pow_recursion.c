#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion -function that the values of x raised to the power of y
 * @y: less then 0
 * Return: -1
*/
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (-1);
}
