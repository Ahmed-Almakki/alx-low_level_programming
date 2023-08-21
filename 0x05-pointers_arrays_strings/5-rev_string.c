#include "main.h"
#include <string.h>

/**
 * rev_string - fun
 * @s : operand
 * Return: 0
 */

void rev_string(char *s)
{
	int len;
	int i = 0;

	len = strlen(s);
	while (i < len)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
