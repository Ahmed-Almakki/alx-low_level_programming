#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i = 0;

	while (i < size)
	{
		if (array[i] < value)
		{
			printf("value checked array [%ld] = [%d]\n", i, array[i]);
			i += jump;
		}
		else
		{
			size_t j;

			printf("value found between indexes [%ld] and [%ld]\n", i - jump, i);
			for (j = i - jump; j <= i; j++)
			{
				printf("value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
				{
					i = j;
					break;
				}
			}
			break;
		}
	}
	if (i > size)
	{
		printf("value found between indexes [%ld] and [%ld]\n", i - jump, i);
		return (-1);
	}
	return (i);
}
