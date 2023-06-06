#include "main.h"
#include <stdio.h>
/**
 * _strcpy - print n elements of an array of integers.
 * @dest: location
 * @src: input n element
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
