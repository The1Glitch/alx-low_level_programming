#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints sentence before the main
 * function is printed.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
