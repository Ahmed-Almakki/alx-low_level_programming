#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - fun
 * @size: param
 * @c: param
 */

char *create_array(unsigned int size, char c)
{
	char *t;

	t = malloc(size);
	if ((t == NULL) || (sizeof(size) == 0))
		return (NULL);
	else
	{
		t[0] = c;
		free (t);
		return (t);
	}
}
