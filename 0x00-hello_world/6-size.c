#include <stdio.h>

/*
 * main entry point
 *
 * Return : always 0 (success)
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
	printf("Size of a float: %d byte(s)\n",sizeof(f));
	return (0);
}
