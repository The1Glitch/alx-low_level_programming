#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c:Char to print
 *
 * Return:1. on success 
 * On error,Errno is set appropriately, and -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

