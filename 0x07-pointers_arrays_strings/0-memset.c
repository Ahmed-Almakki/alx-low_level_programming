#include "main.h"
/**
 * _memset - fun
 * @s :op
 * @b: opr
 * @n: opre
 * Return: character
 * */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char c;

	c = (unsigned char) b;
	for (i = 0; i < n; i++)
	{
		*s = c;
		s = s + 1;
	}
	return (s);
}
