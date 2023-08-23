#include "main.h"
#include <string.h>

/**
 * _strncat - fun
 * @dest : op one
 * @src: op two
 * @n : number
 * Return: sting
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;
	int size;

	len = strlen(dest);
	size = sizeof(dest);
	if (n > size)
		n = size;
	if (n == 0)
		dest[len] = '\n';
		return (dest);
	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	return (dest);
}
