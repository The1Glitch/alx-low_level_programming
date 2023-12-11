#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src,
 * include the terminating NULL byte, to the
 * buffer pointed to by dest.
 * @dest: Destination.
 * @src: Source.
 * Return: The pointer to by dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
