#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - gun
 * @array: para
 * @size: parap
 * @action: para
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
