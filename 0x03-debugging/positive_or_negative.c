nclude <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative : function
 * Retrun: 0
 */
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n  <  0)
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n  >  0)
	{
		printf("%d is positive", n);
	}
	return (0);
}
