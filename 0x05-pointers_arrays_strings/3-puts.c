#include "main.h"
#include <string.h>

/**
 * _puts - function
 * @str : pointer
 * Return: 0
 */

void _puts(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
