#include "main.h"
/**
*main - print numbers 0 - 9 while only using _putchar twice in the code
*
*Return: always (void)
*/
void print_numbers(void)
{
  int ch;
for (ch = 0; ch <= 10; ch++)
{
_putchar (ch);
}
_putchar ('\n');
}
