#include "main.h"

/**
 * clear_bit - Set the value of a given bit to 0.
 * @n: Pointer fo the number to change.
 * @index: Index of the bit to clear.
 *
 * Return: Success for 1, and  Failure fpr -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
