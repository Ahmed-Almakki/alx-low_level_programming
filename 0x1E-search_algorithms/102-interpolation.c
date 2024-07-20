#include "search_algos.h"
/**
 * interpolation_search -  searches for a value in a sorted array
 * @array: parameter
 * @size: parameter
 * @value: parameter
 * Return: location
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t pos = 0;
	size_t i;

	if (array == NULL)
		return (-1);
	while (pos < size)
	{
		size_t ll;

		ll = value - array[low];
		pos = low + ((ll * (high - low)) / (array[high] - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		else if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			i = pos;
			break;
		}
		else if (array[pos] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
	}
	return (i);
}
