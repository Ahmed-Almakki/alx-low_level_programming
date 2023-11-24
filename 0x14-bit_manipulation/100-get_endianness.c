#include "main.h"

/**
 * get_endianness - fun
 * Return: int
 */
int get_endianness(void)
{
	int  i = 1;
	char *p = (char *)&i;

	if (*p + '0' == '1')
		return (1);
	return (0);
}
