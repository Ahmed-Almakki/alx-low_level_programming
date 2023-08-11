#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int c = 0;
	int k;
	char lwr;
	char upr;

	k = strlen(str);
	while (c < k)
	{
		lwr = tolower(str[i]);
		putchar(lwr);
		c++;
		i++;
	}
	c = 0;
	i = 0;
	while (c < k)
	{
		upr = toupper(str[i]);
		putchar(upr);
		c++;
		i++;
	}
	putchar('\n');
	return (0);
}

