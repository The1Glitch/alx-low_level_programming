#include "search_algo.h"

/**
 * interpolation_search - Searches the value of an array of
 * integers using the interpolation search algorithm
 *
 * @array: the input array
 * @size: The size of the array
 * @value: The value to search in
 * Retrun: The index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] == value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}
	return (-1);
}