#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int ln = 0;
	char lwr;

	ln = strlen(str);
	while (i < ln)
	{
		lwr = tolower(str[i]);
		if ((lwr == 'q') | (lwr == 'e'))
		{
			i++;
		}
		else
		{
			putchar(lwr);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
