#include "main.h"

/**
 * print_line : function
 * @n: line length
 * Return: 0
 */
void print_line(int n)
{
	int c = 0;
	if (n < = 0)
	{
		_putchar('\n');
	}
	else
	{
		while (c < n)
		{
			_putchar('_');
			c++;
		}
		_putchar('\n');
	}
}
