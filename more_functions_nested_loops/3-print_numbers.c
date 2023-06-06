#include "main.h"
/**
* print_numbers 0 - 9 while only using _putchar twice in the code
* @num: number between 0 - 9
* Return: no return.
*/
void print_numbers(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
