#include <unistd.h>
#include "main.c"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
