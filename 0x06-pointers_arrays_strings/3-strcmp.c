#include <string.h>

/**
 * _strcmp - fun
 * @s1 : op one
 * @s2 : op two
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		j = s1[i] - s2[i];
		if (j > 0)
		{
			return (j);
		}
		else if (j < 0)
		{
			return (j);
		}
		i++;
	}
	j = 0;
	return (j);
}
