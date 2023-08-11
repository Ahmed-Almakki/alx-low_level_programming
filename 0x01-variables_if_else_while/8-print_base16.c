#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enrty point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char l;

	for (d = '0'; d<= '9'; d++)
	{
		putchar(d);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
