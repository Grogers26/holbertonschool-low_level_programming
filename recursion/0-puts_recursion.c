#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - writing  a function that prints a string.
 * @s: string
 * return: no return
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
