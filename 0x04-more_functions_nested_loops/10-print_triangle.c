#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function
 * @size: operand
 * Return: 0
 */
void print_triangle(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= size - i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
