#include <stdio.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: The letter being checked
 *
 * Return: 1 if c is lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
