#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function
 *
 * Return: 0
 */

void print_numbers(void)
{
	char i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
