#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int qu = '0';
	int i = 0;

	while (i < 10)
	{
		putchar(qu);
		if (qu == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		qu++;
		i++;
	}
	putchar('\n');
	return (0);
}
