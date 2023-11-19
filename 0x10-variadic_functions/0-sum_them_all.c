#include "variadic_functions.h"

/**
 * sum_them_all - fun
 * @n:param
 * @...: params
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, j;
	va_list arg;

	va_start(arg, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = va_arg(arg, int);
			sum = sum + j;
		}
		va_end(arg);
		return (sum);
	}
}
