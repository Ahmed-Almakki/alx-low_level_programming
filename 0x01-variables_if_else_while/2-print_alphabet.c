#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * main Entry point
 * return: Always 0 Success
 */
int main(void)
{
	char str[] = "AbcdEfgHijKlmNopQrsTuvWxyZ";
	int i = 0;
	int k = 0;

	while (k <= strlen(str))
	{
		str[i] = tolower(str[i]);
		putchar(str[i]);
		i++;
	}
	return (0);
}
