#include "main.h"

/**
 * swap_int - function
 * @*a: pointer a
 * @*b: pointer b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;
	int y;
	int z;

	x = *a;
	y = *b;
	z = x;
	*a = y;
	*b = z;
}
