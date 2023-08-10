#include <stdio.h>

/**
 * main - Entry point
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int i;
	long int ii;
	long long int iii;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(x));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(ii));
	printf("Size of a long long int: %d byte(s)\n", sizeof(iii));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
