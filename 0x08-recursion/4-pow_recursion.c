#include "main.h"

/**
 * int poww - fun
 * @x: param
 * @y: plaram
 * @i: param
 * Return: int
 */
int poww(int x, int y, int i)
{
	if (y == i)
		return (x);
	else
		return (x * poww(x, y, (i + 1)));
}

/**
 * int _pow_recursion - fun
 * @x: param
 * @y: param
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int j;
	int v;

	v = 1;
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
	{
		j = poww(x, y, v);
		return (j);
	}
}
