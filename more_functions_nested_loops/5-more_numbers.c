#include "main.h"
/**
 * more_numbers - printing number mulitple times
 * @num:  function more numbers
 * return: (0)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar((j / 10) +48);
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
