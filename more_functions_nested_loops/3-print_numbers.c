#include "main.h"
/**
*main - print numbers 0 - 9 while only using _putchar twice in the code
*
*Return: always (void)
*/
void print_number(void)
{
  int ch;
for (ch = 48; ch <= 158; ch++)
{
_putchar (ch);
}
_putchar ('\n');
}
