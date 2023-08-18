#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function
 * @n: operand
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n < 0)
	{
		_putchar('\\');
		_putchar('n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
