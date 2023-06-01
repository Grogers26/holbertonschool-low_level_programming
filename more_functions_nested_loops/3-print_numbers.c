#include<stdio.h>
#include"main.h"
/**
*main - print numbers (0 - 9) while only using _putchar twice in the code
*
*Return: always (void)
*/
void print_numbers(void)
{
for (int i = 0; i < 10; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
