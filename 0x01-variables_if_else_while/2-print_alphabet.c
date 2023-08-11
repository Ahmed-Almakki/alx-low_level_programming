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

	while (str[i] != '\0')
	{
		str[i] = tolower(str[i]);
		putchar(str[i]);
		i++;
	}
	return (0);
}
