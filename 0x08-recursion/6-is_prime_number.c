#include "main.h"

/**
 * prim - fun
 * @n: param
 * @i: param
 * @j: param
 * Return: int
 */
int prim(int n,int i, int j)
{
	if (n == j)
	{
		return (0);
	}
	if (n % i == 0)
	{
		if (n > i)
		{
			return (0);
		}
		else
		{
			prim(n, (i + 1), (j + 1));
		}
	}
	else
	{
		return (prim(n, (i + 1), (j + 1)));
	}
}
/**
 * is_prime_number - fun
 * @n: param
 * Return: int
 */
int is_prime_number(int n)
{
	int j;
	int h;
	int i;

	i = 2;
	j = 1;
	if (n == 1 || n < 0)
		return (0);
	else
	{
		h = prim(n, i, j);
		return (h);
	}
}
