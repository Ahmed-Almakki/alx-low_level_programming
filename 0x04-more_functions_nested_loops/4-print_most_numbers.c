#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function to print number
 * Return: 0
 */

void print_most_numbers(void)
{
	int s = 0;
	int e = 9;

	while (s <= e)
	{
		if (s != 2 && s != 4)
		{
			_putchar(s + '0');
		}
		s++;
	}
	_putchar('\n');
}
