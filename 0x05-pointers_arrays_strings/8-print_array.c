#include "main.h"
#include <stdio.h>

/**
 * print_array - fun
 * @a: ope
 * @n: sec op
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == 0)
		{
			printf("%d", a[i]);
			break;
		}
		else
		{
			printf("%d", a[i]);
			if (i + 1 != n)
			{
				printf(", ");
			}
			else
			{
				break;
			}
		}
	}
	printf("\n");
}
