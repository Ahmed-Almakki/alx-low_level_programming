#include "main.h"
#include <string.h>

/**
 * puts_half - gun
 * @str: opernad
 * Return: 0
 */

void puts_half(char *str)
{
	int len;
	int i;
	int n;
	int half;

	len = strlen(str);
	n = (len - 1) / 2;
	half = len / 2;

	if (len % 2 != 0)
	{
		for (i = len - n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len - half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
