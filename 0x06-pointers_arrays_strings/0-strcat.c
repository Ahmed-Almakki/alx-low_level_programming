#include "main.h"
#include <string.h>

/**
 * _strcat - fun
 * @dest: op one
 * @src: op two
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	return (dest);
}
