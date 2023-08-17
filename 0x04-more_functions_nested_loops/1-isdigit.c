#include <ctype.h>

/**
 * _isdigit - test function
 * @c : character
 * Return: 0 or 1
 */
int _isdigit(char c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
