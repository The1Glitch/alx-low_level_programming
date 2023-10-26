#include "main.h"

/**
 * set_bit - Set a bit at a given index to 1.
 * @n: Pointer of the number to change.
 * @index: Index of the bit to set to 1.
 *
 * Return: success for 1, failure for -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
