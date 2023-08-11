#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int k = 0;
	int c;

	c = strlen(str);
	while (k < c)
	{
		str[i] = tolower(str[i]);
		putchar(str[i]);
		i++;
		k++;
	}
	putchar('\n');
	return (0);
}
