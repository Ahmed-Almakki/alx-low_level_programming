#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - fun
 * @argc: para
 * @argv: param
 * Return: int
 */

int main(int argc, char *argv[])
{
	int res;
	int agc;
	int st;
	int sc;

	res = 1;
	agc = argc - 1;
	if(agc < 2)
	{
		printf("Error\n");
		return (1);
	}
	st = atoi(argv[1]);
	sc = atoi(argv[2]);
	res = st * sc;
	printf("%d\n", res);
	return (0);
}
