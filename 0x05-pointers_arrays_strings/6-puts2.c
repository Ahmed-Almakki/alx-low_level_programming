#include "main.h"
#include <string.h>


/**
 * puts2 - fun
 * @str: oper
 * Return: 0
 */
void puts2(char *str)
{
	int len;
	int i = 0;

	len = strlen(str);
	while (i < len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
