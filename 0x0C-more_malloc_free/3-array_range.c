#include <stdlib.h>
#include "main.h"

/**
 * *array_range -array of integers to be created
 * @min: stores values of minimum range
 * @max:number of elements and maximum range of values to be stored 
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
