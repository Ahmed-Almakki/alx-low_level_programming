#include <stdlib.h>
#include "main.h"

/**
 * lenn - fun
 * @s: param
 * Return: Int
 */

int lenn(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * _strdup - fun
 * @str: param
 * Return: char
 */

char *_strdup(char *str)
{
	char *t;
	int i;
	int len;

	len = lenn(str) + 1;
	t = malloc((sizeof(*str)) * len);
	if ((t == NULL) || (str = "NULL"))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= len; i++)
		{
			t[i] = str[i];
		}
		return (t);
	}
}
