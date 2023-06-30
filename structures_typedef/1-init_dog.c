#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog.
 * @dg: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: no return.
 */
void init_dog(struct dog *dg, char *name, float age, char *owner)
{
	if (dg)
	{
		dg->name = name;
		dg->age = age;
		dg->owner = owner;
	}
}

