#include <string.h>

/**
 * string_toupper - fun
 * @n : op
 * Return: char
 */

char *string_toupper(char *n)
{
	int len;
	int i;

	len = strlen(n);
	for (i = 0; i < len; i++)
	{
		if (((int) n[i] >= 97) && ((int) n[i] <= 122))
		{
			n[i] = (int) n[i] - 32;
		}
	}
	return (n);
}
