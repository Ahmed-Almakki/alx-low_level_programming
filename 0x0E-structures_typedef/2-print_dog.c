#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - fun
 * @d: param
 * Return: 0
 */
void print_dog(struct dog *d)
{
	char nn[];

	nn = "(nil)";
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		printf("");
	if (d.name == NULL)
		printf("Name: %s\n", nn);
	else
		printf("Name: %s\n", d.name);
	if (d.age == NULL)
		printf("Age: %s\n", nn);
	else
		printf("Age: %d\n", d.age);
	if (d.owner == NULL)
		printf("Owner: %s\n", nn);
	else
		printf("Owner: %s\n", d.owner);
}
