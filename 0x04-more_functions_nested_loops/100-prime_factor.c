#include <math.h>
#include <stdio.h>

/**
 * maxPrimeFactors : function
 * @n : operand
 * Return: maxnumber
 */
int maxPrimeFactors(long int n)
{
	long int maxPrime = -1;
	int i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 1;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}
	return (maxPrime);
}

/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;

	printf("%d\n", maxPrimeFactors(n));
	return (0);
}
