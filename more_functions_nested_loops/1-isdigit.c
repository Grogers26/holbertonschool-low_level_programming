#include<stdio.h>
#include "main.h"
/**
 * _isdigit - input numbers 0 - 9
 * Description: define if a character is a number
 * @c: the character to check
 * Return: 1 if c a digit,  0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
