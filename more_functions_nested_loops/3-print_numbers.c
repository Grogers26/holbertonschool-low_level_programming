#include <stdio.h>
#include "main.h"
/**
*main - print numbers 0 - 9 while only using _putchar twice in the code
*
*Return: always (void)
*/
void  print_number(void)
{
  int i;
for (i = 48; i < 158; i++)
{
_putchar("%\n" + i);
}
_putchar('\n');
}
