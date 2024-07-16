#include <stdbool.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: is the value to search for
 * Return:  index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	size_t last = size - 1;
	size_t beg = 0;
	size_t j;

	while (true)
	{
		printf("Searching in array:");
		for (j = beg; j < last; j++)
		{
			printf("%d, ", array[j]);
		}
		printf("%d\n", array[last]);

		i = (beg + last) / 2;
		if (beg == last)
		{
			if ((array[i] != value) || (array == NULL))
			{
				i = -1;
				break;
			}
		}		if (array[i] == value)
		{
			i = (int) i;
			break;
		}
		if (value < array[i])
			last = (size_t)i - 1;
		if (value > array[i])
			beg = (size_t)i + 1;	
	}
	return (i);
}
