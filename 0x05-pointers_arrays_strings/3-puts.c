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
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
}
