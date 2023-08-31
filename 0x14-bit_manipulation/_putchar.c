#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the char c to stdout.
 * @char: the character to print
 *
 * Return: on success 1
 *on error,-1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
