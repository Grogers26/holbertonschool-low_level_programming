#include "main.h"
/**
 * task - print numbers 0-9 but -c 2 and 4. while using _putchar only twice
 * @num: print most numbers
 *
 *
 * return: void
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)

	{
		if (i != 2 && i != 4) 
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
