#include "main.h"
/**
* main - print numbers 0 - 9 while only using _putchar twice in the code
* @num: number between 0 - 9
* Return: no return.
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 10; i++)
{
_putchar(i);
}
_putchar('\n');
}
