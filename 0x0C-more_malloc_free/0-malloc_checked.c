#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocated memory by using malloc
 * @b:allocate number of bytes
 *
 * Return: a pointer to be allocated in the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
