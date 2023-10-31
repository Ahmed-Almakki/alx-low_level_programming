#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - fun
 * @size: param
 * @c: param
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(size);
	if ((t == NULL) || (sizeof(size) == 0))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			t[i] = c;
		}
		return (t);
	}
}
