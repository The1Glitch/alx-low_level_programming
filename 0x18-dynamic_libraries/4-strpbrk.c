#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: First string.
 * @accept: Second string.
 * Return: Pointer to the bytes in s that matches one of the 
 * bytes in accept, or NULL if no such bytes is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
