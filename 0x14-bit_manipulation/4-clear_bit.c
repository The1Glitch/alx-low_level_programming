#include "main.h"

/**
 * clear_bit - Set the value of the given bit to 0.
 * @n: Pointer to the number to  change.
 * @index: Index of the bit set to clear.
 *
 * Return: 1 for success. -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
