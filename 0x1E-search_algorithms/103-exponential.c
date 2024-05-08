#include "search_algos.h"

/**
 * _binary_search - searches for the value in th sorted array
 *                  of integers using binary search
 * @array: The pointer to the first element of the array to search
 * @left: Starting the index of the [sub]array to search
 * @right: Ending the index of the [sub]array to search
 * @value: Value to search for
 *
 * Return: The value if not present or the array is NULL, -1
 *         otherwise, the index where the value is located
 *
 * Description: prints the [sub]array being searched after each change
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for the value in an array
 *                      of integers using exponential search.
 * @array: the pointer to the first element of the array to search
 * @size: Number of elements in an array
 * @value: Value to search for
 *
 * Return: if the value is not present or the array in NULL, -1.
 *         otherwise, the index where the value is  located.
 *
 * Description: prints a value everytime it is compared in an array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[1] <= value; i = i * 2)
			printf("Vlue checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
