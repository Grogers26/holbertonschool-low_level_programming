#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatentes two strings,
 * @dest: location 
 * @src: sources.
 * @n: amount of bytes used from sources
 * Return: the point is to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0; 

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
	dest[dlen] = src[j];
	dlen++;
	j++;
	}
			dest[dlen + n + 1] = '\0';
			
			return (dest);
}
