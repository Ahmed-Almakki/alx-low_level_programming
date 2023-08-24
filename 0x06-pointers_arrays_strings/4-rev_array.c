#include "main.h"

/**
 * reverse_array - fun
 * @a : op one
 * @n : op two
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
