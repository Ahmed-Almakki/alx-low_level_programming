#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz ";
	char ch;
	int ln;

	ln = strlen(str);
	while (ln > 0)
	{
		ch = tolower(str[ln]);
		putchar(ch);
		ln--;
	}
	putchar('\n');
	return (0);
}
