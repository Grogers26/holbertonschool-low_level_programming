#include "main.h"
/**
 * main - draw a straight line in the terminal 
 *
 * return: void
 */
void print_line(int n)
{
  if (n <= 0)
    {
      _putchar('\n');
      return;
    }
  for (int i = 0; i < n; i++)
    {
      _putchar('_');
    }
}
