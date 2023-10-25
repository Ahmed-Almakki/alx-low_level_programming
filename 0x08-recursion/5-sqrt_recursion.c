#include "main.h"

/**
 * sqt - fun
 * @n: param
 * @i: param
 * @k: param
 * Return: int
 */

int sqt(int n, int i, int k)
{
	k = i * i;
	if (i == n || k > n)
	{
		return (-1);
	}
	else if (k == n)
	{
		return (i);
	}
	else
	{
		return (sqt(n, (i + 1), k));
	}
}

/**
 * _sqrt_recursion - fun
 * @n: param
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i;
	int k;

	i = 1;
	k = 1;
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (sqt(n, i, k));
	}
}
