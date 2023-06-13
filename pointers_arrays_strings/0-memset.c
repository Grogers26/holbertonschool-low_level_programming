#include "main.h"
#include <stdio.h>

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area
  * @b: constant byte.
  * @n: bytes filled.
  * return: the pointer to dest
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
