#include "main.h"

/**
 * more_numbers - function
 * Return: notjing
 */
void more_numbers(void)
{
	int s = 0;
	int e = 14;
	int i;

	for (i = 1; i <= 10; i++)
	{
		while (s <= e)
		{
			_putchar(s > 9 ? (s / 10) + '0' : s + '0');
			if (s > 9)
				_putchar ((s % 10) + '0');
			s++;
		}
		s = 0;
		_putchar('\n');
	}
}
