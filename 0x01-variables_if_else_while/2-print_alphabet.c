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
	char str[] = "AbcdEfgHijKlmNopQrsTuvWxyZ";
	int i = 0;
	int k = 0;
	int c;

	c = strlen(str);
	while (k <= c)
	{
		str[i] = tolower(str[i]);
		putchar(str[i]);
		i++;
		k++;
	}
	return (0);
}
