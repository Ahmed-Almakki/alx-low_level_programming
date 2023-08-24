#include "main.h"
#include <string.h>

/**
 * _strncpy - fun
 * @dest: op one
 * @src : op two
 * @n : nu;mber
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
