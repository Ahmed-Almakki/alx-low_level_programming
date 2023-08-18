nclude <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative : function
 * Retrun: 0
 */
void positive_or_negative(int i)
{

	if (i  <  0)
	{
		printf("%d is negative", i);
	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
	else if (i  >  0)
	{
		printf("%d is positive", i);
	}
	return (0);
}
