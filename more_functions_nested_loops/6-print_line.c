#include "main.h"
/**
* print_line - draw a straight line in the terminal
* @c: printing lines
* return: void
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
