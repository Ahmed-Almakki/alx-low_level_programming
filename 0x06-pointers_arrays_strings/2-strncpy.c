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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
