#include "main.h"

/**
 * length - fun
 * @s: param
 * @i: param
 * Return: int
 */

int length(int i, char *s)
{
	if (*s =='\0')
	{
		return (i);
	}
	i = i + 1;
	return (length(i, (s + 1)));
}

/**
 * _strlen_recursion - fun
 * @s: param
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i;
	int j;

	i = 0;
	j = length(i, s);
	return (j);
}
