#include <string.h>
#include "main.h"

/**
 * puts2 - fun
 * @str: oper
 * Return: 0
 */

void puts2(char *str)
{
	int len;
	int i;

	str = "0123456789";
	len = strlen(str);
	while (i < len)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
}
