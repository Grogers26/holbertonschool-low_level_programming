#ifndef _DOG_H_
#define _DOG_H_

/**
 * doig.h - type for struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
