#include "maini.h"
#include <stdio.h>
/**
  * cap_string -capitalizes all word of a string
  * @s: input string.
  * 
~   Return: the pointer to dest.
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

        while (s[a])
        {
                i = 0;

                while (i < cspc)
                {
                        if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
                                s[a] -= 32;

                        i++;
                }

                a++;
        }

        return (0);
}
