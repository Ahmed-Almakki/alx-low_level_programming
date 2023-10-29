#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - fun
 * @argc: param
 * @argv: param
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int ii;
	int res;
	char num;

	res = 0;
	for (ii = 1; ii < argc; ii++)
	{
		num = *argv[ii];
		if (isdigit(num) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	if ((argc - 1) == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			res = res + j;
		}
		printf("%d\n", res);
	}
	return (0);
}
