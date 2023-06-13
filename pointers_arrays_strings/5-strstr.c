#include "main.h"
#include <stdio.h>
/**
 * _strstr - find the first occurence of the substring
 * @haycheck: entire string.
 * @needle: substring
 * Return: pointer to the begingoing of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
