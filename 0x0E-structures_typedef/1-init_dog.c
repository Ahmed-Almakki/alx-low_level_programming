#include "dog.h"
#include <stdlib.h>
/**
 * init_dog- fin
 * @d: param
 * @name: par
 * @age: param
 * @owner: parami
 * Description: cst dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
