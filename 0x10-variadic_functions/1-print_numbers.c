#include "variadic_functions.h"
/**
 * print_numbers - fun
 * @separator: param
 * @n: param
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i == (n - 1))
		{
			break;
		}
		else
		{
			printf("%c ", *separator);
		}
	}
	printf("\n");
	va_end(arg);
}
