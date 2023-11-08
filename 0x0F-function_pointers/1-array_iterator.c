#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - gun
 * @array: para
 * @size: parap
 * @action: para
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
