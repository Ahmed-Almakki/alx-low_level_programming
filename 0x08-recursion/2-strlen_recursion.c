#include "main.h"

/**
 * int _strlen_recursion - fun
 * @s : o
 * Return: integiers
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (i + _strlen_recursion(s + 1));
}
