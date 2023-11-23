#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _pow - fun
 * @base: pa
 * @expon: para
 * Return:  int
 */
int _pow(double base, int expon)
{
	int res = 1;
	int i;

	if (expon > 0)
	{
		for (i = 0; i < expon; i++)
		{
			res = res * base;
		}
	}
	return (res);
}

/**
 * binary_to_uint - fun
 * @b: parameter
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len;
	unsigned int num = 0;
	char *rev;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
	}
	len = i;
	if (i == 1)
		num = b[0] - '0';
	else
	{
		rev = (char *)malloc((sizeof(char) * (i + 1)));
		if (rev != NULL)
		{
			for (j = 0; j < len; j++)
			{
				rev[j] = b[i - 1];
				if (rev[j] != '0' && rev[j] != '1')
					return (0);
				i--;
			}
			rev[j] = '\0';
		}
		for (i = 0; i < len; i++)
			num = num + (_pow(2, i) * (rev[i] - '0'));
	}
	return (num);
}
