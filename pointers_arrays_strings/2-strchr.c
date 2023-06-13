#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string,
 * @s: string
 * @c: character
 * Return: the pointer of the start
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
