#include "main.h"

/**
 * _pow - fun
 * @base: pram
 * @expon: paran
 * Return: int
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
	else if (expon < 0)
	{
		for (i = 0; i > expon; i--)
		{
			res = res / base;
		}
	}
	return (res);
}
