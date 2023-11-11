#include "variadic_functions.h"
/**
 * print_strings - fun
 * @separator: pa
 * @n: pr
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s = separator;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, const char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator == NULL)
		{
			printf(" ");
		}
		else if (i == (n - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(arg);
}
