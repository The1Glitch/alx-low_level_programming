#include "main.h"

/**
 * get_endianness - Check if a machine is little or big endian.
 * Return: Big for 0, and little for 1.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

