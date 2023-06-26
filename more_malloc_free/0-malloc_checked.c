#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - allocates memory. if malloc fails, status value is eqaul to 98.
*@b: amount of bytes.
*return: pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
