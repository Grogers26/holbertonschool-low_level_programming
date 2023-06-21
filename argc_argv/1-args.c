#include <stdio.h>
/**
 * main - print the number of argument passed into it 
 * @argc: number of arguments
 * @argv: array that contain the program arguments
 * Return: 0 - success.
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
