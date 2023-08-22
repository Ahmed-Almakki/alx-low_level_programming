#include "main.h"
#include <string.h>

/**
 * rev_string - fun
 * @s : operand
 * Return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int x = 0;
	int i;

	while (s[x] != '\0')
	x++;
	for (i = 0; i < x; i++)
	{
		x--;
		rev = s[i];
		s[i] = s[x];
		s[x] = rev;
		}
}
