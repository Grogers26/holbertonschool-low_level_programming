#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print a struct dog.
 * @dg: struct dog.
 * Return: no return.
 */
void print_dog(struct dog *dg)
{
	if (dg)
	{
		if (!(dg->name))
			printf("name: (nil)\n");
		else
			printf("name: %s\n", dg->name);

		printf("age: %f\n", dg->age);

		if (!(dg->owner))
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", dg->owner);
	}
}

