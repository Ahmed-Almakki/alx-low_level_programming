#include "main.h"
#include <string.h>
/**
 * pal - fun
 * @s: para.
 * @u: part
 * @d: param
 * Return: int
 */
int pal(char *s, int u, int d)
{
	if (s[u] != s[d])
		return (0);
	if (u == d || u > d)
		return (1);
	return (pal(s, (u + 1), (d - 1)));
}

/**
 * is_palindrome - fun
 * @s: param
 * Return: int
 */
int is_palindrome(char *s)
{
	int i;
	int j;

	i = 0;
	j = strlen(s) - 1;
	return (pal(s, i, j));
}
