#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name -  fun
 * @name: para
 * @f: fun param
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
