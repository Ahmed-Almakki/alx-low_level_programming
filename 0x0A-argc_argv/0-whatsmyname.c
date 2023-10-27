#include "main.h"
#include <stdio.h>

/**
 * main - fun
 * @argc: oa
 * @argv: as
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		break;
	}
	printf("\n");
	return (0);
}
