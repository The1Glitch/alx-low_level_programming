#include "main.h"
/**
 * _memcpy - Copies memory area,
 * @dest: destination memory area
 * @src: Source memory area.
 * @n: Bytes filled.
 * Return: The pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
