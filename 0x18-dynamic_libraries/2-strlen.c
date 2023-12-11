#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Input stringeturn.
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
