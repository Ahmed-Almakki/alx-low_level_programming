#include <ctype.h>

/**
 * _isupper - test if character is upper or not
 * @c : character
 *
 * Return: 0 or 1
 */

int _isupper(char c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
