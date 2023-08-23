#include "main.h"

/**
 * _atoi - fun
 * @s: ope
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int x = 1;

	do {
		if (*s == '-')
			x *= -1;
		else if ((*s >= '0') && (*s <= '9'))
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * x);
}
