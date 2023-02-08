#include "main.h"
/**
 * main - Function that prints the string "_putchar"
 *
 * Return: Function _putchar.c that prints a newline character.
 */
int main(void)
{
	char str[i] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
