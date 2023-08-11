#include <stdlib.h>
#include "main.h"

/**
 * *_memset - memory to be filled with a constant byte
 * @s: memory area has to be filled
 * @b: copy character
 * @n: number of times to copy b
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - array memory to be allocated
 * @nmemb: number of elements in the arrays
 * @size: Size of each element
 *
 * Return:allocates memory to the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);        
  if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
