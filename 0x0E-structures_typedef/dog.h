#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog -stuc
 * @name: finr
 * @age: age
 * @owner: owner
 * Description: detail aboiut dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
