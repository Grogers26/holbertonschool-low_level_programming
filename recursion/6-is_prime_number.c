#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - executes prime numbers
 * @n: input to checker
 * Return: always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if ((n * n / 2) > 0)
		return (1);
	return (0);
}
