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
	int j = 0;

	n = n - 1;
	for (i = n; j != n / 2; i--)
	{
		x = a[j];
		a[j] = a[n - j];
		a[n - j] = x;
		j++;
	}
}
