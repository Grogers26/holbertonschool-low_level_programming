#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letter to uppercase
 * @p: the string will be modiffed
 * Return: char var
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
