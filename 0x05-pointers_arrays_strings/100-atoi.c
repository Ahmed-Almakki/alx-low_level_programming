#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - fun
 * @s: operand
 * Return: integers
 */

int _atoi(char *s)
{
	int v;
	int len;

	len = strlen(s);
	if (len == 0)
	{
		return (0);
	}
	else
	{
		v = atoi(s);
		return (v);
	}
}
