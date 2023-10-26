#include "main.h"

/**
 * prim - fun
 * @n: param
 * @i: param
 * Return: int
 */
int prim(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0 && i != n)
	{
		return (0);
	}
		return (prim(n, (i + 1)));
}
/**
 * is_prime_number - fun
 * @n: param
 * Return: int
 */
int is_prime_number(int n)
{
	int h;
	int i;

	i = 2;
	if (n == 1 || n < 0)
	{
		return (0);
	}
	else
	{
		h = prim(n, i);
		return (h);
	}
}
