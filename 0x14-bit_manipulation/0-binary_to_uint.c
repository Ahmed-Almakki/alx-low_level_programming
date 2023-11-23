#include "main.h"

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

	for (i = 0; b[i] != '\0'; i++)
	{
	}
	if (b == NULL)
		return (0);
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
