#include "main.h"
/**
 * print_squares - printting hashes squares.
 * different sizes of squares.
 * Return: no return
 */
void print_square(int size)
{
	if (size <= 0);
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; i++)
		{
			_putchar(35);
		}
			if (i <= size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
