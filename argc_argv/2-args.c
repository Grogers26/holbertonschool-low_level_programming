#include <stdio.h>
/**
 * main - print all argument it reciceves
 * @argc: number of arguments 
 * @argv: array that contains the programs
 * Return: 0 - sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
