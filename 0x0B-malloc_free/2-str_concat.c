#include "main.h"
#include <stdlib.h>

/**
 * lenn - fun
 * @s: char
 * Return: int
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
 * str_concat - fun
 * @s1:param
 * @s2: paam
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i;
	int j;
	int size;

	size = lenn(s1) + lenn(s2);
	t = malloc(size);
	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < lenn(s1); i++)
		{
			t[i] = s1[i];
		}
		for (j = 0; j < lenn(s2); j++)
		{
			t[i] = s2[j];
			i++;
		}
	}
	t[size] = '\0';
	return (t);
}
